class Solution {
public:

  int getheight(TreeNode *root,bool &result)
  {
    if(!root || !result)
      return -1;
    int left = getheight(root->left,result);
    int right = getheight(root->right,result);
    if(abs(left-right)>1)
      result=false;
    return max(left,right)+1;
  }

    bool isBalanced(TreeNode* root) {
      bool result = true;
      getheight(root,result);
      return result;
    }
  };
