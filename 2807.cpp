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
    int findGCD(int n1, int n2){
        int GCD = 0;
        for (int i = 1; i <= min(n1, n2); i++){
            if (n1 % i == 0 && n2 % i == 0){
                GCD = max(GCD, i);
            }
        }
        return GCD;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *root = head;
        while (head->next){
            int first = head->val;
            int second = head->next->val;
            int GCD = findGCD(first, second);
            if (GCD != 0){
                ListNode *temp = new ListNode(GCD);
                temp->next = head->next;
                head->next = temp;
                head = head->next->next;
                continue;
            }
            head = head->next;
        }
        return root;
    }
};