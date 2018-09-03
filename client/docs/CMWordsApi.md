# CMWordsApi

All URIs are relative to *https://api.cloudmersive.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**wordsAdjectives**](CMWordsApi.md#wordsadjectives) | **POST** /nlp/get/words/adjectives/string | Get adjectives in string
[**wordsAdverbs**](CMWordsApi.md#wordsadverbs) | **POST** /nlp/get/words/adverbs/string | Get adverbs in input string
[**wordsGetWordsJson**](CMWordsApi.md#wordsgetwordsjson) | **POST** /nlp/get/words/json | Get words in input string (JSON)
[**wordsGetWordsString**](CMWordsApi.md#wordsgetwordsstring) | **POST** /nlp/get/words/string | Get words from string
[**wordsNouns**](CMWordsApi.md#wordsnouns) | **POST** /nlp/get/words/nouns/string | Get nouns in string
[**wordsPost**](CMWordsApi.md#wordspost) | **POST** /nlp/get/words/verbs/string | Get the verbs in a string
[**wordsPronouns**](CMWordsApi.md#wordspronouns) | **POST** /nlp/get/words/pronouns/string | Returns all pronounts in string
[**wordsProperNouns**](CMWordsApi.md#wordspropernouns) | **POST** /nlp/get/words/properNouns/string | Get proper nouns in a string


# **wordsAdjectives**
```objc
-(NSURLSessionTask*) wordsAdjectivesWithInput: (NSString*) input
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Get adjectives in string

Retrieves all adjectives in input string

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


NSString* input = input_example; // Input string

CMWordsApi*apiInstance = [[CMWordsApi alloc] init];

// Get adjectives in string
[apiInstance wordsAdjectivesWithInput:input
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMWordsApi->wordsAdjectives: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | **NSString***| Input string | 

### Return type

**NSString***

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wordsAdverbs**
```objc
-(NSURLSessionTask*) wordsAdverbsWithInput: (NSString*) input
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Get adverbs in input string

Returns all adverb words in the input string

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


NSString* input = input_example; // Input string

CMWordsApi*apiInstance = [[CMWordsApi alloc] init];

// Get adverbs in input string
[apiInstance wordsAdverbsWithInput:input
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMWordsApi->wordsAdverbs: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | **NSString***| Input string | 

### Return type

**NSString***

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wordsGetWordsJson**
```objc
-(NSURLSessionTask*) wordsGetWordsJsonWithInput: (NSString*) input
        completionHandler: (void (^)(CMGetWordsJsonResponse* output, NSError* error)) handler;
```

Get words in input string (JSON)

Get the component words in an input string, formatted as JSON

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


NSString* input = input_example; // String to process

CMWordsApi*apiInstance = [[CMWordsApi alloc] init];

// Get words in input string (JSON)
[apiInstance wordsGetWordsJsonWithInput:input
          completionHandler: ^(CMGetWordsJsonResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMWordsApi->wordsGetWordsJson: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | **NSString***| String to process | 

### Return type

[**CMGetWordsJsonResponse***](CMGetWordsJsonResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wordsGetWordsString**
```objc
-(NSURLSessionTask*) wordsGetWordsStringWithInput: (NSString*) input
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Get words from string

Segment an input string into its component words

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


NSString* input = input_example; // Input string

CMWordsApi*apiInstance = [[CMWordsApi alloc] init];

// Get words from string
[apiInstance wordsGetWordsStringWithInput:input
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMWordsApi->wordsGetWordsString: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | **NSString***| Input string | 

### Return type

**NSString***

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wordsNouns**
```objc
-(NSURLSessionTask*) wordsNounsWithInput: (NSString*) input
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Get nouns in string

Returns all of the nouns in the input string

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


NSString* input = input_example; // Input string

CMWordsApi*apiInstance = [[CMWordsApi alloc] init];

// Get nouns in string
[apiInstance wordsNounsWithInput:input
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMWordsApi->wordsNouns: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | **NSString***| Input string | 

### Return type

**NSString***

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wordsPost**
```objc
-(NSURLSessionTask*) wordsPostWithInput: (NSString*) input
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Get the verbs in a string

Get all of the verbs in the input string.

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


NSString* input = input_example; // Input string

CMWordsApi*apiInstance = [[CMWordsApi alloc] init];

// Get the verbs in a string
[apiInstance wordsPostWithInput:input
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMWordsApi->wordsPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | **NSString***| Input string | 

### Return type

**NSString***

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wordsPronouns**
```objc
-(NSURLSessionTask*) wordsPronounsWithInput: (NSString*) input
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Returns all pronounts in string

Returns all pronouns in the input string

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


NSString* input = input_example; // Input string

CMWordsApi*apiInstance = [[CMWordsApi alloc] init];

// Returns all pronounts in string
[apiInstance wordsPronounsWithInput:input
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMWordsApi->wordsPronouns: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | **NSString***| Input string | 

### Return type

**NSString***

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wordsProperNouns**
```objc
-(NSURLSessionTask*) wordsProperNounsWithInput: (NSString*) input
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Get proper nouns in a string

Returns all of the proper nouns in a string.  Proper nouns are named entities such as \"Hilton\".

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


NSString* input = input_example; // Input string

CMWordsApi*apiInstance = [[CMWordsApi alloc] init];

// Get proper nouns in a string
[apiInstance wordsProperNounsWithInput:input
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMWordsApi->wordsProperNouns: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | **NSString***| Input string | 

### Return type

**NSString***

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

