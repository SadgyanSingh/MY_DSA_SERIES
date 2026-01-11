class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL){
            return ans;  // Return empty vector
        }
        ans.push_back(root->val);  // Push the value, not the pointer
        
        // Get results from left subtree and merge
        vector<int> left = preorderTraversal(root->left);
        ans.insert(ans.end(), left.begin(), left.end());
        
        // Get results from right subtree and merge
        vector<int> right = preorderTraversal(root->right);
        ans.insert(ans.end(), right.begin(), right.end());
        
        return ans;
    }
};