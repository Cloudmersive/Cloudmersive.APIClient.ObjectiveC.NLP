#import <Foundation/Foundation.h>
#import "CMRephraseRequest.h"
#import "CMRephraseResponse.h"
#import "CMApi.h"

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



@interface CMRephraseApi: NSObject <CMApi>

extern NSString* kCMRephraseApiErrorDomain;
extern NSInteger kCMRephraseApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(CMApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Rephrase, paraphrase English text sentence-by-sentence using Deep Learning AI
/// Automatically rephrases or paraphrases input text in English sentence by sentence using advanced Deep Learning and Neural NLP.  Creates multiple reprhasing candidates per input sentence, from 1 to 10 possible rephrasings of the original sentence.  Seeks to preserve original semantic meaning in rephrased output candidates.  Consumes 1-2 API calls per output rephrasing option generated, per sentence.
///
/// @param input Input rephrase request
/// 
///  code:200 message:"OK"
///
/// @return CMRephraseResponse*
-(NSURLSessionTask*) rephraseEnglishRephraseSentenceBySentenceWithInput: (CMRephraseRequest*) input
    completionHandler: (void (^)(CMRephraseResponse* output, NSError* error)) handler;



@end