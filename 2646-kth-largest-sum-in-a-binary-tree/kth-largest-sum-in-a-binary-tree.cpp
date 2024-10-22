class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(root == NULL) return -1;

        vector<long long> ans;  // Stores the sum of each level
        queue<TreeNode*> que;  // For level-order traversal
        que.push(root);

        while(!que.empty()) {
            int levelSize = que.size();  // Number of nodes at the current level
            long long sum = 0;

            for(int i = 0; i < levelSize; i++) {
                TreeNode* node = que.front();
                que.pop();

                sum += node->val;  // Add current node's value to the sum
                
                // Push the children to the queue
                if(node->left) que.push(node->left);
                if(node->right) que.push(node->right);
            }

            ans.push_back(sum);  // Store the sum of the current level
        }

        if(ans.size() < k) return -1;  // Not enough levels

        // Sort the sums in descending order
        sort(ans.begin(), ans.end(), greater<long long>());

        return ans[k-1];  // Return the k-th largest sum
    }
};
