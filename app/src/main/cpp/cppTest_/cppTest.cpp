//
// Created by Administrator on 2021/10/20.
//

#include <iostream>
#include <string>
#include "math.h"


#include <cstdio>
//将类定义在命名空间中
//namespace Diy{
//    class Student{
//    public:
//        char *name;
//        int age;
//        float score;
//
//    public:
//        void say(){
//            printf("%s的年龄是 %d，成绩是 %f\n", name, age, score);
//        }
//    };
//}






//////通过class关键字类定义类
//class Student {
//public:
//    //类包含的变量
//    char *name;
//    int age;
//    float score;
//
//    //类包含的函数
//    void say() {
//        printf("%s的年龄是 %d，成绩是 %f\n", name, age, score);
//    }
//};


////将类定义在命名空间中
//namespace Diy{
//    class Student{
//    public:
//        char *name;
//        int age;
//        float score;
//
//    public:
//        void say(){
//            printf("%s的年龄是 %d，成绩是 %f\n", name, age, score);
//        }
//    };
//}
//必须重新声明
//using namespace std;    //作用范围只在当前方法
//void func(){
//
//    cout<<"http://c.biancheng.net"<<endl;
//}

using namespace std;    //全局起作用
//void func(){
////    必须重新声明
////    using namespace std;
//    cout<<"http://c.biancheng.net"<<endl;
//}



//
//int sum(int n){
//    int total = 0;
//    //在for循环的条件语句内部定义变量i
//    for(int i=1; i<=n ;i++){
//        total += i;
//    }
//    return total;
//}




////内联函数，交换两个数的值
//inline void swap(int *a, int *b){
//    int temp;
//    temp = *a;
//    *a = *b;
//    *b = temp;
//}


/*重载函数*/ //从这个角度讲，函数重载仅仅是语法层面的，本质上它们还是不同的函数，占用不同的内存，入口地址也不一样
////交换 int 变量的值
//void Swap(int *a, int *b){
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
////交换 float 变量的值
//void Swap(float *a, float *b){
//    float temp = *a;
//    *a = *b;
//    *b = temp;
//}
////交换 char 变量的值
//void Swap(char *a, char *b){
//    char temp = *a;
//    *a = *b;
//    *b = temp;
//}
////交换 bool 变量的值
//void Swap(bool *a, bool *b){
//    char temp = *a;
//    *a = *b;
//    *b = temp;
//}


//
//class Student{
//public:
//    //成员变量
//    char *name;
//    int age;
//    float score;
//    //成员函数
//    void say(){
//        cout<<name<<"的年龄是"<<age<<"，成绩是"<<score<<endl;
//    }
//};

//class Student{
//public:
//    char *name;
//    int age;
//    float score;
//    void say(){
//        cout<<name<<"的年龄是"<<age<<"，成绩是"<<score<<endl;
//    }
//};



////基类 Pelple
//class People{
//public:
//    void setname(char *name);
//    void setage(int age);
//    char *getname();
//    int getage();
//private:
//    char *m_name;
//    int m_age;
//};
//
//
//void People::setname(char *name){ m_name = name; }
//void People::setage(int age){ m_age = age; }
//char* People::getname(){ return m_name; }
//int People::getage(){ return m_age;}
//
//
//
////派生类 Student
//class Student: public People{
//public:
//    void setscore(float score);
//    float getscore();
//private:
//    float m_score;
//};
//
//
//void Student::setscore(float score){ m_score = score; }
//float Student::getscore(){ return m_score; }

////基类
//class A{
//public:
//    A(int a);
//public:
//    void display();
//public:
//    int m_a;
//};
//A::A(int a): m_a(a){ }
//void A::display(){
//    cout<<"Class A: m_a="<<m_a<<endl;
//}
////派生类
//class B: public A{
//public:
//    B(int a, int b);
//public:
//    void display();
//public:
//    int m_b;
//};
//B::B(int a, int b): A(a), m_b(b){ }
//void B::display(){
//    cout<<"Class B: m_a="<<m_a<<", m_b="<<m_b<<endl;
//}



