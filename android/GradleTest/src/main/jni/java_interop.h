
#ifndef _Included_main_java_com_emergentvr_gradletest_NativeInterop
#define _Included_main_java_com_emergentvr_gradletest_NativeInterop
#include <string.h>
#include <stdio.h>
#include <jni.h>
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     Java_com_emergentvr_gradletest_NativeInterop_Initialize
 * Method:    Initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_emergentvr_gradletest_NativeInterop_Initialize
(JNIEnv *, jclass, jstring assetPath);

#ifdef __cplusplus
}
#endif
#endif