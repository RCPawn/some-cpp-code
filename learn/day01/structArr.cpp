#include <bits/stdc++.h>
using namespace std;

struct student {
    string name;
    int age;
};

int main() {
    student a[3] = {
            {"小灰灰", 18},
            {"灰太狼", 19},
            {"懒洋洋", 20}
    };

    for (int i = 0; i < size(a); ++i) {
        cout << a[i].name << " " << a[i].age << endl;
    }

    return 0;
}
