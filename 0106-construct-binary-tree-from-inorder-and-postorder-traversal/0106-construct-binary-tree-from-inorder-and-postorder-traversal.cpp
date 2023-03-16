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
    TreeNode* Tree(vector<int> &inorder,int strin,int endin,vector<int>&po,int strpo,int endpo){
        if(strin>endin || strpo>endpo)return nullptr;
        TreeNode *root=new TreeNode(po[endpo]);
        int SI=strin;
        while(root->val !=inorder[SI])SI++;
        root->left=Tree(inorder,strin,SI-1,po,strpo,strpo+SI-strin-1);
        root->right=Tree(inorder,SI+1,endin,po,strpo+SI-strin,endpo-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return Tree(inorder,0,inorder.size(),postorder,0,postorder.size()-1);
    }
};