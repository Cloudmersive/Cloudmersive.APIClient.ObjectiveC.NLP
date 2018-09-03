# CMLanguageDetectionApi

All URIs are relative to *https://api.cloudmersive.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**languageDetectionPost**](CMLanguageDetectionApi.md#languagedetectionpost) | **POST** /nlp/language/detect | Detect language of text


# **languageDetectionPost**
```objc
-(NSURLSessionTask*) languageDetectionPostWithTextToDetect: (NSString*) textToDetect
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


NSString* textToDetect = textToDetect_example; // Text to detect language of

CMLanguageDetectionApi*apiInstance = [[CMLanguageDetectionApi alloc] init];

// Detect language of text
[apiInstance languageDetectionPostWithTextToDetect:textToDetect
          completionHandler: ^(CMLanguageDetectionResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMLanguageDetectionApi->languageDetectionPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **textToDetect** | **NSString***| Text to detect language of | 

### Return type

[**CMLanguageDetectionResponse***](CMLanguageDetectionResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

