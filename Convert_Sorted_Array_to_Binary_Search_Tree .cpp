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
    TreeNode *buildBST(vector<int> &num, int l, int h){
        if(l==h){
            return NULL;
        }
        TreeNode * root = new TreeNode(num[(l+h)/2]);
        root->left = buildBST(num,l,(l+h)/2);
        root->right = buildBST(num,(l+h)/2+1,h);
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &num) {
        return buildBST(num, 0, num.size());
    }
};