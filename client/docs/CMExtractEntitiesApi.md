# CMExtractEntitiesApi

All URIs are relative to *https://api.cloudmersive.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**extractEntitiesPost**](CMExtractEntitiesApi.md#extractentitiespost) | **POST** /nlp-v2/extract-entities | Extract entities from string


# **extractEntitiesPost**
```objc
-(NSURLSessionTask*) extractEntitiesPostWithValue: (CMExtractEntitiesRequest*) value
        completionHandler: (void (^)(CMExtractEntitiesResponse* output, NSError* error)) handler;
```

Extract entities from string

Extract the named entitites from an input string.

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMExtractEntitiesRequest* value = [[CMExtractEntitiesRequest alloc] init]; // Input string

CMExtractEntitiesApi*apiInstance = [[CMExtractEntitiesApi alloc] init];

// Extract entities from string
[apiInstance extractEntitiesPostWithValue:value
          completionHandler: ^(CMExtractEntitiesResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMExtractEntitiesApi->extractEntitiesPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | [**CMExtractEntitiesRequest***](CMExtractEntitiesRequest.md)| Input string | 

### Return type

[**CMExtractEntitiesResponse***](CMExtractEntitiesResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

