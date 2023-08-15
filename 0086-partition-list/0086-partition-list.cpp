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
    ListNode* partition(ListNode* head, int x) {

    if(head == NULL)
        return head;
        
    ListNode *head1=NULL,*temp1,*head2=NULL,*temp2;
    ListNode *curr=head;
    
    while(curr!=NULL){
        if(curr->val<x){
            //for the list with smaller than number
            if(head1 == NULL){
                //checking condition if the first element of this list
                head1=curr;
                curr=curr->next;
                temp1=head1;
                
            }else{
                temp1->next=curr;
                curr=curr->next;
                temp1=temp1->next;
                }
            
        }else{
            //for the list with greater than or equal to number
            if(head2 == NULL){
                //checking condition if the first element of this list
                head2=curr;
                curr=curr->next;
                temp2=head2;
                temp2->next=NULL;
                
            }else{
                temp2->next=curr;
                curr=curr->next;
                temp2=temp2->next;
                temp2->next=NULL;
            }
            
        }
    }
    if(head1!=NULL ){
        temp1->next = head2;
        return head1;
    }else{
          return head2;
    }
    }  
}; 