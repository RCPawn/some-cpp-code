#include <bits/stdc++.h>
using namespace std;

struct student {
    string name;
    int age;
} stu3; //结构体创建变量方式 3

int main() {
    //结构体创建变量方式 1
    struct student stu1; //struct 关键字可以省略

    stu1.name = "懒洋洋";
    stu1.age = 20;

    //结构体创建变量方式 2
    student stu2 = {"蜡笔小新", 6};

    cout << stu1.name << " " << stu1.age << endl;

    return 0;
}
