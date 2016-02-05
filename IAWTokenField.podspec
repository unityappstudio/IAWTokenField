#
#  Be sure to run `pod spec lint IAWCustomTokenField.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  s.name         = "IAWTokenTextField"
  s.version      = "0.0.2"
  s.summary      = "iOS custom view that let you add token view inside like NSTokenField."
  s.homepage     = "https://github.com/unityappstudio/IAWTokenField"
  s.license      = "MIT"
  s.author             = { "Unity App Studio" => "admin@unityappstudio.com" }
  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/unityappstudio/IAWTokenField.git", :tag => "0.0.2" }
  s.source_files  = "IAWTokenTextField.{h,m}"
  s.requires_arc = true
end
