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


    int x(TreeNode* node)
    {
        if (node == NULL)
        return 0;
    else {
        /* compute the depth of each subtree */
        int lDepth = x(node->left);
        int rDepth = x(node->right);
 
        /* use the larger one */
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
    }
    bool isBalanced(TreeNode* root) {

        if(root==NULL)
        {
            return true;
        }


        int l=x(root->left);
         int r=x(root->right);

        if(abs(l-r)>1)
        {
            return false;
        }
        

        return  isBalanced(root->left) &&  isBalanced(root->right);
    }
};