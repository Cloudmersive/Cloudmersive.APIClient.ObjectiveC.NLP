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


#import "CMCorrectWordInSentence.h"
@protocol CMCorrectWordInSentence;
@class CMCorrectWordInSentence;



@protocol CMCheckSentenceResponse
@end

@interface CMCheckSentenceResponse : CMObject

/* Number of incorrect words [optional]
 */
@property(nonatomic) NSNumber* incorrectCount;
/* Words in the sentence, both correct and incorrect [optional]
 */
@property(nonatomic) NSArray<CMCorrectWordInSentence>* words;

@end
