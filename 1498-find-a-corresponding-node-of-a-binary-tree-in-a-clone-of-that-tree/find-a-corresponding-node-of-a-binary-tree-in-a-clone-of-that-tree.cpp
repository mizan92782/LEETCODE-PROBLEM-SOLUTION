/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    
    


    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        queue<TreeNode*>que;

         que.push(cloned);

         while(!que.empty())
         {


             if(que.front()->val==target->val)
             {
                 return que.front();
             }


             if(que.front()->right!=NULL)
             {
                 que.push(que.front()->right);
             }


             if(que.front()->left!=NULL)
             {
                 que.push(que.front()->left);
             }


             que.pop();

             
         }


         return NULL;

    }



};