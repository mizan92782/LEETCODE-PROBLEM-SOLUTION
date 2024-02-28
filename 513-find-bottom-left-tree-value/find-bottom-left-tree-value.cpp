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

   

    int findBottomLeftValue(TreeNode* root) {
        
        queue<TreeNode*>que;
        que.push(root);
        que.push(NULL);
         int ans=0;

        while(!que.empty())
        {
             TreeNode* x= que.front();
             que.pop();

             if(x==NULL && que.size()==0)
             {
                 break;
             }

             if(x==NULL)
             {
                que.push(NULL);
             }else
             {
                 ans=x->val;
             

             

             

             if(x->right)
             {
                 que.push(x->right);
             }



             if(x->left)
             {
                 que.push(x->left);
             }


             }
        }



        return ans;
    }
};