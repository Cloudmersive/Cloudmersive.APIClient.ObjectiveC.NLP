# CMPosTaggerJsonApi

All URIs are relative to *https://api.cloudmersive.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**posTaggerJsonPost**](CMPosTaggerJsonApi.md#postaggerjsonpost) | **POST** /nlp/PosTaggerJson | Part-of-speech tag a string


# **posTaggerJsonPost**
```objc
-(NSURLSessionTask*) posTaggerJsonPostWithRequest: (CMPosRequest*) request
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

CMPosTaggerJsonApi*apiInstance = [[CMPosTaggerJsonApi alloc] init];

// Part-of-speech tag a string
[apiInstance posTaggerJsonPostWithRequest:request
          completionHandler: ^(CMPosResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMPosTaggerJsonApi->posTaggerJsonPost: %@", error);
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
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

