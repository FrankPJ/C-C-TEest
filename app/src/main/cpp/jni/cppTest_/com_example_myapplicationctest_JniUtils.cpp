//
// Created by Administrator on 2021/10/20.
//

#include "com_example_myapplicationctest_JniUtils.h"
#include "logUtils.h"
#include "Student.h"
#include "usbUtils.h"

#include <string>
#include <cstdio>
#include  "thread.h"


extern "C" JNIEXPORT jstring JNICALL Java_com_example_myapplicationctest_JniUtils_getLinuxVersion
        (JNIEnv *env, jclass jclass1) {
    LOGE("getLinuxVersion");
    auto *student =new Student(23,"王噶","男");

    jstring pJstring = (env)->NewStringUTF(student->name);


    env->ReleaseStringUTFChars(pJstring,student->name);

    return pJstring;

}


int com(const void *a, const void *b) {
    return *(int *) a - *(int *) b;//升序
}


extern "C" JNIEXPORT void JNICALL Java_com_example_myapplicationctest_JniUtils_passArrayMethod
        (JNIEnv *env, jclass jclass1, jintArray jintArray1) {
//1.获取数组指针
    jint *arr = env->GetIntArrayElements(jintArray1, nullptr);   //c++ 11 引入 nullptr
    *arr = 100;
    //2.获取数组长度
    int len = env->GetArrayLength(jintArray1);
    //3.排序
    qsort(arr, len, sizeof(jint), com);

    //4.释放资源
    env->ReleaseIntArrayElements(jintArray1, arr, JNI_COMMIT);
//    env->ReleaseIntArrayElements(jarr, arr, JNI_ABORT);
    //  对于最后一个参数(如果指针指向的数组为副本时，否则该参数不起作用)
    //      0       copy back the content and free the elems buffer
    //      JNI_COMMIT      copy back the content but do not free the elems buffer
    //      JNI_ABORT       free the buffer without copying back the possible changes
}

/*
 * Class:     com_example_myapplicationctest_JniUtils
 * Method:    createArrayMethod
 * Signature: (I)[I
 */
extern "C" JNIEXPORT jintArray JNICALL
Java_com_example_myapplicationctest_JniUtils_createArrayMethod
        (JNIEnv *env, jclass jclass1, jint len) {

    test_libusb_get_devices_list();


    //1.新建长度len数组
    jintArray jarr = env->NewIntArray(len);
    //2.获取数组指针
    jint *arr = env->GetIntArrayElements(jarr, nullptr);
    //3.赋值
    int i = 0;
    for (; i < len; i++) {
        arr[i] = i;
    }
    //4.释放资源
    env->ReleaseIntArrayElements(jarr, arr, 0);
    //5.返回数组
    return jarr;
}