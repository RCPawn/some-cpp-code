#include<bits/stdc++.h>

using namespace std;
typedef struct ListNode {
    int val;
    ListNode *next;
};

/*ListNode *middleNode(ListNode *head) {
    vector<ListNode *> arr = {head};
    while (arr.back()->next != nullptr)
        arr.push_back(arr.back()->next);
    return arr[arr.size() / 2];
}*/

ListNode *middleNode(ListNode *head) {
    ListNode *p = head;
    int n = 0;
    while (p) {
        n++;
        p = p->next;
    }
    int i = 0;
    p = head;
    while (i < (n / 2)) {
        i++;
        p = p->next;
    }
    return p;
}

int main() {
    return 0;
}