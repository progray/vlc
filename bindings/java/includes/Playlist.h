/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_videolan_jvlc_Playlist */

#ifndef _Included_org_videolan_jvlc_Playlist
#define _Included_org_videolan_jvlc_Playlist
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_videolan_jvlc_Playlist
 * Method:    _playlist_add
 * Signature: (Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_videolan_jvlc_Playlist__1playlist_1add
  (JNIEnv *, jobject, jstring, jstring, jobjectArray);

/*
 * Class:     org_videolan_jvlc_Playlist
 * Method:    _play
 * Signature: (I[Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_videolan_jvlc_Playlist__1play
  (JNIEnv *, jobject, jint, jobjectArray);

/*
 * Class:     org_videolan_jvlc_Playlist
 * Method:    _pause
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_videolan_jvlc_Playlist__1pause
  (JNIEnv *, jobject);

/*
 * Class:     org_videolan_jvlc_Playlist
 * Method:    _stop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_videolan_jvlc_Playlist__1stop
  (JNIEnv *, jobject);

/*
 * Class:     org_videolan_jvlc_Playlist
 * Method:    _next
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_videolan_jvlc_Playlist__1next
  (JNIEnv *, jobject);

/*
 * Class:     org_videolan_jvlc_Playlist
 * Method:    _prev
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_videolan_jvlc_Playlist__1prev
  (JNIEnv *, jobject);

/*
 * Class:     org_videolan_jvlc_Playlist
 * Method:    _clear
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_videolan_jvlc_Playlist__1clear
  (JNIEnv *, jobject);

/*
 * Class:     org_videolan_jvlc_Playlist
 * Method:    _deleteItem
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_videolan_jvlc_Playlist__1deleteItem
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_videolan_jvlc_Playlist
 * Method:    _itemsCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_videolan_jvlc_Playlist__1itemsCount
  (JNIEnv *, jobject);

/*
 * Class:     org_videolan_jvlc_Playlist
 * Method:    _isRunning
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_videolan_jvlc_Playlist__1isRunning
  (JNIEnv *, jobject);

/*
 * Class:     org_videolan_jvlc_Playlist
 * Method:    _setLoop
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_videolan_jvlc_Playlist__1setLoop
  (JNIEnv *, jobject, jboolean);

#ifdef __cplusplus
}
#endif
#endif
