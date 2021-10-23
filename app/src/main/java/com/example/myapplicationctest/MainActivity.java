package com.example.myapplicationctest;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

import com.example.myapplicationctest.databinding.ActivityMainBinding;

public class MainActivity extends Activity {

    private static final String TAG = "MainActivity";

    private ActivityMainBinding binding;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        binding = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());

        // Example of a call to a native method
        TextView tv = binding.sampleText;


        Log.e(TAG,"======ThreadID======="+Thread.currentThread().getId());



        int[] arrayMethod = JniUtils.createArrayMethod(100);


        StringBuilder stringBuffer = new StringBuilder();

        for (int j : arrayMethod) {
            stringBuffer.append(j);
        }


        tv.setText(stringBuffer.toString());
    }


}