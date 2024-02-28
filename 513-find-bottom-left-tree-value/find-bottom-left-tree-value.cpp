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

   void func(TreeNode* root, int& maxlevel,int level,int& ans)
   {
        if(root==NULL) return ;

        if(maxlevel<level)
        {
            maxlevel=level;
            ans=root->val;

        }


        func(root->left,maxlevel,level+1,ans);
        func(root->right,maxlevel,level+1,ans);

    return ;
   }

   

    int findBottomLeftValue(TreeNode* root) {
        
        int maxlevel=-1;
        int level=0;
        int ans=0;
       
        func(root,maxlevel,level,ans);
        return ans;
    }
};