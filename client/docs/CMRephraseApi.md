# CMRephraseApi

All URIs are relative to *https://api.cloudmersive.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**rephraseEnglishRephraseSentenceBySentence**](CMRephraseApi.md#rephraseenglishrephrasesentencebysentence) | **POST** /nlp-v2/rephrase/rephrase/eng/by-sentence | Rephrase, paraphrase English text sentence-by-sentence using Deep Learning AI


# **rephraseEnglishRephraseSentenceBySentence**
```objc
-(NSURLSessionTask*) rephraseEnglishRephraseSentenceBySentenceWithInput: (CMRephraseRequest*) input
        completionHandler: (void (^)(CMRephraseResponse* output, NSError* error)) handler;
```

Rephrase, paraphrase English text sentence-by-sentence using Deep Learning AI

Automatically rephrases or paraphrases input text in English sentence by sentence using advanced Deep Learning and Neural NLP.  Creates multiple reprhasing candidates per input sentence, from 1 to 10 possible rephrasings of the original sentence.  Seeks to preserve original semantic meaning in rephrased output candidates.  Consumes 1-2 API calls per output rephrasing option generated, per sentence.

### Example 
```objc
CMDefaultConfiguration *apiConfig = [CMDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Apikey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Apikey"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Apikey"];


CMRephraseRequest* input = [[CMRephraseRequest alloc] init]; // Input rephrase request

CMRephraseApi*apiInstance = [[CMRephraseApi alloc] init];

// Rephrase, paraphrase English text sentence-by-sentence using Deep Learning AI
[apiInstance rephraseEnglishRephraseSentenceBySentenceWithInput:input
          completionHandler: ^(CMRephraseResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling CMRephraseApi->rephraseEnglishRephraseSentenceBySentence: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**CMRephraseRequest***](CMRephraseRequest.md)| Input rephrase request | 

### Return type

[**CMRephraseResponse***](CMRephraseResponse.md)

### Authorization

[Apikey](../README.md#Apikey)

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

