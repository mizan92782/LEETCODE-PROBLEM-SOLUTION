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

    void ReverseInorder(TreeNode* root, int& sum)
    {
         if(root== NULL) return ;

         ReverseInorder(root->right,sum);

         root->val=root->val+sum;
         sum=root->val;

          ReverseInorder(root->left,sum);
    }
public:
    TreeNode* bstToGst(TreeNode* root) {


        ios_base::sync_with_stdio(false), 
        cin.tie(NULL);

        
        
          int sum=0;
         ReverseInorder(root,sum);

        return root;
    }
};