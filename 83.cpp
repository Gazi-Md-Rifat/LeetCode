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
class Solution
{
public:
	ListNode *deleteDuplicates(ListNode *head)
	{
		if (head == nullptr)
		{
			return head;
		}
		ListNode *root = head->next;
		ListNode *curr = head;
		while (root != nullptr)
		{
			if (curr->val == root->val)
			{
				root = root->next;
				continue;
			}
			curr->next = root;
			curr = curr->next;
			root = root->next;
		}
		curr->next = nullptr;
		return head;
	}
};