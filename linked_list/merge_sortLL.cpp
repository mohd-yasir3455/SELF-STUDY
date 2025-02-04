#include <iostream>

using namespace std;

// Definition for singly-linked list node
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* findmid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right) {
        if (left == NULL)
            return right;
        if (right == NULL)
            return left;

        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;

        while (left != NULL && right != NULL) {
            if (left->val < right->val) {
                temp->next = left;
                temp = temp->next; // Update temp pointer
                left = left->next;
            } else {
                temp->next = right;
                temp = temp->next; // Update temp pointer
                right = right->next;
            }
        }

        if (left != NULL) {
            temp->next = left;
        }
        if (right != NULL) {
            temp->next = right;
        }

        return ans->next;
    }

    ListNode* sortList(ListNode* head) {
        // base case
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* mid = findmid(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        // to break the linked list in 2 part
        mid->next = NULL;
        // recursive calls
        left = sortList(left);
        right = sortList(right);

        // all the part is broken now add them
        ListNode* ans = merge(left, right);
        return ans;
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);

    Solution sol;
    head = sol.sortList(head);

    cout << "Sorted Linked List: ";
    printList(head);

    return 0;
}
