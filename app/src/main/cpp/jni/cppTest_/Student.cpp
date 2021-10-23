//
// Created by Administrator on 2021/10/22.
//

#include "Student.h"
#include "logUtils.h"







//student.cpp                            //在此文件中进行函数的定义
#include <iostream>

void Student::display() {

 LOGE("%d",num);
 LOGE("%s",name);
 LOGE("%c",sex);


}

Student::Student(int num, char *name, char *sex) : num(num), name(name), sex(sex) {

}
