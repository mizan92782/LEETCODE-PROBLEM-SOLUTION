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
const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();



class Solution {
public:

    TreeNode* buildTree(vector<int>& nums, int s,int e)
    {
         if(s>e)
         {
             return NULL;
         }

         int mv=INT_MIN;
         int in=s;
         for(int i=s;i<=e;i++)
         {
             if(nums[i]>mv)
             {   
                 mv=nums[i];
                 in=i;
               
             }
         }
          
          cout<<"max : "<<nums[in]<<endl;

         TreeNode* root= new TreeNode(nums[in]);

         root->left=buildTree(nums,s,in-1);
         root->right=buildTree(nums,in+1,e);


         return root;
         
    }


    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {

        int n=nums.size();

      

        return buildTree(nums,0,n-1);
        
    }
};