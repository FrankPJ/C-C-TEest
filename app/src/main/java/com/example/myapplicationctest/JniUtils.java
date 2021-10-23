package com.example.myapplicationctest;

public class JniUtils {

  static {
      System.loadLibrary("cppTest_libusb1.0");

  }

    public static native String getLinuxVersion();



    //传递数组,操作后,返回
    public static native void passArrayMethod(int[] arr);

    //创建指定长度数组
    public static native int[] createArrayMethod(int len);
}
