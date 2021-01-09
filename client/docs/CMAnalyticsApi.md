# CMAnalyticsApi

All URIs are relative to *https://api.cloudmersive.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**analyticsHateSpeech**](CMAnalyticsApi.md#analyticshatespeech) | **POST** /nlp-v2/analytics/hate-speech | Perform Hate Speech Analysis and Detection on Text
[**analyticsProfanity**](CMAnalyticsApi.md#analyticsprofanity) | **POST** /nlp-v2/analytics/profanity | Perform Profanity and Obscene Language Analysis and Detection on Text
[**analyticsSentiment**](CMAnalyticsApi.md#analyticssentiment) | **POST** /nlp-v2/analytics/sentiment | Perform Sentiment Analysis and Classification on Text
[**analyticsSimilarity**](CMAnalyticsApi.md#analyticssimilarity) | **POST** /nlp-v2/analytics/similarity | Perform Semantic Similarity Comparison of Two Strings
[**analyticsSubjectivity**](CMAnalyticsApi.md#analyticssubjectivity) | **POST** /nlp-v2/analytics/subjectivity | Perform Subjectivity and Objectivity Analysis on Text


# **analyticsHateSpeech**
```objc
-(NSURLSessionTask*) analyticsHateSpeechWithInput: (CMHateSpeechAnalysisRequest*) input
        completionHandler: (void (^)(CMHateSpeechAnalysisResponse* output, NSError* error)) handler;
```

Perform Hate Speech Analysis and Detection on Text

Analyze input text using advanced Hate Speech Analysis to determine if the input contains hate speech language.  Supports English language input.  Consumes 1-2 API calls per sentence.

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMHateSpeechAnalysisRequest* input = [[CMHateSpeechAnalysisRequest alloc] init]; // Input hate speech analysis request

CMAnalyticsApi*apiInstance = [[CMAnalyticsApi alloc] init];

// Perform Hate Speech Analysis and Detection on Text
[apiInstance analyticsHateSpeechWithInput:input
          completionHandler: ^(CMHateSpeechAnalysisResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMAnalyticsApi->analyticsHateSpeech: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**CMHateSpeechAnalysisRequest***](CMHateSpeechAnalysisRequest.md)| Input hate speech analysis request | 

### Return type

[**CMHateSpeechAnalysisResponse***](CMHateSpeechAnalysisResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **analyticsProfanity**
```objc
-(NSURLSessionTask*) analyticsProfanityWithInput: (CMProfanityAnalysisRequest*) input
        completionHandler: (void (^)(CMProfanityAnalysisResponse* output, NSError* error)) handler;
```

Perform Profanity and Obscene Language Analysis and Detection on Text

Analyze input text using advanced Profanity and Obscene Language Analysis to determine if the input contains profane language.  Supports English language input.  Consumes 1-2 API calls per sentence.

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMProfanityAnalysisRequest* input = [[CMProfanityAnalysisRequest alloc] init]; // Input profanity analysis request

CMAnalyticsApi*apiInstance = [[CMAnalyticsApi alloc] init];

// Perform Profanity and Obscene Language Analysis and Detection on Text
[apiInstance analyticsProfanityWithInput:input
          completionHandler: ^(CMProfanityAnalysisResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMAnalyticsApi->analyticsProfanity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**CMProfanityAnalysisRequest***](CMProfanityAnalysisRequest.md)| Input profanity analysis request | 

### Return type

[**CMProfanityAnalysisResponse***](CMProfanityAnalysisResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **analyticsSentiment**
```objc
-(NSURLSessionTask*) analyticsSentimentWithInput: (CMSentimentAnalysisRequest*) input
        completionHandler: (void (^)(CMSentimentAnalysisResponse* output, NSError* error)) handler;
```

Perform Sentiment Analysis and Classification on Text

Analyze input text using advanced Sentiment Analysis to determine if the input is positive, negative, or neutral.  Supports English language input.  Consumes 1-2 API calls per sentence.

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMSentimentAnalysisRequest* input = [[CMSentimentAnalysisRequest alloc] init]; // Input sentiment analysis request

CMAnalyticsApi*apiInstance = [[CMAnalyticsApi alloc] init];

// Perform Sentiment Analysis and Classification on Text
[apiInstance analyticsSentimentWithInput:input
          completionHandler: ^(CMSentimentAnalysisResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMAnalyticsApi->analyticsSentiment: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**CMSentimentAnalysisRequest***](CMSentimentAnalysisRequest.md)| Input sentiment analysis request | 

### Return type

[**CMSentimentAnalysisResponse***](CMSentimentAnalysisResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **analyticsSimilarity**
```objc
-(NSURLSessionTask*) analyticsSimilarityWithInput: (CMSimilarityAnalysisRequest*) input
        completionHandler: (void (^)(CMSimilarityAnalysisResponse* output, NSError* error)) handler;
```

Perform Semantic Similarity Comparison of Two Strings

Analyze two input text strings, typically sentences, and determine the semantic similarity of each.  Semantic similarity refers to the degree to which two sentences mean the same thing semantically.  Uses advanced Deep Learning to perform the semantic similarity comparison.  Consumes 1-2 API calls per sentence.

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMSimilarityAnalysisRequest* input = [[CMSimilarityAnalysisRequest alloc] init]; // Input similarity analysis request

CMAnalyticsApi*apiInstance = [[CMAnalyticsApi alloc] init];

// Perform Semantic Similarity Comparison of Two Strings
[apiInstance analyticsSimilarityWithInput:input
          completionHandler: ^(CMSimilarityAnalysisResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMAnalyticsApi->analyticsSimilarity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**CMSimilarityAnalysisRequest***](CMSimilarityAnalysisRequest.md)| Input similarity analysis request | 

### Return type

[**CMSimilarityAnalysisResponse***](CMSimilarityAnalysisResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **analyticsSubjectivity**
```objc
-(NSURLSessionTask*) analyticsSubjectivityWithInput: (CMSubjectivityAnalysisRequest*) input
        completionHandler: (void (^)(CMSubjectivityAnalysisResponse* output, NSError* error)) handler;
```

Perform Subjectivity and Objectivity Analysis on Text

Analyze input text using advanced Subjectivity and Objectivity Language Analysis to determine if the input text is objective or subjective, and how much.  Supports English language input.  Consumes 1-2 API calls per sentence.

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMSubjectivityAnalysisRequest* input = [[CMSubjectivityAnalysisRequest alloc] init]; // Input subjectivity analysis request

CMAnalyticsApi*apiInstance = [[CMAnalyticsApi alloc] init];

// Perform Subjectivity and Objectivity Analysis on Text
[apiInstance analyticsSubjectivityWithInput:input
          completionHandler: ^(CMSubjectivityAnalysisResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMAnalyticsApi->analyticsSubjectivity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**CMSubjectivityAnalysisRequest***](CMSubjectivityAnalysisRequest.md)| Input subjectivity analysis request | 

### Return type

[**CMSubjectivityAnalysisResponse***](CMSubjectivityAnalysisResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

