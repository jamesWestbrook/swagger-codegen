#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


#import "SWGOrderManagedObject.h"
#import "SWGOrder.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

@interface SWGOrderManagedObjectBuilder : NSObject



-(SWGOrderManagedObject*)createNewSWGOrderManagedObjectInContext:(NSManagedObjectContext*)context;

-(SWGOrderManagedObject*)SWGOrderManagedObjectFromSWGOrder:(SWGOrder*)Order context:(NSManagedObjectContext*)context;

-(void)updateSWGOrderManagedObject:(SWGOrderManagedObject*)Order withSWGOrder:(SWGOrder*)Order2;

-(SWGOrder*)SWGOrderFromSWGOrderManagedObject:(SWGOrderManagedObject*)obj;

-(void)updateSWGOrder:(SWGOrder*)Order withSWGOrderManagedObject:(SWGOrderManagedObject*)Order2;

@end
