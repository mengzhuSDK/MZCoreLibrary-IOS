Pod::Spec.new do |s|
  s.authors      = "Mengzhu"
  s.name         = "MZCoreSDKLibrary"
  s.version      = "2.1.0"
  s.summary      = "MZCroeSDKLibrary iOS SDK"
  s.description  = "Provides the user to push the stream and the playback function"
  s.homepage     = "http://www.zmengzhu.com"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "sunxianhao" => "sunxianhao@rd.zmengzhu.com" }
  s.source       = { :git => "https://github.com/mengzhuSDK/MZCoreLibrary-IOS.git", :tag => "#{s.version}" }
  s.requires_arc = true  
  s.ios.deployment_target = '8.0'
  s.vendored_frameworks = 'MZCoreLibrary/MZCoreSDKLibrary.framework'
  s.resource="MZCoreLibrary/MZRefresh.bundle"
  s.frameworks = 'Foundation', 'AVFoundation', 'QuartzCore', 'OpenGLES', 'CoreVideo', 'CoreMedia', 'AssetsLibrary', 'UIKit', 'Security'
  s.libraries   = 'bz2', 'bz2.1.0', 'z.1.2.5', 'stdc++.6.0.9', 'icucore', 'c++', 'z', 'xml2'
  s.xcconfig = { 'ENABLE_BITCODE' => 'NO',
      'HEADER_SEARCH_PATHS' => '${SDKROOT}/usr/include/libxml2',
      'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES'
  }
  end