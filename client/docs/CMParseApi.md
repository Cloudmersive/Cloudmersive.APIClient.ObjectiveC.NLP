# CMParseApi

All URIs are relative to *https://api.cloudmersive.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**parseParseString**](CMParseApi.md#parseparsestring) | **POST** /nlp-v2/parse/tree | Parse string to syntax tree


# **parseParseString**
```objc
-(NSURLSessionTask*) parseParseStringWithInput: (CMParseRequest*) input
        completionHandler: (void (^)(CMParseResponse* output, NSError* error)) handler;
```

Parse string to syntax tree

Parses the input string into a Penn Treebank syntax tree

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMParseRequest* input = [[CMParseRequest alloc] init]; // Input string

CMParseApi*apiInstance = [[CMParseApi alloc] init];

// Parse string to syntax tree
[apiInstance parseParseStringWithInput:input
          completionHandler: ^(CMParseResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMParseApi->parseParseString: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**CMParseRequest***](CMParseRequest.md)| Input string | 

### Return type

[**CMParseResponse***](CMParseResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

