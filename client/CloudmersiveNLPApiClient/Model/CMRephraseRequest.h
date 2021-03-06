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





@protocol CMRephraseRequest
@end

@interface CMRephraseRequest : CMObject

/* Text to rephrase [optional]
 */
@property(nonatomic) NSString* textToTranslate;
/* The number of rephrasing output options you would like per sentence; possible values are 1 to 10.  Default is 2. [optional]
 */
@property(nonatomic) NSNumber* targetRephrasingCount;

@end
