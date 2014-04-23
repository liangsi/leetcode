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
    int minDepth(TreeNode *root) {
        if(root==NULL){
            return 0;
        }
        queue<vector<TreeNode*> > q;
        vector<TreeNode*> lv;
        lv.push_back(root);
        q.push(lv);
        while(true){
            lv.clear();
            for(int i=0;i<q.back().size();i++){
                if(q.back()[i]->left==NULL&&q.back()[i]->right==NULL){
                    return q.size();
                }
                if(q.back()[i]->left){
                    lv.push_back(q.back()[i]->left);
                }
                if(q.back()[i]->right){
                    lv.push_back(q.back()[i]->right);
                }
            }
            q.push(lv);
        }
    }
};