////基类A
//class A{
//public:
//    A(int a);
//public:
//    void display();
//protected:
//    int m_a;
//};
//A::A(int a): m_a(a){ }
//void A::display(){
//    cout<<"Class A: m_a="<<m_a<<endl;
//}
////中间派生类B
//class B: public A{
//public:
//    B(int a, int b);
//public:
//    void display();
//protected:
//    int m_b;
//};
//B::B(int a, int b): A(a), m_b(b){ }
//void B::display(){
//    cout<<"Class B: m_a="<<m_a<<", m_b="<<m_b<<endl;
//}
//
//
//
//
////基类C
//class C{
//public:
//    C(int c);
//public:
//    void display();
//protected:
//    int m_c;
//};
//C::C(int c): m_c(c){ }
//void C::display(){
//    cout<<"Class C: m_c="<<m_c<<endl;
//}
////最终派生类D
//class D: public B, public C{
//public:
//    D(int a, int b, int c, int d);
//public:
//    void display();
//private:
//    int m_d;
//};
//D::D(int a, int b, int c, int d): B(a, b), C(c), m_d(d){ }
//void D::display(){
//    cout<<"Class D: m_a="<<m_a<<", m_b="<<m_b<<", m_c="<<m_c<<", m_d="<<m_d<<endl;
//}



////基类People
//class People{
//public:
//    People(char *name, int age);
//    void display();
//protected:
//    char *m_name;
//    int m_age;
//};
//People::People(char *name, int age): m_name(name), m_age(age){}
//void People::display(){
//    cout<<m_name<<"今年"<<m_age<<"岁了，是个无业游民。"<<endl;
//}
////派生类Teacher
//class Teacher: public People{
//public:
//    Teacher(char *name, int age, int salary);
//    void display();
//private:
//    int m_salary;
//};
//Teacher::Teacher(char *name, int age, int salary): People(name, age), m_salary(salary){}
//void Teacher::display(){
//    cout<<m_name<<"今年"<<m_age<<"岁了，是一名教师，每月有"<<m_salary<<"元的收入。"<<endl;
//}



