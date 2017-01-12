#! /usr/bin/env bash
 
base_dir=$(cd "`dirname "0"`" && pwd)
cpp_out="$base_dir/generated-src/cpp"
jni_out="$base_dir/generated-src/jni"
objc_out="$base_dir/generated-src/objc"
java_out="$base_dir/generated-src/java/com/srcinc/eo_api"
java_package="com.srcinc.eo_api"
namespace="eo_api"
objc_prefix="EOAPI"
djinni_file="EO_API.djinni"
 
deps/djinni/src/run \
   --java-out $java_out \
   --java-package $java_package \
   --ident-java-field mEOAPI \
   \
   --cpp-out $cpp_out \
   --cpp-namespace $namespace \
   \
   --jni-out $jni_out \
   --ident-jni-class NativeEOAPI \
   --ident-jni-file NativeEOAPI \
   \
   --objc-out $objc_out \
   --objc-type-prefix $objc_prefix \
   \
   --objcpp-out $objc_out \
   \
   --idl $djinni_file