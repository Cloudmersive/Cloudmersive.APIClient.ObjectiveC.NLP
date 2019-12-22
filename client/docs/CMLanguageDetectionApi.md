# CMLanguageDetectionApi

All URIs are relative to *https://api.cloudmersive.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**languageDetectionGetLanguage**](CMLanguageDetectionApi.md#languagedetectiongetlanguage) | **POST** /nlp-v2/language/detect | Detect language of text


# **languageDetectionGetLanguage**
```objc
-(NSURLSessionTask*) languageDetectionGetLanguageWithInput: (CMLanguageDetectionRequest*) input
        completionHandler: (void (^)(CMLanguageDetectionResponse* output, NSError* error)) handler;
```

Detect language of text

Automatically determine which language a text string is written in.  Supports Danish (DAN), German (DEU), English (ENG), French (FRA), Italian (ITA), Japanese (JPN), Korean (KOR), Dutch (NLD), Norwegian (NOR), Portuguese (POR), Russian (RUS), Spanish (SPA), Swedish (SWE), Chinese (ZHO).

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMLanguageDetectionRequest* input = [[CMLanguageDetectionRequest alloc] init]; // 

CMLanguageDetectionApi*apiInstance = [[CMLanguageDetectionApi alloc] init];

// Detect language of text
[apiInstance languageDetectionGetLanguageWithInput:input
          completionHandler: ^(CMLanguageDetectionResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMLanguageDetectionApi->languageDetectionGetLanguage: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**CMLanguageDetectionRequest***](CMLanguageDetectionRequest.md)|  | 

### Return type

[**CMLanguageDetectionResponse***](CMLanguageDetectionResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

