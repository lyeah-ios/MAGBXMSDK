#
# Be sure to run `pod lib lint MAGBXMSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MAGBXMSDK'
  s.version          = '2.1.0'
  s.summary          = 'MAGAPP BXMSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

#  s.description      = <<-DESC
#TODO: Add long description of the pod here.
#                       DESC

  s.homepage         = 'https://github.com/lyeah-ios/MAGBXMSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zisu' => 'zisulwl@163.com' }
  s.source           = { :git => 'https://github.com/lyeah-ios/MAGBXMSDK.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'

  s.source_files = 'MAGBXMSDK/Classes/**/*'
  
   s.resource_bundles = {
     'MAGBXMSDK' => ['MAGBXMSDK/Assets/**/*']
   }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  s.libraries         = 'resolv', 'c++', 'z', 'xml2'
  s.frameworks        = 'AdSupport', 'CoreLocation', 'QuartzCore', 'SystemConfiguration', 'CoreTelephony', 'Security', 'StoreKit', 'AVFoundation', 'WebKit'
  s.dependency 'GDTMobSDK'
  s.dependency 'Bytedance-UnionAD'
end
