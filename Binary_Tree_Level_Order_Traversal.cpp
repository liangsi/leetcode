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
    vector<vector<int> > levelOrder(TreeNode *root) {
        queue<vector<TreeNode*> > s;
        vector<TreeNode*> level;
        vector<vector<int> > r;
        vector<int> lv;
        level.push_back(root);
        s.push(level);
        while(!level.empty()){
            level.clear();
            for(int i=0; i<s.back().size() ; i++){
                if(s.back()[i]){
                    level.push_back(s.back()[i]->left);
                    level.push_back(s.back()[i]->right);
                }
            }
            s.push(level);
        }
        while(!s.empty()){
            lv.clear();
            for(int i=0; i<s.front().size() ; i++){
                if(s.front()[i]){
                    lv.push_back(s.front()[i]->val);
                }
            }
            if(!lv.empty()){
                r.push_back(lv);
            }
            s.pop();
        }
        return r;
    }
};