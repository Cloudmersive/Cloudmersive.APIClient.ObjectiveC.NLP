#import <Foundation/Foundation.h>
#import "CMHateSpeechAnalysisRequest.h"
#import "CMHateSpeechAnalysisResponse.h"
#import "CMProfanityAnalysisRequest.h"
#import "CMProfanityAnalysisResponse.h"
#import "CMSentimentAnalysisRequest.h"
#import "CMSentimentAnalysisResponse.h"
#import "CMSimilarityAnalysisRequest.h"
#import "CMSimilarityAnalysisResponse.h"
#import "CMSubjectivityAnalysisRequest.h"
#import "CMSubjectivityAnalysisResponse.h"
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



@interface CMAnalyticsApi: NSObject <CMApi>

extern NSString* kCMAnalyticsApiErrorDomain;
extern NSInteger kCMAnalyticsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(CMApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Perform Hate Speech Analysis and Detection on Text
/// Analyze input text using advanced Hate Speech Analysis to determine if the input contains hate speech language.  Supports English language input.  Consumes 1-2 API calls per sentence.
///
/// @param input Input hate speech analysis request
/// 
///  code:200 message:"OK"
///
/// @return CMHateSpeechAnalysisResponse*
-(NSURLSessionTask*) analyticsHateSpeechWithInput: (CMHateSpeechAnalysisRequest*) input
    completionHandler: (void (^)(CMHateSpeechAnalysisResponse* output, NSError* error)) handler;


/// Perform Profanity and Obscene Language Analysis and Detection on Text
/// Analyze input text using advanced Profanity and Obscene Language Analysis to determine if the input contains profane language.  Supports English language input.  Consumes 1-2 API calls per sentence.
///
/// @param input Input profanity analysis request
/// 
///  code:200 message:"OK"
///
/// @return CMProfanityAnalysisResponse*
-(NSURLSessionTask*) analyticsProfanityWithInput: (CMProfanityAnalysisRequest*) input
    completionHandler: (void (^)(CMProfanityAnalysisResponse* output, NSError* error)) handler;


/// Perform Sentiment Analysis and Classification on Text
/// Analyze input text using advanced Sentiment Analysis to determine if the input is positive, negative, or neutral.  Supports English language input.  Consumes 1-2 API calls per sentence.
///
/// @param input Input sentiment analysis request
/// 
///  code:200 message:"OK"
///
/// @return CMSentimentAnalysisResponse*
-(NSURLSessionTask*) analyticsSentimentWithInput: (CMSentimentAnalysisRequest*) input
    completionHandler: (void (^)(CMSentimentAnalysisResponse* output, NSError* error)) handler;


/// Perform Semantic Similarity Comparison of Two Strings
/// Analyze two input text strings, typically sentences, and determine the semantic similarity of each.  Semantic similarity refers to the degree to which two sentences mean the same thing semantically.  Uses advanced Deep Learning to perform the semantic similarity comparison.  Consumes 1-2 API calls per sentence.
///
/// @param input Input similarity analysis request
/// 
///  code:200 message:"OK"
///
/// @return CMSimilarityAnalysisResponse*
-(NSURLSessionTask*) analyticsSimilarityWithInput: (CMSimilarityAnalysisRequest*) input
    completionHandler: (void (^)(CMSimilarityAnalysisResponse* output, NSError* error)) handler;


/// Perform Subjectivity and Objectivity Analysis on Text
/// Analyze input text using advanced Subjectivity and Objectivity Language Analysis to determine if the input text is objective or subjective, and how much.  Supports English language input.  Consumes 1-2 API calls per sentence.
///
/// @param input Input subjectivity analysis request
/// 
///  code:200 message:"OK"
///
/// @return CMSubjectivityAnalysisResponse*
-(NSURLSessionTask*) analyticsSubjectivityWithInput: (CMSubjectivityAnalysisRequest*) input
    completionHandler: (void (^)(CMSubjectivityAnalysisResponse* output, NSError* error)) handler;



@end
