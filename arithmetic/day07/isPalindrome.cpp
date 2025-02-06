#include<bits/stdc++.h>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
};

bool isPalindrome(ListNode *head) {
    vector<int> arr;
    ListNode *p = head;
    while (p != nullptr) {
        arr.push_back(p->val);
        p = p->next;
    }
    int i = 0, j = arr.size() - 1;
    while (i < j) {
        if (arr[i] != arr[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    return 0;
}
