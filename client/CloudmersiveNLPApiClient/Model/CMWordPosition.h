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





@protocol CMWordPosition
@end

@interface CMWordPosition : CMObject

/* Word as a string [optional]
 */
@property(nonatomic) NSString* word;
/* Zero-based index of the word; first word has index 0, second word has index 1 and so on [optional]
 */
@property(nonatomic) NSNumber* wordIndex;
/* Zero-based character offset at which the word begins in the input string [optional]
 */
@property(nonatomic) NSNumber* startPosition;
/* Zero-based character offset at which the word ends in the input string [optional]
 */
@property(nonatomic) NSNumber* endPosition;

@end
