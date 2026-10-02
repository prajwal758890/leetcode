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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head;
        ListNode *temp1 = head;
        
        while(temp!=NULL)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                break;
            }
            temp = temp ->next; 

            
            temp1 = temp1->next;
            // count = +1;
        }
            // count = count / 2 + 1;
            // temp = head;
            // for(int i = 1;i<=count;i++)
            // {
            //     temp = temp->next;
            // }
            return temp1;
    }
};