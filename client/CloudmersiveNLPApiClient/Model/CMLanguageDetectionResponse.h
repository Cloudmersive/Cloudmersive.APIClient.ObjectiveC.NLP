#import <Foundation/Foundation.h>
#import "CMObject.h"

/**
* nlpapiv2
* The powerful Natural Language Processing APIs (v2) let you perform part of speech tagging, entity identification, sentence parsing, and much more to help you understand the meaning of unstructured text.
*
* OpenAPI spec version: v1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/





@protocol CMLanguageDetectionResponse
@end

@interface CMLanguageDetectionResponse : CMObject

/* True if the language detection operation was successful, false otherwise [optional]
 */
@property(nonatomic) NSNumber* successful;
/* ISO 639 three letter language code [optional]
 */
@property(nonatomic) NSString* detectedLanguageThreeLetterCode;
/* The full name (in English) of the detected language [optional]
 */
@property(nonatomic) NSString* detectedLanguageFullName;

@end
