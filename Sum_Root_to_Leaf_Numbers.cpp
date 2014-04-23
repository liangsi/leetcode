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

    int sumNumbers_(TreeNode *root, int sum){
        if(root==NULL){
            return sum;
        }
        int result=0;
        if(root->left){
            result += sumNumbers_(root->left,sum*10+root->val);
        }
        if(root->right){
            result += sumNumbers_(root->right,sum*10+root->val);
        }
        if(root->left==NULL&&root->right==NULL){
            result += (sum*10+root->val);
        }
        return result;
    }
    int sumNumbers(TreeNode *root) {
        return sumNumbers_(root,0);
    }
};