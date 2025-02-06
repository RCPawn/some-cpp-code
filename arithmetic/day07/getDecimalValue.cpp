#include<bits/stdc++.h>

using namespace std;
typedef struct ListNode {
    int val;
    ListNode *next;
};

/*int getDecimalValue(ListNode* head) {
    ListNode* cur = head;
    int ans = 0;
    while (cur != nullptr) {
        ans = ans * 2 + cur->val;
        cur = cur->next;
    }
    return ans;
}*/

int getDecimalValue(ListNode *head) {
    int ans = 0;
    ListNode *cur = head;
    while (cur) {
        ans = ans << 1 | cur->val;
        cur = cur->next;
    }
    return ans;
}

int main() {
    return 0;
}