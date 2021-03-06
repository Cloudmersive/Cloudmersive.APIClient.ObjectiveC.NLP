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





@protocol CMSimilarityAnalysisRequest
@end

@interface CMSimilarityAnalysisRequest : CMObject

/* First text to analyze [optional]
 */
@property(nonatomic) NSString* textToAnalyze1;
/* Second text to analyze [optional]
 */
@property(nonatomic) NSString* textToAnalyze2;

@end
