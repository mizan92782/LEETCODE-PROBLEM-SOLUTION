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
    bool find=true;
    void ispalin(ListNode** one,ListNode* two)
    {  
         if(two==NULL)
         {
            return ;
         }
            
        ispalin(one,two->next);


         if ((*one)->val == two->val) {
            *one = (*one)->next;
        } else {
            find = false;
            return ;
        }

    }


    bool isPalindrome(ListNode* head) {
        
        ispalin(&head,head);

        return find;
    }
};