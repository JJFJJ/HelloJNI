#include <jni.h>
#include <stdio.h>

#include "hello.h"

#include "HelloJNI.h"


JNIEXPORT void JNICALL Java_HelloJNI_updateMySelf
  (JNIEnv * env, jobject obj, jint num, jstring str)
{
  // Get a reference (jclass) to this object's class by jobject
  jclass clazz = (*env)->GetObjectClass(env, obj);

  /**
   * @brief Get the Field ID of the instance variable "num",
   * get or set the value by jobject and jfieldID
   */
  jfieldID field_num = (*env)->GetFieldID(env, clazz, "m_num", "I");
  if (field_num) {
    jint j_num = (*env)->GetIntField(env, obj, field_num);
    (*env)->SetIntField(env, obj, field_num, num);
    printf("In C code, update num from %d to %d\n",
          j_num, (*env)->GetIntField(env, obj, field_num));
  } else {
    printf("Not found \"m_num\" with int\n");
  }

  jfieldID field_str = (*env)->GetFieldID(env, clazz, "m_str", "Ljava/lang/String;");
  if (field_str) {
    jstring j_str = (*env)->GetObjectField(env, obj, field_str);
    const char *c_str = (*env)->GetStringUTFChars(env, j_str, NULL);
    printf("In C code, update string \"%s\" to ", c_str ? c_str : "");
    if (c_str) {
      (*env)->ReleaseStringUTFChars(env, j_str, c_str);
    }
    const char *src_c_str = (*env)->GetStringUTFChars(env, str, NULL);
    if (src_c_str) {
      j_str = (*env)->NewStringUTF(env, src_c_str);
      if (j_str) {
        printf("\"%s\"\n", src_c_str);
      } else {
        printf("NewStringUTF failure\n");
      }
    } else {
      printf("GetStringUTFChars failure\n");
    }
  } else {
    printf("Not found \"m_str\" with String\n");
  }
}

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