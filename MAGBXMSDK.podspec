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

  s.homepage         = 'https://github.com/lyeah-ios/MAGBXMSDK'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zisu' => 'zisulwl@163.com' }
  s.source           = { :git => 'https://github.com/lyeah-ios/MAGBXMSDK.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'

  s.source_files = 'MAGBXMSDK/Classes/*.h'
  s.resource     = 'MAGBXMSDK/Assets/BXMSDK.bundle'
  s.vendored_libraries  = 'MAGBXMSDK/Classes/libBXMSDK.a'  

  s.libraries         = 'resolv', 'c++', 'z', 'xml2'
  s.frameworks        = 'AdSupport', 'CoreLocation', 'QuartzCore', 'SystemConfiguration', 'CoreTelephony', 'Security', 'StoreKit', 'AVFoundation', 'WebKit'
end
