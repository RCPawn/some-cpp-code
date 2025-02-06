#include<bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int score;
};

struct Teacher {
    string name;
    Student sArr[5];
};

void allocateSpace(Teacher tArr[], int l) {
    string tName = "教师";
    string sName = "学生";
    string seed = "abcde";
    for (int i = 0; i < l; i++) {
        tArr[i].name = tName + seed[i];
        for (int j = 0; j < 5; j++) {
            tArr[i].sArr[j].name = sName + seed[j];
            tArr[i].sArr[j].score = rand() % 61 + 40;
        }
    }
}

void printTeachers(Teacher tArr[], int l) {
    for (int i = 0; i < l; i++) {
        cout << tArr[i].name << endl;
        for (int j = 0; j < 5; j++) {
            cout << "\t姓名：" << tArr[i].sArr[j].name
            << " 分数：" << tArr[i].sArr[j].score << "\n";
        }
    }
}

int main() {
    srand((unsigned int) time(NULL));

    Teacher tArr[3];

    allocateSpace(tArr, size(tArr));
    printTeachers(tArr, size(tArr));

    return 0;
}