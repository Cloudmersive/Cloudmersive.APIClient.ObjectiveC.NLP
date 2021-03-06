#
# Be sure to run `pod lib lint CloudmersiveNLPApiClient.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# Any lines starting with a # are optional, but encouraged
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
    s.name             = "CloudmersiveNLPApiClient"
    s.version          = "2.0.3"

    s.summary          = "nlpapiv2"
    s.description      = <<-DESC
                         The powerful Natural Language Processing APIs (v2) let you perform part of speech tagging, entity identification, sentence parsing, and much more to help you understand the meaning of unstructured text.
                         DESC

    s.platform     = :ios, '7.0'
    s.requires_arc = true

    s.framework    = 'SystemConfiguration'

    s.homepage     = "https://github.com/Cloudmersive/Cloudmersive.APIClient.ObjectiveC.NLP"
    s.license      = "Proprietary"
    s.source       = { :git => "https://github.com/Cloudmersive/Cloudmersive.APIClient.ObjectiveC.NLP.git", :tag => "#{s.version}" }
    s.author       = { "Cloudmersive" => "support@cloudmersive.com" }

    s.source_files = 'client/CloudmersiveNLPApiClient/**/*.{m,h}'
    s.public_header_files = 'client/CloudmersiveNLPApiClient/**/*.h'


    s.dependency 'AFNetworking', '~> 3'
    s.dependency 'JSONModel', '~> 1.2'
    s.dependency 'ISO8601', '~> 0.6'
end

