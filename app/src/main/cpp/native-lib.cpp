#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_tomwatson6_lifeplanner_MenuActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_tomwatson6_lifeplanner_MenuActivity_randomMethod(
        JNIEnv* env,
        jobject) {
    std::string toReturn = "This means that it worked, YAY!";
    return env->NewStringUTF(toReturn.c_str());
}
