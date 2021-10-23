#include <stdio.h>

#include <stdlib.h>
#include <string.h>





//不同的平台下引入不同的头文件
#if _WIN32  //识别windows平台
#include <windows.h>
#elif __linux__  //识别linux平台

#include <unistd.h>

#endif

int sleep_by_linux_windows() {
    //不同的平台下调用不同的函数
#if _WIN32  //识别windows平台
    Sleep(5000);
#elif __linux__  //识别linux平台
    sleep(5);
#endif
    puts("http://c.biancheng.net/");

    return 0;
}


#define PI 3.14159   //宏定义  类似java 的常量



//带参宏定义中，形参之间可以出现空格，但是宏名和形参列表之间不能有空格出现。例如把：
#define MAX(a, b) (a>b)?a:b


//返回两个数中较大的一个
int maxqq(int a, int b) {
    return a > b ? a : b;
}
//enum week{ Mon, Tues, Wed, Thurs, Fri, Sat, Sun };

//enum week{ Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun };//指定值从1开始


//enum week a, b, c; //枚举变量


//enum week{ Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun } a, b, c;



typedef int INTEGER; //给int 起别名



//#define N 100




//#define N 2
//struct stu{
//    char name[10]; //姓名
//    int num;  //学号
//    int age;  //年龄
//    float score;  //成绩
//}boya[N], boyb[N], *pa, *pb;

//#define __init
//
//
// int root_wait=0;
//
//static int __init rootwait_setup(const char *str)
//{
//    if (*str)
//        return 6;
//    root_wait = 1;
//    return 1;
//}



void addsun(){


}






