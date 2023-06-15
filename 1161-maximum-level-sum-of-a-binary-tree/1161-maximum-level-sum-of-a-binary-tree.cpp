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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL) return 0;
      int m=INT_MIN;
     int f=0,i=0;
      queue<TreeNode*>q;
      q.push(root);
      while(!q.empty()){
          int n=q.size();
          int s=0;
          for(int i=0;i<n;i++){
              TreeNode*tmp=q.front();
              q.pop();
              s+=tmp->val;
              if(tmp->left!=NULL)
                  q.push(tmp->left);
              if(tmp->right!=NULL)
                  q.push(tmp->right);
          }
          i++;
          if(m<s){
             m=s;
              f=i;
          }
      }
        return f;
    }
};