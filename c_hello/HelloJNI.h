/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class HelloJNI */

#ifndef _Included_HelloJNI
#define _Included_HelloJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     HelloJNI
 * Method:    updateMySelf
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_HelloJNI_updateMySelf
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     HelloJNI
 * Method:    sayHello
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_HelloJNI_sayHello
  (JNIEnv *, jobject);

/*
 * Class:     HelloJNI
 * Method:    add
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_HelloJNI_add
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     HelloJNI
 * Method:    printValue
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_HelloJNI_printValue
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
