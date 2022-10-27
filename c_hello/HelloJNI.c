#include <jni.h>
#include "HelloJNI.h"

#include "hello.h"

JNIEXPORT void JNICALL Java_HelloJNI_sayHello
  (JNIEnv * env, jobject obj)
{
    say_hello();
}

JNIEXPORT jint JNICALL Java_HelloJNI_add
  (JNIEnv * env, jobject obj, jint a, jint b)
{
    return add(a, b);
}

JNIEXPORT void JNICALL Java_HelloJNI_printValue
  (JNIEnv * env, jobject obj, jint a)
{
    print_value(a);
}