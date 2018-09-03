#import <Foundation/Foundation.h>
#import "CMObject.h"

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


#import "CMWordPosition.h"
@protocol CMWordPosition;
@class CMWordPosition;



@protocol CMGetWordsJsonResponse
@end

@interface CMGetWordsJsonResponse : CMObject

/* Array of words [optional]
 */
@property(nonatomic) NSArray<CMWordPosition>* words;

@end