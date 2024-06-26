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
    ListNode* insert(ListNode* &head, int value){
                
        if(head == NULL){
            head = new ListNode(value);
            return head;
        }
        
        ListNode* tmp = head;
        
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        
        tmp->next = new ListNode(value);
        
        return head;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         int n1=0 ,n2=0 ,sum=0; 
//         while(l1!=NULL)
//         {
//             n1=n1*10+(l1->val); 
//             l1=l1->next;
            
//         } 
//          while(l2!=NULL)
//         {
//             n2=n2*10+(l2->val); 
//             l2=l2->next;
            
//         } 
//         sum=n1+n2;
//        ListNode *ans;
       
//         while(sum!=0)
//         {
//             int r=sum%10;
//            insert(ans,r);
//             sum=sum/10;
//         } 
        
//         return ans;
//     } 
        ListNode *ptr = new ListNode();     //new list;
        ListNode *temp = ptr;
        
        int c = 0;
		//traversing both list till one of the list not reaches NULL
        while (l1 != NULL ||  l2 != NULL || c)
        {
            int sum = 0;
			// if l1  is not null
			// add l1-> value to sum
            if(l1 != NULL)
            {
                sum += l1->val;
                l1 = l1 -> next;
            }
            
			// if l2  is not null
			// add l2-> value to sum
            if(l2 != NULL)
            {
                sum += l2->val;
                l2 = l2 -> next;
            }
            
			// add carry to sum
            sum += c;
			// carry is updated by sum/10 because for 18 , 
			// 18 / 10 is 1 which is the carry
            c = sum/10;
			// add sum% 10 to new node as it containg the sum
            ListNode *node = new ListNode(sum%10);
            temp -> next = node;
            temp = temp -> next;
        }
        return ptr -> next;
    }
};