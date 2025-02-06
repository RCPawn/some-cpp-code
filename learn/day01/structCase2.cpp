#include<bits/stdc++.h>
using namespace std;

struct roles{
    string name;
    int age;
    string sex;
};

int main() {

    roles ro[5] = {
            {"刘备",23,"男"},
            {"关羽",22,"男"},
            {"张飞",20,"男"},
            {"赵云",21,"男"},
            {"貂蝉",19,"女"}
    };

    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            if (ro[i].age > ro[j].age) {
                roles t = ro[i];
                ro[i] = ro[j];
                ro[j] = t;
            }
        }
        cout << ro[i].name << ", " << ro[i].age << ", "
        << ro[i].sex << "\n";
    }

    return 0;
}