int main() {


//    printf("%2d",rootwait_setup("0"));



//    FILE *fp;
//    int i;
//    pa = boya;
//    pb = boyb;
//    if( (fp=fopen("d:\\demo.txt", "wb+")) == NULL ){
//        puts("Fail to open file!");
//        exit(0);
//    }
//    //从键盘输入数据
//    printf("Input data:\n");
//    for(i=0; i<N; i++,pa++){
//        scanf("%s %d %d %f",pa->name, &pa->num,&pa->age, &pa->score);
//    }
//    //将数组 boya 的数据写入文件
//    fwrite(boya, sizeof(struct stu), N, fp);
//    //将文件指针重置到文件开头
//    rewind(fp);
//    //从文件读取数据并保存到数据 boyb
//    fread(boyb, sizeof(struct stu), N, fp);
//    //输出数组 boyb 中的数据
//    for(i=0; i<N; i++,pb++){
//        printf("%s  %d  %d  %f\n", pb->name, pb->num, pb->age, pb->score);
//    }
//    fclose(fp);


//    //从键盘输入的数据放入a，从文件读取的数据放入b
//    int a[N], b[N];
//    int i, size = sizeof(int);
//    FILE *fp;
//    if( (fp=fopen("D:\\androidLog.txt", "rb+")) == NULL ){  //以二进制方式打开
//        puts("Fail to open file!");
//        exit(0);
//    }
//
//    //从键盘输入数据 并保存到数组a
//    for(i=0; i<N; i++){
//        scanf("%d", &a[i]);
//    }
//    //将数组a的内容写入到文件
//    fwrite(a, size, N, fp);
//    //将文件中的位置指针重新定位到文件开头
//    rewind(fp);
//    //从文件读取内容并保存到数组b
//    fread(b, size, N, fp);
//    //在屏幕上显示数组b的内容
//    for(i=0; i<N; i++){
//        printf("%d ", b[i]);
//    }
//    printf("\n");
//    fclose(fp);




//    FILE *fp;
//    char str[N+1];
//    if( (fp=fopen("d:\\androidLog.txt","rt")) == NULL ){
//        puts("Fail to open file!");
//        exit(0);
//    }
//
//    while(fgets(str, N, fp) != NULL){
//        printf("%s", str);
//    }
//    fclose(fp);















//    FILE *fp;
//    char ch;
//
//    //如果文件不存在，给出提示并退出
//    if( (fp=fopen("D:\\androidLog.txt","rt")) == NULL ){
//        puts("Fail to open file!");
//        exit(0);
//    }
//    //每次读取一个字节，直到读取完毕
//    while( (ch=fgetc(fp)) != EOF ){
//        putchar(ch);
//    }
//    putchar('\n');  //输出换行符
//    fclose(fp);












    /*文件操作*/
//    FILE *fp;
//    char str[N + 1];
//    //判断文件是否打开失败
//    if ( (fp = fopen("d:\\androidLog.txt", "rt")) == NULL ) {
//        puts("Fail to open file!");
//        exit(0);
//    }
//    //循环读取文件的每一行数据
//    while( fgets(str, N, fp) != NULL ) {
//        printf("%s", str);
//    }
//
//    //操作结束后关闭文件
//    fclose(fp);












//    INTEGER integer;
//
//    printf("%2d",sizeof(integer));


//struct {
//    int i:4;//位域
//    int :24;//无名位域 充当占位符
//} s;
//
//
//printf("%2d",sizeof(s));



//    共用体有时也被称为联合或者联合体，这也是
//    Union
//    这个单词的本意。
//    结构体和共用体的区别在于：结构体的各个成员会占用不同的内存，互相之间没有影响；而共用体的所有成员占用同一段内存，修改一个成员会影响其余所有成员。
//
//    结构体占用的内存大于等于所有成员占用的内存的总和（成员之间可能会存在缝隙），共用体占用的内存等于最长的成员占用的内存。共用体使用了内存覆盖技术，同一时刻只能保存一个成员的值，如果对新的成员赋值，就会把原来成员的值覆盖掉。
//    union data {
//        int n;
//        char ch;
//        short m;
//    } a;
//
//    printf("%d, %d\n", sizeof(a), sizeof(union data));
//    a.n = 0x40;
//    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
//    a.ch = '9';
//    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
//    a.m = 0x2059;
//    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
//    a.n = 0x3E25AD54;
//    printf("%X, %c, %hX\n", a.n, a.ch, a.m);


//    enum week{ Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun } day = Mon;
//    printf("%d, %d, %d, %d, %d\n", sizeof(enum week), sizeof(day), sizeof(Mon), sizeof(Wed), sizeof(int) );//枚举类型长度打印


//    Mon、Tues、Wed
//    这些名字都被替换成了对应的数字。这意味着，Mon、Tues、Wed
//    等都不是变量，它们不占用数据区（常量区、全局数据区、栈区和堆区）的内存，而是直接被编译到命令里面，放到代码区，所以不能用 & 取得它们的地址。这就是枚举的本质。
//    enum week {
//        Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun
//    } day;
//    scanf("%d", &day);
//
//
//    switch (day) {
//        case Mon:
//            puts("Monday");
//            break;
//        case Tues:
//            puts("Tuesday");
//            break;
//        case Wed:
//            puts("Wednesday");
//            break;
//        case Thurs:
//            puts("Thursday");
//            break;
//        case Fri:
//            puts("Friday");
//            break;
//        case Sat:
//            puts("Saturday");
//            break;
//        case Sun:
//            puts("Sunday");
//            break;
//        default:
//            puts("Error!");
//    }



//    struct stu{
//        char *name;  //姓名
//        int num;  //学号
//        int age;  //年龄
//        char group;  //所在小组
//        float score;  //成绩
//    }stus[] = {
//            {"Zhou ping", 5, 18, 'C', 145.0},
//            {"Zhang ping", 4, 19, 'A', 130.5},
//            {"Liu fang", 1, 18, 'A', 148.5},
//            {"Cheng ling", 2, 17, 'F', 139.0},
//            {"Wang ming", 3, 17, 'B', 144.5}
//    }, *ps;
//
//
//    //求数组长度
//    int len = sizeof(stus) / sizeof(struct stu);
//    printf("Name\t\tNum\tAge\tGroup\tScore\t\n");
//    for(ps=stus; ps<stus+len; ps++){
//        printf("%s\t%d\t%d\t%c\t%.1f\n", ps->name, ps->num, ps->age, ps->group, ps->score);
//    }







//
//    struct{
//        char *name;  //姓名
//        int num;  //学号
//        int age;  //年龄
//        char group;  //所在小组
//        float score;  //成绩
//    } stu1 = { "Tom", 12, 18, 'A', 136.5 }, *pstu = &stu1;
//    //读取结构体成员的值
//    printf("%s的学号是%d，年龄是%d，在%c组，今年的成绩是%.1f！\n", (*pstu).name, (*pstu).num, (*pstu).age, (*pstu).group, (*pstu).score);
//    printf("%s的学号是%d，年龄是%d，在%c组，今年的成绩是%.1f！\n", pstu->name, pstu->num, pstu->age, pstu->group, pstu->score);

//上面  两种写法等价



////    each undeclared identifier is reported only once for each function it appears in max 与系统函数库冲出 修改函数名解决问题
//
//    int x, y, maxval;
//    //定义函数指针
//    int (*pmax)(int, int) = maxqq;  //也可以写作int (*pmax)(int a, int b)
//    printf("Input two numbers:");
//    scanf("%d %d", &x, &y);
//    maxval = (*pmax)(x, y);
//    printf("Max value: %d\n", maxval);







//    MAX(1, 3);//宏调用


    //for int
//    int i=30122121;
//    long i2=309095024l;
//    short i3=30;
//    unsigned i4=2123453;
//    printf("%d,%o,%x,%X,%ld,%hd,%u/n",i,i,i,i,i2,i3,i4);//如果是：%l,%h，则输不出结果
//    printf("%d,%ld/n",i,i2);//试验不出%ld和%d之间的差别，因为long是4bytes
//    printf("%d,%hd/n/n/n",i,i3);//试验了%hd和%d之间的差别，因为short是2bytes
//    //for string and char
//    char ch1='d';
//    unsigned char ch2=160;
//    char *str="Hello everyone!";
//    printf("%c,%u,%s/n/n/n",ch1,ch2,str);//unsigned char超过128的没有字符对应
//
//    //for float and double,unsigned and signed can not be used with double and float
//    float fl=2.566545445F;//or 2.566545445f
//    double dl=265.5651445;
//    long double dl2=2.5654441454;
//    //%g没有e格式，默认6位包括小数点前面的数,
//    //%f没有e格式，默认6位仅只小数点后面包含6位
//    //%e采用e格式，默认6位为转化后的小数点后面的6位
//    printf("%f,%e,%g,%.7f/n",fl,dl,dl,dl);
//    printf("%f,%E,%G,%f/n",fl,dl,dl,dl);//%F is wrong
//    printf("%.8f,%.10e/n",fl,dl);
//    printf("%.8e,%.10f/n/n/n",fl,dl);
//    //for point
//    int *iP=&i;
//    char *iP1="fdsfksd;kfdslf";
//    void *iP2 = NULL;//dangerous!
//    printf("%p,%p,%p/n/n/n",iP,iP1,iP2);
//
//    //其他知识：负号，表示左对齐（默认是右对齐）；%6.3，6表示宽度，3表示精度
//    char *s="Hello world!";
//    printf(":%s: /n:%10s: /n:%.10s: /n:%-10s: /n:%.15s: /n:%-15s: /n:%15.10s: /n:%-15.10s:/n/n/n",
//           s,s,s,s,s,s,s,s);
//    double ddd=563.908556444;
//    printf(":%g: /n:%10g: /n:%.10g: /n:%-10g: /n:%.15g: /n:%-15g: /n:%15.10g: /n:%-15.10g:/n/n/n",
//           ddd,ddd,ddd,ddd,ddd,ddd,ddd,ddd);
//    //还有一个特殊的格式%*.* ,这两个星号的值分别由第二个和第三个参数的值指定
//    printf("%.*s /n", 8, "abcdefgggggg");
//    printf("%*.*f /n", 3,3, 1.25456f);


//    struct {
//        char *name;  //姓名
//        int num;  //学号
//        int age;  //年龄
//        char group;  //所在学习小组
//        float score;  //成绩
//    } class[] = {{"Li ping",    5, 18, 'C', 145.0f},
//                 {"Zhang ping", 4, 19, 'A', 130.5f},};




//    //读取结构体成员的值
//    printf("%s的学号是%d，年龄是%d，在%c组，今年的成绩是%.1f！\n", class[0].name, class[0].num, class[0].age,
//           class[0].group, class[0].score);
//    printf("%s的学号是%d，年龄是%d，在%c组，今年的成绩是%.1f！\n", class[1].name, class[1].num, class[1].age,
//           class[1].group, class[1].score);


//    int i, num_140 = 0;
//    float sum = 0;
//    for(i=0; i<2; i++){
//        sum += class[i].score;
//        if(class[i].score < 140) num_140++;
//    }
//    printf("sum=%.2f\naverage=%.2f\nnum_140=%d\n", sum, sum/2, num_140);




////合法的二进制 //以0b 开头
//    int a = 0b101;  //换算成十进制为 5
//    int b = -0b110010;  //换算成十进制为 -50
//    int c = 0B100001;  //换算成十进制为 33

////合法的八进制数 以0 开头
//    int a = 015;  //换算成十进制为 13
//    int b = -0101;  //换算成十进制为 -65
//    int c = 0177777;  //换算成十进制为 65535



//////合法的十六进制 以0X 开头
//    int a = 0X2A;  //换算成十进制为 42
//    int b = -0XA0;  //换算成十进制为 -160
//    int c = 0xffff;  //换算成十进制为 65535


//    printf("%o",a);





//    int a1=20, a2=345, a3=700, a4=22;
//    int b1=56720, b2=9999, b3=20098, b4=2;
//    int c1=233, c2=205, c3=1, c4=6666;
//    int d1=34, d2=0, d3=23, d4=23006783;
//    printf("%-9d %-9d %-9d %-9d\n", a1, a2, a3, a4);
//    printf("%-9d %-9d %-9d %-9d\n", b1, b2, b3, b4);
//    printf("%-9d %-9d %-9d %-9d\n", c1, c2, c3, c4);
//    printf("%-9d %-9d %-9d %-9d\n", d1, d2, d3, d4);
//    system("pause");




//    int nums[10];
//    int i;
//
//    //将1~10放入数组中
//    for(i=0; i<10; i++){
//        nums[i] = (i+1);
//    }
//
//    //依次输出数组元素
//    for(i=0; i<10; i++){
//        printf("%d ", nums[i]);
//    }



//
//    int nums[10];
//    int i;
//
//    //从控制台读取用户输入
//    for(i=0; i<10; i++){
//        scanf("%d", &nums[i]);  //注意取地址符 &，不要遗忘哦
//    }
//
//    //依次输出数组元素
//    for(i=0; i<10; i++){
//        printf("%d ", nums[i]);
//    }


//    float m[12];  //定义一个长度为 12 的浮点型数组
//    char ch[9];  //定义一个长度为 9 的字符型数组



//    int a[4] = {20, 345, 700, 22};




////    我们可以通过下面的形式将数组的所有元素初始化为 0：
//    int nums[10] = {0};
//    char str[10] = {0};
//    float scores[10] = {0.0};





//    int a[4] = {20, 345, 700, 22};
//    int b[4] = {56720, 9999, 20098, 2};
//    int c[4] = {233, 205, 1, 6666};
//    int d[4] = {34, 0, 23, 23006783};
//    printf("%-9d %-9d %-9d %-9d\n", a[0], a[1], a[2], a[3]);
//    printf("%-9d %-9d %-9d %-9d\n", b[0], b[1], b[2], b[3]);
//    printf("%-9d %-9d %-9d %-9d\n", c[0], c[1], c[2], c[3]);
//    printf("%-9d %-9d %-9d %-9d\n", d[0], d[1], d[2], d[3]);






//    int i, j;  //二维数组下标
//    int sum = 0;  //当前科目的总成绩
//    int average;  //总平均分
//    int v[3];  //各科平均分
//    int a[5][3] = {{80,75,92}, {61,65,71}, {59,63,70}, {85,87,90}, {76,77,85}};
//    for(i=0; i<3; i++){
//        for(j=0; j<5; j++){
//            sum += a[j][i];  //计算当前科目的总成绩
//        }
//        v[i] = sum / 5;  // 当前科目的平均分
//        sum = 0;
//    }
//    average = (v[0] + v[1] + v[2]) / 3;
//    printf("Math: %d\nC Languag: %d\nEnglish: %d\n", v[0], v[1], v[2]);
//    printf("Total: %d\n", average);



//
////判断数组是否包含指定 元素
//    int nums[10] = {1, 10, 6, 296, 177, 23, 0, 100, 34, 999};
//    int i, num, thisindex = -1;
//
//    printf("Input an integer: ");
//    scanf("%d", &num);
//    for(i=0; i<10; i++){
//        if(nums[i] == num){
//            thisindex = i;
//            break;
//        }
//    }
//    if(thisindex < 0){
//        printf("%d isn't  in the array.\n", num);
//    }else{
//        printf("%d is  in the array, it's index is %d.\n", num, thisindex);
//    }


//    char str1[100]="The URL is ";
//    char str2[60];
//    printf("Input a URL: ");
//    gets(str2);
//    strcat(str1, str2);
//    puts(str1);


//    char str1[50] = "《C语言变怪兽》";
//    char str2[50] = "http://c.biancheng.net/cpp/u/jiaocheng/";
//    strcpy(str1, str2);
//    printf("str1: %s\n", str1);



//
//    char a[] = "aBcDeF";
//    char b[] = "AbCdEf";
//    char c[] = "aacdef";
//    char d[] = "aBcDeF";
//    printf("a VS b: %d\n", strcmp(a, b));
//    printf("a VS c: %d\n", strcmp(a, c));
//    printf("a VS d: %d\n", strcmp(a, d));


///数组排序

//    int nums[10] = {4, 5, 2, 10, 7, 1, 8, 3, 6, 9};
//    int i, j, temp;
//    //冒泡排序算法：进行 n-1 轮比较
//    for(i=0; i<10-1; i++){
//        //每一轮比较前 n-1-i 个，也就是说，已经排序好的最后 i 个不用比较
//        for(j=0; j<10-1-i; j++){
//            if(nums[j] > nums[j+1]){
//                temp = nums[j];
//                nums[j] = nums[j+1];
//                nums[j+1] = temp;
//            }
//        }
//    }
//
//    //输出排序后的数组
//    for(i=0; i<10; i++){
//        printf("%d ", nums[i]);
//    }
//    printf("\n");


//    char str1[] = "http://c.biancheng.net";
//    char str2[] = "http://www.baidu.com";
//    //比较两个字符串大小
//    int result = strcmp(str1, str2);
//    printf("str1  - str2 = %d\n", result);





//    char str1[] = "http://c.biancheng.net";
//    char str2[] = "http://www.baidu.com";
//    int result, i;
//    //比较两个字符串大小
//    for(i=0; (result = str1[i] - str2[i]) == 0; i++){
//        if(str1[i] == '\0' || str2[i] == '\0'){
//            break;
//        }
//    }
//
//    printf("str1  - str2 = %d\n", result);




//    标准C语言（ANSI
//    C）共定义了15
//    个头文件，称为“C标准库”，所有的编译器都必须支持，如何正确并熟练的使用这些标准库，可以反映出一个程序员的水平。
//    合格程序员：<stdio.h >、<ctype.h >、<stdlib.h >、<string.h >
//                                             熟练程序员：<assert.h >、<limits.h >、<stddef.h >、<time.h >
//                                                                                        优秀程序员：<float.
//    h >、<math.h >、<error.h >、<locale.h >、<setjmp.h >、<signal.h >、<stdarg.h >



//    较之其他编程语言，C/C++ 语言更依赖预处理器，所以在阅读或开发 C/C++ 程序过程中，可能会接触大量的预处理指令，比如 #include、#define 等。

//    以上各类函数不仅数量众多，而且有的还需要硬件知识才能使用，初学者要想全部掌握得需要一个较长的学习过程。我的建议是先掌握一些最基本、最常用的函数，在实践过程中再逐步深入。由于课时关系，本教程只介绍了很少一部分库函数，其余部分读者可根据需要查阅C语言函数手册，网址是
//    http://www.cplusplus.com。



//    C语言源文件要经过编译、链接才能生成可执行程序：

//    ) 编译（Compile）会将源文件（.c文件）转换为目标文件。对于 VC/VS，目标文件后缀为.obj；对于GCC，目标文件后缀为.o。

//    2) 链接（Link）是针对多个文件的，它会将编译生成的多个目标文件以及系统中的库、组件等合并成一个可执行程序。



//    int result = sleep_by_linux_windows();
//
//
//    printf("%d", result);




//#include 的用法有两种，如下所示：
//#include <stdHeader.h>
//#include "myHeader.h"
//
//    使用尖括号< >和双引号" "的区别在于头文件的搜索路径不同：
//    使用尖括号< >，编译器会到系统路径下查找头文件；
//    而使用双引号" "，编译器首先在当前目录下查找头文件，如果没有找到，再到系统路径下查找。


////输出一个地址
//    int a = 100;
//    char str[20] = "c.biancheng.net";
//    printf("%#X, %#X\n", &a, str);

//    通过指针交换两个变量的值。

//    int a = 100, b = 999, temp;
//    int *pa = &a, *pb = &b;
//    printf("a=%d, b=%d\n", a, b);
//    /*****开始交换*****/
//    temp = *pa;  //将a的值先保存起来
//    *pa = *pb;  //将b的值交给a
//    *pb = temp;  //再将保存起来的a的值交给b
//    /*****结束交换*****/
//    printf("a=%d, b=%d\n", a, b);


///*数组指针*/
//    int arr[] = { 99, 15, 100, 888, 252 };
//    int len = sizeof(arr) / sizeof(int);  //求数组长度
//    int i;
//    for(i=0; i<len; i++){
//        printf("%d  ", *(arr+i) );  //*(arr+i)等价于arr[i]
//    }
//    printf("\n");




//    int arr[] = { 99, 15, 100, 888, 252 };
//    int *p = arr;


//    再强调一遍，“arr 本身就是一个指针”这种表述并不准确，严格来说应该是“arr 被转换成了一个指针”


//    如果一个指针指向了数组，我们就称它为数组指针（Array Pointer）。



//char *url ="sadadadas";   //字符串常量  不能改变字符数组中的值

//    char str[] = "http://c.biancheng.net";//字符数组  可改变字符数组的值

}


#undef PI  //宏定义  结束作用域  宏定义必须写在函数之外，其作用域为宏定义命令起到源程序结束。如要终止其作用域可使用#undef命令

