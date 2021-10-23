//
// Created by Administrator on 2021/10/22.
//

#include "thread.h"
#include <pthread.h>
#include <iostream>
#include "logUtils.h"
#include <cstdlib>
#include <unistd.h>

#define NUM_THREADS 5

using namespace std;


// 线程的运行函数
void* say_hello(void* args)
{
    LOGE("Hello Runoob！");

    return nullptr;
}


void threadTest(){
    // 定义线程的 id 变量，多个变量使用数组
    pthread_t tids[NUM_THREADS];
    for(long & tid : tids)
    {
        //参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
        int ret = pthread_create(&tid, nullptr, say_hello, nullptr);
        if (ret != 0)
        {
            LOGE("pthread_create error: error_code=%2d",ret);
        }
    }
    //等各个线程退出后，进程才结束，否则进程强制结束了，线程可能还没反应过来；
//    pthread_exit(nullptr);
}


void *PrintHello(void *threadid)
{
    // 对传入的参数进行强制类型转换，由无类型指针变为整形数指针，然后再读取
    int tid = *((int*)threadid);

    LOGE("Hello Runoob! 线程 ID %2d",tid);

    return nullptr;
//    pthread_exit(NULL);
}



void threadTest1(){
    pthread_t threads[NUM_THREADS];
    int indexes[NUM_THREADS];// 用数组来保存i的值
    int rc;
    int i;
    for( i=0; i < NUM_THREADS; i++ ){

        LOGE("main() : 创建线程 %2d",i);

        indexes[i] = i; //先保存i的值
        // 传入的时候必须强制转换为void* 类型，即无类型指针
        rc = pthread_create(&threads[i], nullptr,
                            PrintHello, (void *)&(indexes[i]));
        if (rc){
            LOGE("Error:无法创建线程, %2d",rc);
            exit(-1);
        }
    }
//    pthread_exit(NULL);
}

struct thread_data{
    int  thread_id;
    char *message;
};

void *PrintHello1(void *threadarg)
{
    struct thread_data *my_data;

    my_data = (struct thread_data *) threadarg;



    LOGE("Thread ID : %d",my_data->thread_id);
    LOGE("Message : %s",my_data->message);

//    pthread_exit(NULL);

    return nullptr;
}

void threadTest2(){
    pthread_t threads[NUM_THREADS];
    struct thread_data td[NUM_THREADS];
    int rc;
    int i;

    for( i=0; i < NUM_THREADS; i++ ){
        LOGE("main() : 创建线程 %2d",i);
        td[i].thread_id = i;
        td[i].message = (char*)"This is message";
        rc = pthread_create(&threads[i], nullptr,
                            PrintHello1, (void *)&td[i]);
        if (rc){
            LOGE("Error:无法创建线程, %2d",rc);
            exit(-1);
        }
    }
//    pthread_exit(NULL);
}




void *wait(void *t)
{
    int i;
    long tid;

    tid = (long)t;

    sleep(1);
    LOGE("Sleeping in thread");
    LOGE("Thread with id :  %ld",tid);

    return nullptr;
}

void threadTest3(){
    int rc;
    int i;
    pthread_t threads[NUM_THREADS];
    pthread_attr_t attr;
    void *status;

    // 初始化并设置线程为可连接的（joinable）
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    for( i=0; i < NUM_THREADS; i++ ){
        LOGE("main() : 创建线程 %2d",i);
        rc = pthread_create(&threads[i], nullptr, wait, (void *)&i );
        if (rc){
            LOGE("Error:无法创建线程, %2d",rc);
            exit(-1);
        }
    }

    // 删除属性，并等待其他线程
    pthread_attr_destroy(&attr);
    for( i=0; i < NUM_THREADS; i++ ){
        rc = pthread_join(threads[i], &status);
        if (rc){
//            cout << "Error:unable to join," << rc << endl;
            LOGE("Error:unable to join %2d",rc);
            exit(-1);
        }

        LOGE("Main: completed thread id %2d",i);
        LOGE("exiting with status %s",status);
    }

//    cout << "Main: program exiting." << endl;
//    pthread_exit(NULL);
}