# CMSpellCheckApi

All URIs are relative to *https://api.cloudmersive.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**spellCheckCheckJson**](CMSpellCheckApi.md#spellcheckcheckjson) | **POST** /nlp/spellcheck/check/word/json | Spell check word
[**spellCheckCheckSentenceJson**](CMSpellCheckApi.md#spellcheckchecksentencejson) | **POST** /nlp/spellcheck/check/sentence/json | Check if sentence is spelled correctly
[**spellCheckCheckSentenceString**](CMSpellCheckApi.md#spellcheckchecksentencestring) | **POST** /nlp/spellcheck/check/sentence/string | Spell check a sentence
[**spellCheckCorrect**](CMSpellCheckApi.md#spellcheckcorrect) | **POST** /nlp/spellcheck/correct/word/string | Find spelling corrections
[**spellCheckCorrectJson**](CMSpellCheckApi.md#spellcheckcorrectjson) | **POST** /nlp/spellcheck/correct/word/json | Find spelling corrections
[**spellCheckPost**](CMSpellCheckApi.md#spellcheckpost) | **POST** /nlp/spellcheck/check/word/string | Spell check a word


# **spellCheckCheckJson**
```objc
-(NSURLSessionTask*) spellCheckCheckJsonWithValue: (NSString*) value
        completionHandler: (void (^)(CMCheckJsonResponse* output, NSError* error)) handler;
```

Spell check word

Spell check a word as JSON

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


NSString* value = value_example; // Input sentence

CMSpellCheckApi*apiInstance = [[CMSpellCheckApi alloc] init];

// Spell check word
[apiInstance spellCheckCheckJsonWithValue:value
          completionHandler: ^(CMCheckJsonResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMSpellCheckApi->spellCheckCheckJson: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| Input sentence | 

### Return type

[**CMCheckJsonResponse***](CMCheckJsonResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **spellCheckCheckSentenceJson**
```objc
-(NSURLSessionTask*) spellCheckCheckSentenceJsonWithValue: (NSString*) value
        completionHandler: (void (^)(CMCheckSentenceJsonResponse* output, NSError* error)) handler;
```

Check if sentence is spelled correctly

Checks whether the sentence is spelled correctly and returns the result as JSON

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


NSString* value = value_example; // Input sentence

CMSpellCheckApi*apiInstance = [[CMSpellCheckApi alloc] init];

// Check if sentence is spelled correctly
[apiInstance spellCheckCheckSentenceJsonWithValue:value
          completionHandler: ^(CMCheckSentenceJsonResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMSpellCheckApi->spellCheckCheckSentenceJson: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| Input sentence | 

### Return type

[**CMCheckSentenceJsonResponse***](CMCheckSentenceJsonResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **spellCheckCheckSentenceString**
```objc
-(NSURLSessionTask*) spellCheckCheckSentenceStringWithValue: (NSString*) value
        completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;
```

Spell check a sentence

Check if a sentence is spelled correctly

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


NSString* value = value_example; // Input sentence word

CMSpellCheckApi*apiInstance = [[CMSpellCheckApi alloc] init];

// Spell check a sentence
[apiInstance spellCheckCheckSentenceStringWithValue:value
          completionHandler: ^(NSNumber* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMSpellCheckApi->spellCheckCheckSentenceString: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| Input sentence word | 

### Return type

**NSNumber***

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **spellCheckCorrect**
```objc
-(NSURLSessionTask*) spellCheckCorrectWithValue: (NSString*) value
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Find spelling corrections

Find the spelling corrections for a word

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


NSString* value = value_example; // Input word

CMSpellCheckApi*apiInstance = [[CMSpellCheckApi alloc] init];

// Find spelling corrections
[apiInstance spellCheckCorrectWithValue:value
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMSpellCheckApi->spellCheckCorrect: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| Input word | 

### Return type

**NSString***

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **spellCheckCorrectJson**
```objc
-(NSURLSessionTask*) spellCheckCorrectJsonWithValue: (NSString*) value
        completionHandler: (void (^)(CMCorrectJsonResponse* output, NSError* error)) handler;
```

Find spelling corrections

Find spelling correction suggestions and return result as JSON

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


NSString* value = value_example; // Input string

CMSpellCheckApi*apiInstance = [[CMSpellCheckApi alloc] init];

// Find spelling corrections
[apiInstance spellCheckCorrectJsonWithValue:value
          completionHandler: ^(CMCorrectJsonResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMSpellCheckApi->spellCheckCorrectJson: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| Input string | 

### Return type

[**CMCorrectJsonResponse***](CMCorrectJsonResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **spellCheckPost**
```objc
-(NSURLSessionTask*) spellCheckPostWithValue: (NSString*) value
        completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;
```

Spell check a word

Check if a word is spelled correctly

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


NSString* value = value_example; // Input string word

CMSpellCheckApi*apiInstance = [[CMSpellCheckApi alloc] init];

// Spell check a word
[apiInstance spellCheckPostWithValue:value
          completionHandler: ^(NSNumber* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMSpellCheckApi->spellCheckPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| Input string word | 

### Return type

**NSNumber***

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

