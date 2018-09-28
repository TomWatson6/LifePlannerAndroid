#include <jni.h>
#include <string>

using namespace std;

extern "C" JNIEXPORT jstring JNICALL
Java_com_tomwatson6_lifeplanner_Activities_MenuActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_tomwatson6_lifeplanner_Activities_MenuActivity_randomMethod(
        JNIEnv* env,
        jobject) {
    string toReturn = "This means that it worked, YAY!";
    return env->NewStringUTF(toReturn.c_str());
}
