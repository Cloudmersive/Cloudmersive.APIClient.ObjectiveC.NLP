#import <Foundation/Foundation.h>

@class CMApiClient;

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


@protocol CMApi <NSObject>

@property(readonly, nonatomic, strong) CMApiClient *apiClient;

-(instancetype) initWithApiClient:(CMApiClient *)apiClient;

-(void) setDefaultHeaderValue:(NSString*) value forKey:(NSString*)key;
-(NSString*) defaultHeaderForKey:(NSString*)key;

-(NSDictionary *)defaultHeaders;

@end
