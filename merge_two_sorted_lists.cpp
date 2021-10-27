// Merge Two Sorted Lists
// Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

// Example 1:

// Input: l1 = [1,2,4], l2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// Example 2:

// Input: l1 = [], l2 = []
// Output: []
// Example 3:

// Input: l1 = [], l2 = [0]
// Output: [0]

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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        vector<int> vec;
        int i;
        while (l1)
        {
            vec.push_back(l1->val);
            l1 = l1->next;
        }
        while (l2)
        {
            vec.push_back(l2->val);
            l2 = l2->next;
        }
        sort(vec.begin(), vec.end());
        for (i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
        ListNode *res;
        ListNode *head;
        cout << endl;
        for (i = 0; i < vec.size(); i++)
        {
            ListNode *temp = new ListNode();
            temp->val = vec[i];
            temp->next = NULL;
            if (res == NULL)
            {
                res = temp;
                cout << res->val << " ";
                head = temp;
            }
            else
            {
                res->next = temp;
                res = res->next;
                cout << res->val << " ";
            }
        }
        return head;
    }
};