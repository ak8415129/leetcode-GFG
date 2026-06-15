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
    ListNode* deleteMiddle(ListNode* head) { 
      if(head == NULL || head->next == NULL)
            return NULL;

        // int count = 0;
        // ListNode* temp = head;

        // while(temp != NULL)
        // {
        //     count++;
        //     temp = temp->next;
        // }

        // int mid = count / 2;

        // ListNode* curr = head;
        // ListNode* prev = NULL;

        // for(int i = 0; i < mid; i++)
        // {
        //     prev = curr;
        //     curr = curr->next;
        // }

        // prev->next = curr->next;
         
        ListNode* slow = head;
        ListNode* fast=head;
        ListNode* prev = NULL;
        while(fast!=NULL &&fast->next!=NULL)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        return head;
        
    }
};