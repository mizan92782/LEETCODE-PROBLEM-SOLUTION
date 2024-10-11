/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void util(TreeNode** head,TreeNode* right,TreeNode* left)
    {
         if(right==NULL && left==NULL ) return ;
           
        if(left!=NULL)
        {
            (*head)->right=left;
            (*head)->left=NULL;

             *head=(*head)->right;
             util(head, (*head)->right, (*head)->left);
        }
           
        



        if(right!=NULL)
        {
            (*head)->right=right;
            (*head)->left=NULL;
            (*head)=(*head)->right;
             util(head, (*head)->right, (*head)->left);
        }

    }


    void flatten(TreeNode* head) {
         if(head==NULL) return ;
         util(&head,head->right,head->left);
    }
};