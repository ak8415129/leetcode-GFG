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
    ListNode* mergeNodes(ListNode* head) { 
        ListNode *ans=new ListNode(0);
        ListNode *fans=ans;
        ListNode *temp=head->next;
         int sum=0;
        while(temp!=NULL)
        { 
            sum=sum+(temp->val);
            if(temp->val==0)
            {
                ListNode *t=new ListNode(sum);  
                ans->next=t;
                ans=t;
                sum=0;
            } 
            temp=temp->next;
        } 
        return fans->next;
        
    }
};