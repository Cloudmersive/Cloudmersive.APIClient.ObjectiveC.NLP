# CMSegmentationApi

All URIs are relative to *https://api.cloudmersive.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**segmentationGetSentences**](CMSegmentationApi.md#segmentationgetsentences) | **POST** /nlp-v2/segmentation/sentences | Extract sentences from string
[**segmentationGetWords**](CMSegmentationApi.md#segmentationgetwords) | **POST** /nlp-v2/segmentation/words | Get words in input string


# **segmentationGetSentences**
```objc
-(NSURLSessionTask*) segmentationGetSentencesWithInput: (CMSentenceSegmentationRequest*) input
        completionHandler: (void (^)(CMSentenceSegmentationResponse* output, NSError* error)) handler;
```

Extract sentences from string

Segment an input string into separate sentences, output result as a string.

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMSentenceSegmentationRequest* input = [[CMSentenceSegmentationRequest alloc] init]; // Input string

CMSegmentationApi*apiInstance = [[CMSegmentationApi alloc] init];

// Extract sentences from string
[apiInstance segmentationGetSentencesWithInput:input
          completionHandler: ^(CMSentenceSegmentationResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMSegmentationApi->segmentationGetSentences: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**CMSentenceSegmentationRequest***](CMSentenceSegmentationRequest.md)| Input string | 

### Return type

[**CMSentenceSegmentationResponse***](CMSentenceSegmentationResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **segmentationGetWords**
```objc
-(NSURLSessionTask*) segmentationGetWordsWithInput: (CMGetWordsRequest*) input
        completionHandler: (void (^)(CMGetWordsResponse* output, NSError* error)) handler;
```

Get words in input string

Get the component words in an input string

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMGetWordsRequest* input = [[CMGetWordsRequest alloc] init]; // String to process

CMSegmentationApi*apiInstance = [[CMSegmentationApi alloc] init];

// Get words in input string
[apiInstance segmentationGetWordsWithInput:input
          completionHandler: ^(CMGetWordsResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMSegmentationApi->segmentationGetWords: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**CMGetWordsRequest***](CMGetWordsRequest.md)| String to process | 

### Return type

[**CMGetWordsResponse***](CMGetWordsResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

