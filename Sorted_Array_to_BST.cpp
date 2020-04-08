class Solution {
public:

  TreeNode* buildTree(vector<int> nums,int start,int end)
  {
    if(start>end)
      return NULL;

    int mid = (start+end)/2;
    TreeNode *temp = new TreeNode(nums[mid]);
    temp->left = buildTree(nums,start,mid-1);
    temp->right = buildTree(nums,mid+1,end);

    return temp;
  }

    TreeNode* sortedListToBST(ListNode* head) {

      vector<int> nums;
      ListNode *p=head;
      while(p!=NULL)
      {
        nums.push_back(p->val);
        p=p->next;
      }

      int left = 0;
      int right = nums.size()-1;

      if(nums.empty())
        return NULL;
      return buildTree(nums,left,right);
    }
};
