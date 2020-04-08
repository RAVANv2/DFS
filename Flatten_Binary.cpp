class Solution {
public:
    void flatten(TreeNode* root) {
      if(root==NULL)
        return;

      TreeNode *temp= new TreeNode(root->val);
      temp->right = flatten(root->left);
      temp->right = flatten(root->right);
    }
};
