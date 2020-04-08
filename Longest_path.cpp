class Solution {
 public:
     int ans;
     int longestUnivaluePath(TreeNode* root) {
      fun(root);
      return ans;
     }

     void fun(TreeNode *root)
     {
       if(!root) return 0;
       int left = fun(root->left);
       int right = fun(root->right);
       int leftans=0,rightans=0;

       if(root->left!=NULL && root->val==root->left->val)
          leftans = left+1;
       if(root->right!=NULL && root->val==root->right->val)
          rightans = right+1;

       ans = max(ans,leftans+rightans);

       return max(leftans,rightans);
     }
 };
