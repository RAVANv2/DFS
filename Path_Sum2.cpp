class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        vector<int> path;
        if(root==NULL)
          return res;
        DFS(root,res,path,0,sum);
    }

    void DFS(TreeNode* root,vector<vector<int>> &res,vector<int> path,int sum,int target)
    {
      if(root==NULL)
        return;

      sum+=root->val;
      path.push_back(root->val);

      if(sum==target && (root->left==NULL && root->right==NULL))
        res.push_back(path);

      DFS(root->left,res,path,sum,target);
      DFS(root->right,res,path,sum,target);
    }
};
