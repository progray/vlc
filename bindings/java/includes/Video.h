/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_videolan_jvlc_Video */

#ifndef _Included_org_videolan_jvlc_Video
#define _Included_org_videolan_jvlc_Video
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_videolan_jvlc_Video
 * Method:    _toggleFullscreen
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_videolan_jvlc_Video__1toggleFullscreen
  (JNIEnv *, jobject);

/*
 * Class:     org_videolan_jvlc_Video
 * Method:    _setFullscreen
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_videolan_jvlc_Video__1setFullscreen
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_videolan_jvlc_Video
 * Method:    _getFullscreen
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_videolan_jvlc_Video__1getFullscreen
  (JNIEnv *, jobject);

/*
 * Class:     org_videolan_jvlc_Video
 * Method:    _getHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_videolan_jvlc_Video__1getHeight
  (JNIEnv *, jobject);

/*
 * Class:     org_videolan_jvlc_Video
 * Method:    _getWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_videolan_jvlc_Video__1getWidth
  (JNIEnv *, jobject);

/*
 * Class:     org_videolan_jvlc_Video
 * Method:    _getSnapshot
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_videolan_jvlc_Video__1getSnapshot
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_videolan_jvlc_Video
 * Method:    _destroyVideo
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_videolan_jvlc_Video__1destroyVideo
  (JNIEnv *, jobject);

/*
 * Class:     org_videolan_jvlc_Video
 * Method:    _reparent
 * Signature: (Lorg/videolan/jvlc/JVLCCanvas;)V
 */
JNIEXPORT void JNICALL Java_org_videolan_jvlc_Video__1reparent
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_videolan_jvlc_Video
 * Method:    _setSize
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_videolan_jvlc_Video__1setSize
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_videolan_jvlc_Video
 * Method:    _paint
 * Signature: (Lorg/videolan/jvlc/JVLCCanvas;Ljava/awt/Graphics;)V
 */
JNIEXPORT void JNICALL Java_org_videolan_jvlc_Video__1paint
  (JNIEnv *, jobject, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
