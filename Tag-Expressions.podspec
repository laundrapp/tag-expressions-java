Pod::Spec.new do |s|
    s.summary          = "tag-expressions"
    s.homepage         = "https://github.com/cucumber/cucumber"
    s.name             = "tag-expressions"
    s.version          = '1.1.1-j2obj2.1.1'
    s.author           = { "Marcus Smith" => "marcus@laundrapp.com" }
    s.source           = { :git => "https://github.com/laundrapp/tag-expressions-java.git" }
    s.platform         = :ios, '8.0'
    s.compiler_flags = '-Wno-nullability-completeness'
    
    s.requires_arc = false
    s.public_header_files =   'gen/objc/**/*.h'
    s.header_mappings_dir =   'gen/objc'
    s.source_files =          'gen/objc/**/*.{h,m}'
    s.compiler_flags = '-Wno-nullability-completeness'
    
end
