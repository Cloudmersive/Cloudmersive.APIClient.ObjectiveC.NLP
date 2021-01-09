# CMPosTaggerApi

All URIs are relative to *https://api.cloudmersive.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**posTaggerTagAdjectives**](CMPosTaggerApi.md#postaggertagadjectives) | **POST** /nlp-v2/pos/tag/adjectives | Part-of-speech tag a string, filter to adjectives
[**posTaggerTagAdverbs**](CMPosTaggerApi.md#postaggertagadverbs) | **POST** /nlp-v2/pos/tag/adverbs | Part-of-speech tag a string, filter to adverbs
[**posTaggerTagNouns**](CMPosTaggerApi.md#postaggertagnouns) | **POST** /nlp-v2/pos/tag/nouns | Part-of-speech tag a string, filter to nouns
[**posTaggerTagPronouns**](CMPosTaggerApi.md#postaggertagpronouns) | **POST** /nlp-v2/pos/tag/pronouns | Part-of-speech tag a string, filter to pronouns
[**posTaggerTagSentence**](CMPosTaggerApi.md#postaggertagsentence) | **POST** /nlp-v2/pos/tag/sentence | Part-of-speech tag a string
[**posTaggerTagVerbs**](CMPosTaggerApi.md#postaggertagverbs) | **POST** /nlp-v2/pos/tag/verbs | Part-of-speech tag a string, filter to verbs


# **posTaggerTagAdjectives**
```objc
-(NSURLSessionTask*) posTaggerTagAdjectivesWithRequest: (CMPosRequest*) request
        completionHandler: (void (^)(CMPosResponse* output, NSError* error)) handler;
```

Part-of-speech tag a string, filter to adjectives

Part-of-speech (POS) tag a string, find the adjectives, and return result as JSON

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMPosRequest* request = [[CMPosRequest alloc] init]; // Input string

CMPosTaggerApi*apiInstance = [[CMPosTaggerApi alloc] init];

// Part-of-speech tag a string, filter to adjectives
[apiInstance posTaggerTagAdjectivesWithRequest:request
          completionHandler: ^(CMPosResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMPosTaggerApi->posTaggerTagAdjectives: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**CMPosRequest***](CMPosRequest.md)| Input string | 

### Return type

[**CMPosResponse***](CMPosResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **posTaggerTagAdverbs**
```objc
-(NSURLSessionTask*) posTaggerTagAdverbsWithRequest: (CMPosRequest*) request
        completionHandler: (void (^)(CMPosResponse* output, NSError* error)) handler;
```

Part-of-speech tag a string, filter to adverbs

Part-of-speech (POS) tag a string, find the adverbs, and return result as JSON

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMPosRequest* request = [[CMPosRequest alloc] init]; // Input string

CMPosTaggerApi*apiInstance = [[CMPosTaggerApi alloc] init];

// Part-of-speech tag a string, filter to adverbs
[apiInstance posTaggerTagAdverbsWithRequest:request
          completionHandler: ^(CMPosResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMPosTaggerApi->posTaggerTagAdverbs: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**CMPosRequest***](CMPosRequest.md)| Input string | 

### Return type

[**CMPosResponse***](CMPosResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **posTaggerTagNouns**
```objc
-(NSURLSessionTask*) posTaggerTagNounsWithRequest: (CMPosRequest*) request
        completionHandler: (void (^)(CMPosResponse* output, NSError* error)) handler;
```

Part-of-speech tag a string, filter to nouns

Part-of-speech (POS) tag a string, find the nouns, and return result as JSON

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMPosRequest* request = [[CMPosRequest alloc] init]; // Input string

CMPosTaggerApi*apiInstance = [[CMPosTaggerApi alloc] init];

// Part-of-speech tag a string, filter to nouns
[apiInstance posTaggerTagNounsWithRequest:request
          completionHandler: ^(CMPosResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMPosTaggerApi->posTaggerTagNouns: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**CMPosRequest***](CMPosRequest.md)| Input string | 

### Return type

[**CMPosResponse***](CMPosResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **posTaggerTagPronouns**
```objc
-(NSURLSessionTask*) posTaggerTagPronounsWithRequest: (CMPosRequest*) request
        completionHandler: (void (^)(CMPosResponse* output, NSError* error)) handler;
```

Part-of-speech tag a string, filter to pronouns

Part-of-speech (POS) tag a string, find the pronouns, and return result as JSON

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMPosRequest* request = [[CMPosRequest alloc] init]; // Input string

CMPosTaggerApi*apiInstance = [[CMPosTaggerApi alloc] init];

// Part-of-speech tag a string, filter to pronouns
[apiInstance posTaggerTagPronounsWithRequest:request
          completionHandler: ^(CMPosResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMPosTaggerApi->posTaggerTagPronouns: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**CMPosRequest***](CMPosRequest.md)| Input string | 

### Return type

[**CMPosResponse***](CMPosResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **posTaggerTagSentence**
```objc
-(NSURLSessionTask*) posTaggerTagSentenceWithRequest: (CMPosRequest*) request
        completionHandler: (void (^)(CMPosResponse* output, NSError* error)) handler;
```

Part-of-speech tag a string

Part-of-speech (POS) tag a string and return result as JSON

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMPosRequest* request = [[CMPosRequest alloc] init]; // Input string

CMPosTaggerApi*apiInstance = [[CMPosTaggerApi alloc] init];

// Part-of-speech tag a string
[apiInstance posTaggerTagSentenceWithRequest:request
          completionHandler: ^(CMPosResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMPosTaggerApi->posTaggerTagSentence: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**CMPosRequest***](CMPosRequest.md)| Input string | 

### Return type

[**CMPosResponse***](CMPosResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **posTaggerTagVerbs**
```objc
-(NSURLSessionTask*) posTaggerTagVerbsWithRequest: (CMPosRequest*) request
        completionHandler: (void (^)(CMPosResponse* output, NSError* error)) handler;
```

Part-of-speech tag a string, filter to verbs

Part-of-speech (POS) tag a string, find the verbs, and return result as JSON

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMPosRequest* request = [[CMPosRequest alloc] init]; // Input string

CMPosTaggerApi*apiInstance = [[CMPosTaggerApi alloc] init];

// Part-of-speech tag a string, filter to verbs
[apiInstance posTaggerTagVerbsWithRequest:request
          completionHandler: ^(CMPosResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMPosTaggerApi->posTaggerTagVerbs: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**CMPosRequest***](CMPosRequest.md)| Input string | 

### Return type

[**CMPosResponse***](CMPosResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

