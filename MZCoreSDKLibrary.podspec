Pod::Spec.new do |s|
  s.authors      = "Mengzhu"
  s.name         = "MZCoreSDKLibrary"
  s.version      = "1.0.2"
  s.summary      = "MZCroeSDKLibrary iOS SDK"
  s.description  = "Provides the user to push the stream and the playback function"
  s.homepage     = "http://www.zmengzhu.com"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "sunxianhao" => "sunxianhao@rd.zmengzhu.com" }
  s.source       = { :git => "https://github.com/mengzhuSDK/MZCoreLibrary-IOS.git", :tag => "#{s.version}" }
  s.requires_arc = true  
  s.ios.deployment_target = '8.2'
  s.vendored_frameworks = 'MZCoreLibrary/MZCoreSDKLibrary.framework'
  s.resource="MZCoreLibrary/MZRefresh.bundle"
  end