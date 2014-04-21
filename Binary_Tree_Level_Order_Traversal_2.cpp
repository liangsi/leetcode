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
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        stack<vector<TreeNode*> > s;
        vector<TreeNode*> level;
        vector<vector<int> > r;
        vector<int> lv;
        level.push_back(root);
        s.push(level);
        while(!level.empty()){
            level.clear();
            for(int i=0; i<s.top().size() ; i++){
                if(s.top()[i]){
                    level.push_back(s.top()[i]->left);
                    level.push_back(s.top()[i]->right);
                }
            }
            s.push(level);
        }
        while(!s.empty()){
            lv.clear();
            for(int i=0; i<s.top().size() ; i++){
                if(s.top()[i]){
                    lv.push_back(s.top()[i]->val);
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

