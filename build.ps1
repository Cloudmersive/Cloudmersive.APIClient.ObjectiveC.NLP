Remove-Item –path ./client –recurse
& java -jar swagger-codegen-cli.jar generate -i https://api.cloudmersive.com/swagger/api/nlpv2 -l objc -o client -c packageconfig.json
(Get-Content ./client/CloudmersiveNLPApiClient.podspec).replace('CloudmersiveNLPApiClient/**/*.{m,h}', "client/CloudmersiveNLPApiClient/**/*.{m,h}") | Set-Content ./client/CloudmersiveNLPApiClient.podspec
(Get-Content ./client/CloudmersiveNLPApiClient.podspec).replace('CloudmersiveNLPApiClient/**/*.h', "client/CloudmersiveNLPApiClient/**/*.h") | Set-Content ./client/CloudmersiveNLPApiClient.podspec