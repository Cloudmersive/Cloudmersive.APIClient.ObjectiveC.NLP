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


#import "CMRephrasedSentenceOption.h"
@protocol CMRephrasedSentenceOption;
@class CMRephrasedSentenceOption;



@protocol CMRephrasedSentence
@end

@interface CMRephrasedSentence : CMObject

/* Index of the sentence, 1-based, ordered [optional]
 */
@property(nonatomic) NSNumber* sentenceIndex;
/* Original input sentence text [optional]
 */
@property(nonatomic) NSString* originalSentenceText;
/* Rephrasing text options, candidates of the original input sentence, in order - with best candidate first [optional]
 */
@property(nonatomic) NSArray<CMRephrasedSentenceOption>* rephrasings;

@end