int main() {

        int r=sum(3,7);


        printf("%2d",r);



//    char url[30] = {0};
//    //读取一行字符串
//    cin.getline(url, 30);
//    //输出上一条语句读取字符串的个数
//    cout << "读取了 "<<cin.gcount()<<" 个字符" << endl;
//    //输出 url 数组存储的字符串
//    cout.write(url, 30);
//
//
//    People *p = new People("王志刚", 23);
//    p -> display();
//    p = new Teacher("赵宏佳", 45, 8200);
//    p -> display();











//    A *pa = new A(1);
//    B *pb = new B(2, 20);
//    C *pc = new C(3);
//    D *pd = new D(4, 40, 400, 4000);
//    pa = pd;
//    pa -> display();
//    pb = pd;
//    pb -> display();
//    pc = pd;
//    pc -> display();
//    cout<<"-----------------------"<<endl;
//    cout<<"pa="<<pa<<endl;
//    cout<<"pb="<<pb<<endl;
//    cout<<"pc="<<pc<<endl;
//    cout<<"pd="<<pd<<endl;



//    A a(10);
//    B b(66, 99);
//    //赋值前
//    a.display();
//    b.display();
//    cout<<"--------------"<<endl;
//    //赋值后
//    a = b;
//    a.display();
//    b.display();














//    Student stu;
//    stu.setname("小明");
//    stu.setage(16);
//    stu.setscore(95.5f);
//    cout<<stu.getname()<<"的年龄是 "<<stu.getage()<<"，成绩是 "<<stu.getscore()<<endl;


//
//    string s1, s2, s3;
//    s1 = s2 = s3 = "1234567890";
//    s2.erase(5);
//    s3.erase(5, 3);
//    cout<< s1 <<endl;
//    cout<< s2 <<endl;
//    cout<< s3 <<endl;









//    string s1 = "first ";
//    string s2 = "second ";
//    char *s3 = "third ";
//    char s4[] = "fourth ";
//    char ch = '@';
//    string s5 = s1 + s2;
//    string s6 = s1 + s3;
//    string s7 = s1 + s4;
//    string s8 = s1 + ch;
//
//    cout<<s5<<endl<<s6<<endl<<s7<<endl<<s8<<endl;










//    string s = "1234567890";
//    for(int i=0,len=s.length(); i<len; i++){
//        cout<<s[i]<<" ";
//    }
//    cout<<endl;
//    s[5] = '5';
//    cout<<s<<endl;








//
//    string s;
//    cin>>s;  //输入字符串
//    cout<<s<<endl;  //输出字符串

//
//    Student *pStu = new Student;
//    pStu -> name = "xiaoming";
//    pStu -> age = 15;
//    pStu -> score = 92.5f;
//    pStu -> say();
//    delete pStu;  //删除对象












//    //创建对象
//    Student stu;
//    stu.name = "小明";
//    stu.age = 15;
//    stu.score = 92.5f;
//    stu.say();


//    //交换 int 变量的值
//    int n1 = 100, n2 = 200;
//    Swap(&n1, &n2);
//    cout<<n1<<", "<<n2<<endl;
//
//    //交换 float 变量的值
//    float f1 = 12.5, f2 = 56.93;
//    Swap(&f1, &f2);
//    cout<<f1<<", "<<f2<<endl;
//
//    //交换 char 变量的值
//    char c1 = 'A', c2 = 'B';
//    Swap(&c1, &c2);
//    cout<<c1<<", "<<c2<<endl;
//
//    //交换 bool 变量的值
//    bool b1 = false, b2 = true;
//    Swap(&b1, &b2);
//    cout<<b1<<", "<<b2<<endl;




//    int m, n;
//    cin>>m>>n;
//    cout<<m<<", "<<n<<endl;
//    swap(&m, &n);
//    cout<<m<<", "<<n<<endl;



//
//    bool flag = true;
//    if(flag){
//        cout<<"true"<<endl;
//    }else{
//        cout<<"false"<<endl;
//    }
//    flag = false;
//    if(flag){
//        cout<<"true"<<endl;
//    }else{
//        cout<<"false"<<endl;
//    }












//    int a, b;
//    bool flag;  //定义布尔变量
//    cin>>a>>b;
//    flag = a > b;
//    cout<<"flag = "<<flag<<endl;







//    cout<<"Input a interge: ";
//    int n;
//    cin>>n;
//    cout<<"Total: "<<sum(n)<<endl;








//   c++   输入 cout 输出 cin
//    int x;
//    float y;
//    cout<<"Please input an int number:"<<endl;
//    cin>>x;
//    cout<<"The int number is x= "<<x<<endl;
//    cout<<"Please input a float number:"<<endl;
//    cin>>y;
//    cout<<"The float number is y= "<<y<<endl;
















//    func();














//    Diy::Student stu1;
//    stu1.name = "dsfsdfdsfdsfdsfdsfdsfdsfdsfds";
//    stu1.age = 15;
//    stu1.score = 92.5f;
//    stu1.say();



//
//    //声明命名空间std
//    using namespace std;
//
//    //定义字符串变量
//    string str;
//    //定义 int 变量
//    int age;
//    //从控制台获取用户输入
//    cin>>str>>age;
//    //将数据输出到控制台
//    cout<<str<<"已经成立"<<age<<"年了！"<<endl;









//    cout<<"C语言中文网"<<endl;
//    func();

//    cout<<"http://c.biancheng.net"<<endl;

//    //声明命名空间std
//    using namespace std;
//
//    //定义字符串变量
//    string str;
//    //定义 int 变量
//    int age;
//    //从控制台获取用户输入
//    cin>>str>>age;
//    //将数据输出到控制台
//    cout<<str<<"已经成立"<<age<<"年了！"<<endl;


//    //通过类来定义变量，即创建对象
//    class Student stu1;  //也可以省略关键字class
//    //为类的成员变量赋值
//    stu1.name = "小明";
//    stu1.age = 15;
//    stu1.score = 97.5f;
//    //调用类的成员函数
//    stu1.say();
//
//    printf("%s的年龄是 %d，成绩是 %f\n", stu1.age, stu1.name, stu1.name);

    return 0;
}