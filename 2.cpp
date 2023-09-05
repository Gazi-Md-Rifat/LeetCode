class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *temp = new ListNode;
        ListNode *ans = temp;
        int value = 0;
        while (l1 != nullptr || l2 != nullptr || value > 0)
        {
            if (l1 != nullptr)
            {
                value += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr)
            {
                value += l2->val;
                l2 = l2->next;
            }
            temp->next = new ListNode(value % 10);
            temp = temp->next;
            value = value / 10;
            
        }
        return ans->next;
    }
};