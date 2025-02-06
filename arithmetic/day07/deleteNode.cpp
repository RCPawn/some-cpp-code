#include<bits/stdc++.h>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
};

/*ListNode* deleteNode(ListNode* head, int val) {
    if(head->val == val) return head->next;
    ListNode *pre = head, *cur = head->next;
    while (cur) {
        if (cur->val == val) {
            pre->next = cur->next;
            break;
        }
        pre = cur;
        cur = cur->next;
    }
    return head;
}*/

ListNode* deleteNode(ListNode* head, int val) {
    if(head->val == val) return head->next;
    ListNode *pre = head, *cur = head->next;
    while(cur && cur->val != val) {
        pre = cur;
        cur = cur->next;
    }
    pre->next = cur->next;
    return head;
}

int main() {
    return 0;
}
