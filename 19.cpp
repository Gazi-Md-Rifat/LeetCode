/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *Node = new ListNode(0);
        Node->next = head;
        ListNode *first = Node;
        ListNode *second = Node;

        for (int i = 0; i <= n; i++){
            first = first->next;
        }
        while (first != nullptr){
            first = first->next;
            second = second->next;
        }

        ListNode *temp = second->next;
        second->next = second->next->next;
        delete temp;
        return Node->next;
    }
};