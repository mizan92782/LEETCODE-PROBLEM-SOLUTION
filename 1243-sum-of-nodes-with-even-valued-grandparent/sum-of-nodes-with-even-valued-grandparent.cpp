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

int sumEvenGrandparent(TreeNode* root) {
    if (root == NULL) {
        return 0; // Base case: reached end of branch
    }

    int sum = 0;

    // Check if current node's value is even
    if (root->val % 2 == 0) {
        // Check if grandchild nodes exist and add their values to sum
        if (root->left != NULL) {
            if (root->left->left != NULL) {
                sum += root->left->left->val;
            }
            if (root->left->right != NULL) {
                sum += root->left->right->val;
            }
        }
        if (root->right != NULL) {
            if (root->right->left != NULL) {
                sum += root->right->left->val;
            }
            if (root->right->right != NULL) {
                sum += root->right->right->val;
            }
        }
    }

    // Recursively traverse left and right subtrees
    sum += sumEvenGrandparent(root->left);
    sum += sumEvenGrandparent(root->right);

    return sum;
}

   
};