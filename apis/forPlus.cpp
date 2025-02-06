#include <bits/stdc++.h>
using namespace std;

int main() {

    int a[] = {1, 2, 3, 4, 5};

    for (int i: a) {
        cout << i << " ";
    }

    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
    };

    for (int (&row)[3]: arr) {
        for (int i: row) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}*/
