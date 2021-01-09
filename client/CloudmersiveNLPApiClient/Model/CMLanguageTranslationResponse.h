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





@protocol CMLanguageTranslationResponse
@end

@interface CMLanguageTranslationResponse : CMObject

/* True if the language detection operation was successful, false otherwise [optional]
 */
@property(nonatomic) NSNumber* successful;
/* Translated text in target language [optional]
 */
@property(nonatomic) NSString* translatedTextResult;
/* Number of sentences in input text [optional]
 */
@property(nonatomic) NSNumber* sentenceCount;

@end
