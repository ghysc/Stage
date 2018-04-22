#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_e3dsam_stage_CameraActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
