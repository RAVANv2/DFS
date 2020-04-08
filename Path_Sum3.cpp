class Solution {
public:
    int pathSum(TreeNode* root, int sum) {
      int count=0;
        if(root)
        {
          DFS(root->left,sum);
          DFS(root->right,sum);
        }
        return count;
    }
    void DFS(TreeNode *root,int sum)
    {
      if(!root)
        return;
      if(root->val==sum)
        count++;
      DFS(root->left,sum->root->val);
      DFS(root->right,sum-root->val);

    }


};
