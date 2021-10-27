// Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

// Example 1:

// Input: head = [1,2,3,4]
// Output: [2,1,4,3]
// Example 2:

// Input: head = []
// Output: []
// Example 3:

// Input: head = [1]
// Output: [1]

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
    ListNode *swapPairs(ListNode *head)
    {
        int i = 1;
        ListNode *curr = new ListNode;
        ListNode *prev = new ListNode;
        ListNode *temp = new ListNode;
        prev = head;
        curr = head;
        while (curr != NULL)
        {
            cout << "Curr " << i << " : " << curr->val << endl;
            prev = curr;
            if (curr->next == NULL)
                break;
            curr = curr->next;
            cout << "Curr " << i << " : " << curr->val << endl;
            if (i == 1)
            {
                temp->val = head->val;
                head->val = curr->val;
                curr->val = temp->val;
            }
            if (i % 2 == 1 && i != 1)
            {
                temp->val = prev->val;
                prev->val = curr->val;
                curr->val = temp->val;
            }
            i += 2;
            curr = curr->next;
            if (curr)
                cout << "Here Curr " << i << " : " << curr->val << endl;
        }
        return head;
    }
};