/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isMirror(TreeNode *left, TreeNode *right) {
        if(!left&&!right){
            return true;
        }
        else if(!left||!right){
            return false;
        }
        else{
            if(left->val==right->val){
                return isMirror(left->left,right->right)&&isMirror(right->left,left->right);
            }
            else{
                return false;
            }
        }
    }
    bool isSymmetric(TreeNode *root) {
        if(root == NULL){
            return true;
        }
        else{
            return isMirror(root->left, root->right);
        }
    }
};