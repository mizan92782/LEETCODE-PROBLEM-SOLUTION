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
    bool isEvenOddTree(TreeNode* root) {


        ios_base::sync_with_stdio(false);
         cin.tie(nullptr);
        cout.tie(nullptr);

        bool check=true;

        queue<TreeNode*>que;
        que.push(root);
        que.push(NULL);

        bool result=true;
        int minn=INT_MIN;
        int maxx=INT_MAX;


        while(que.size()>1)
        {
            TreeNode* temp=que.front();
            que.pop();

            if(temp==NULL)
            {
                que.push(NULL);
                check=!check;

                minn=INT_MIN;
                maxx=INT_MAX;
            }else
            {
                if(check==true )
                {
                     if(temp->val>minn && temp->val%2==1)
                     {
                         minn=temp->val;
                     }else
                     {
                         return false;
                     }
                     

                }else
                {


                     if(temp->val<maxx  && temp->val%2==0)
                     {
                         maxx=temp->val;
                     }else
                     {
                         return false;
                     }


                }


                if(temp->left) que.push(temp->left);
                if(temp->right) que.push(temp->right);

                
            }
        }



        return true;

        
        
    }
};