# CMLanguageTranslationApi

All URIs are relative to *https://api.cloudmersive.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**languageTranslationTranslateDeuToEng**](CMLanguageTranslationApi.md#languagetranslationtranslatedeutoeng) | **POST** /nlp-v2/translate/language/deu/to/eng | Translate German to English text with Deep Learning AI
[**languageTranslationTranslateEngToDeu**](CMLanguageTranslationApi.md#languagetranslationtranslateengtodeu) | **POST** /nlp-v2/translate/language/eng/to/deu | Translate English to German text with Deep Learning AI
[**languageTranslationTranslateEngToFra**](CMLanguageTranslationApi.md#languagetranslationtranslateengtofra) | **POST** /nlp-v2/translate/language/eng/to/fra | Translate English to French text with Deep Learning AI
[**languageTranslationTranslateEngToRus**](CMLanguageTranslationApi.md#languagetranslationtranslateengtorus) | **POST** /nlp-v2/translate/language/eng/to/rus | Translate English to Russian text with Deep Learning AI
[**languageTranslationTranslateFraToEng**](CMLanguageTranslationApi.md#languagetranslationtranslatefratoeng) | **POST** /nlp-v2/translate/language/fra/to/eng | Translate French to English text with Deep Learning AI
[**languageTranslationTranslateRusToEng**](CMLanguageTranslationApi.md#languagetranslationtranslaterustoeng) | **POST** /nlp-v2/translate/language/rus/to/eng | Translate Russian to English text with Deep Learning AI


# **languageTranslationTranslateDeuToEng**
```objc
-(NSURLSessionTask*) languageTranslationTranslateDeuToEngWithInput: (CMLanguageTranslationRequest*) input
        completionHandler: (void (^)(CMLanguageTranslationResponse* output, NSError* error)) handler;
```

Translate German to English text with Deep Learning AI

Automatically translates input text in German to output text in English using advanced Deep Learning and Neural NLP.  Consumes 1-2 API calls per input sentence.

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMLanguageTranslationRequest* input = [[CMLanguageTranslationRequest alloc] init]; // Input translation request

CMLanguageTranslationApi*apiInstance = [[CMLanguageTranslationApi alloc] init];

// Translate German to English text with Deep Learning AI
[apiInstance languageTranslationTranslateDeuToEngWithInput:input
          completionHandler: ^(CMLanguageTranslationResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMLanguageTranslationApi->languageTranslationTranslateDeuToEng: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**CMLanguageTranslationRequest***](CMLanguageTranslationRequest.md)| Input translation request | 

### Return type

[**CMLanguageTranslationResponse***](CMLanguageTranslationResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **languageTranslationTranslateEngToDeu**
```objc
-(NSURLSessionTask*) languageTranslationTranslateEngToDeuWithInput: (CMLanguageTranslationRequest*) input
        completionHandler: (void (^)(CMLanguageTranslationResponse* output, NSError* error)) handler;
```

Translate English to German text with Deep Learning AI

Automatically translates input text in English to output text in German using advanced Deep Learning and Neural NLP.  Consumes 1-2 API calls per input sentence.

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMLanguageTranslationRequest* input = [[CMLanguageTranslationRequest alloc] init]; // Input translation request

CMLanguageTranslationApi*apiInstance = [[CMLanguageTranslationApi alloc] init];

// Translate English to German text with Deep Learning AI
[apiInstance languageTranslationTranslateEngToDeuWithInput:input
          completionHandler: ^(CMLanguageTranslationResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMLanguageTranslationApi->languageTranslationTranslateEngToDeu: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**CMLanguageTranslationRequest***](CMLanguageTranslationRequest.md)| Input translation request | 

### Return type

[**CMLanguageTranslationResponse***](CMLanguageTranslationResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **languageTranslationTranslateEngToFra**
```objc
-(NSURLSessionTask*) languageTranslationTranslateEngToFraWithInput: (CMLanguageTranslationRequest*) input
        completionHandler: (void (^)(CMLanguageTranslationResponse* output, NSError* error)) handler;
```

Translate English to French text with Deep Learning AI

Automatically translates input text in English to output text in French using advanced Deep Learning and Neural NLP.  Consumes 1-2 API calls per input sentence.

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMLanguageTranslationRequest* input = [[CMLanguageTranslationRequest alloc] init]; // Input translation request

CMLanguageTranslationApi*apiInstance = [[CMLanguageTranslationApi alloc] init];

// Translate English to French text with Deep Learning AI
[apiInstance languageTranslationTranslateEngToFraWithInput:input
          completionHandler: ^(CMLanguageTranslationResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMLanguageTranslationApi->languageTranslationTranslateEngToFra: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**CMLanguageTranslationRequest***](CMLanguageTranslationRequest.md)| Input translation request | 

### Return type

[**CMLanguageTranslationResponse***](CMLanguageTranslationResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **languageTranslationTranslateEngToRus**
```objc
-(NSURLSessionTask*) languageTranslationTranslateEngToRusWithInput: (CMLanguageTranslationRequest*) input
        completionHandler: (void (^)(CMLanguageTranslationResponse* output, NSError* error)) handler;
```

Translate English to Russian text with Deep Learning AI

Automatically translates input text in English to output text in Russian using advanced Deep Learning and Neural NLP.  Consumes 1-2 API calls per input sentence.

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMLanguageTranslationRequest* input = [[CMLanguageTranslationRequest alloc] init]; // Input translation request

CMLanguageTranslationApi*apiInstance = [[CMLanguageTranslationApi alloc] init];

// Translate English to Russian text with Deep Learning AI
[apiInstance languageTranslationTranslateEngToRusWithInput:input
          completionHandler: ^(CMLanguageTranslationResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMLanguageTranslationApi->languageTranslationTranslateEngToRus: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**CMLanguageTranslationRequest***](CMLanguageTranslationRequest.md)| Input translation request | 

### Return type

[**CMLanguageTranslationResponse***](CMLanguageTranslationResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **languageTranslationTranslateFraToEng**
```objc
-(NSURLSessionTask*) languageTranslationTranslateFraToEngWithInput: (CMLanguageTranslationRequest*) input
        completionHandler: (void (^)(CMLanguageTranslationResponse* output, NSError* error)) handler;
```

Translate French to English text with Deep Learning AI

Automatically translates input text in French to output text in English using advanced Deep Learning and Neural NLP.  Consumes 1-2 API calls per input sentence.

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMLanguageTranslationRequest* input = [[CMLanguageTranslationRequest alloc] init]; // Input translation request

CMLanguageTranslationApi*apiInstance = [[CMLanguageTranslationApi alloc] init];

// Translate French to English text with Deep Learning AI
[apiInstance languageTranslationTranslateFraToEngWithInput:input
          completionHandler: ^(CMLanguageTranslationResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMLanguageTranslationApi->languageTranslationTranslateFraToEng: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**CMLanguageTranslationRequest***](CMLanguageTranslationRequest.md)| Input translation request | 

### Return type

[**CMLanguageTranslationResponse***](CMLanguageTranslationResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **languageTranslationTranslateRusToEng**
```objc
-(NSURLSessionTask*) languageTranslationTranslateRusToEngWithInput: (CMLanguageTranslationRequest*) input
        completionHandler: (void (^)(CMLanguageTranslationResponse* output, NSError* error)) handler;
```

Translate Russian to English text with Deep Learning AI

Automatically translates input text in Russian to output text in English using advanced Deep Learning and Neural NLP.  Consumes 1-2 API calls per input sentence.

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMLanguageTranslationRequest* input = [[CMLanguageTranslationRequest alloc] init]; // Input translation request

CMLanguageTranslationApi*apiInstance = [[CMLanguageTranslationApi alloc] init];

// Translate Russian to English text with Deep Learning AI
[apiInstance languageTranslationTranslateRusToEngWithInput:input
          completionHandler: ^(CMLanguageTranslationResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMLanguageTranslationApi->languageTranslationTranslateRusToEng: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**CMLanguageTranslationRequest***](CMLanguageTranslationRequest.md)| Input translation request | 

### Return type

[**CMLanguageTranslationResponse***](CMLanguageTranslationResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

