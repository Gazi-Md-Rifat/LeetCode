/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA ||!headB){
            return NULL;
        }   
        ListNode *a = headA;
        ListNode *b = headB;
        int count1 = 0;
        int count2 = 0;
        while (a || b){
            if (a){
                count1++;
                a = a->next;
            }
            if (b){
                count2++;
                b = b->next;
            }
        }
        if (count1 < count2){
            swap(headA, headB);
            swap(count1, count2);
        }
        while (headB){
            if ( count1 != count2){
                headA = headA->next;
                count2++;
            }
            if (count1 == count2){
                if (headA == headB){
                    return headA;
                }
                headA = headA->next;
                headB = headB->next;
            }
        }
        return NULL;
    }
};