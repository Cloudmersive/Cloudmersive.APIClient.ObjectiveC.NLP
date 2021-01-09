# CMSpellcheckApi

All URIs are relative to *https://api.cloudmersive.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**spellcheckCheckSentence**](CMSpellcheckApi.md#spellcheckchecksentence) | **POST** /nlp-v2/spellcheck/check/sentence | Check if sentence is spelled correctly
[**spellcheckCorrectJson**](CMSpellcheckApi.md#spellcheckcorrectjson) | **POST** /nlp-v2/spellcheck/check/word | Find spelling corrections


# **spellcheckCheckSentence**
```objc
-(NSURLSessionTask*) spellcheckCheckSentenceWithValue: (CMCheckSentenceRequest*) value
        completionHandler: (void (^)(CMCheckSentenceResponse* output, NSError* error)) handler;
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


CMCheckSentenceRequest* value = [[CMCheckSentenceRequest alloc] init]; // Input sentence

CMSpellcheckApi*apiInstance = [[CMSpellcheckApi alloc] init];

// Check if sentence is spelled correctly
[apiInstance spellcheckCheckSentenceWithValue:value
          completionHandler: ^(CMCheckSentenceResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMSpellcheckApi->spellcheckCheckSentence: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | [**CMCheckSentenceRequest***](CMCheckSentenceRequest.md)| Input sentence | 

### Return type

[**CMCheckSentenceResponse***](CMCheckSentenceResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **spellcheckCorrectJson**
```objc
-(NSURLSessionTask*) spellcheckCorrectJsonWithValue: (CMCheckWordRequest*) value
        completionHandler: (void (^)(CMCheckWordResponse* output, NSError* error)) handler;
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


CMCheckWordRequest* value = [[CMCheckWordRequest alloc] init]; // Input string

CMSpellcheckApi*apiInstance = [[CMSpellcheckApi alloc] init];

// Find spelling corrections
[apiInstance spellcheckCorrectJsonWithValue:value
          completionHandler: ^(CMCheckWordResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMSpellcheckApi->spellcheckCorrectJson: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | [**CMCheckWordRequest***](CMCheckWordRequest.md)| Input string | 

### Return type

[**CMCheckWordResponse***](CMCheckWordResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

