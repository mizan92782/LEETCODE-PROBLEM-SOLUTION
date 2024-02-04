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
 const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();




static const auto _ = [](){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
        
        stack<ListNode*>one;
        stack<ListNode*>two;
        
        while(first)
        {
            one.push(first);
            first=first->next;
        }
        
        while(second)
        {
             two.push(second);
            second=second->next;
        }
        
        
        ListNode* newhead=NULL;
        
        
        
        int x,y;
        int rem=0;
        int sum;
        
        while(!one.empty() || !two.empty())
        {    
              x=0;
              y=0;
              
             if(!one.empty())
             {
                 x=one.top()->val;
                 one.pop();
             }
             
             
             if(!two.empty())
             {
                 y=two.top()->val;
                 two.pop();
             }
             
             
             sum=x+y+rem;
              if(newhead==NULL)
              {
                  newhead= new ListNode(sum%10);
              }else
              {
                   ListNode* temp =new ListNode(sum%10);
                   temp->next=newhead;
                   newhead=temp;
             
              }
             
              rem=sum/10;
              
             
        }
        
        
        if(rem!=0)
        {
             ListNode* temp= new ListNode(rem);
             temp->next=newhead;
             newhead=temp;
        }
        
        
        
        return  newhead;
        

    }
};