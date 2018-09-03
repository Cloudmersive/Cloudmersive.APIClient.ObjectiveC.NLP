#import <Foundation/Foundation.h>

/**
* nlpapi
* The powerful Natural Language Processing APIs let you perform part of speech tagging, entity identification, sentence parsing, and much more to help you understand the meaning of unstructured text.
*
* OpenAPI spec version: v1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


/**
 * A key for deserialization ErrorDomain
 */
extern NSString *const CMDeserializationErrorDomainKey;

/**
 * Code for deserialization type mismatch error
 */
extern NSInteger const CMTypeMismatchErrorCode;

/**
 * Code for deserialization empty value error
 */
extern NSInteger const CMEmptyValueOccurredErrorCode;

/**
 * Error code for unknown response
 */
extern NSInteger const CMUnknownResponseObjectErrorCode;

@protocol CMResponseDeserializer <NSObject>

/**
 * Deserializes the given data to Objective-C object.
 *
 * @param data The data will be deserialized.
 * @param className The type of objective-c object.
 * @param error The error
 */
- (id) deserialize:(id) data class:(NSString *) className error:(NSError**)error;

@end

@interface CMResponseDeserializer : NSObject <CMResponseDeserializer>

/**
 *  If an null value occurs in dictionary or array if set to YES whole response will be invalid else will be ignored
 *  @default NO
 */
@property (nonatomic, assign) BOOL treatNullAsError;

@end