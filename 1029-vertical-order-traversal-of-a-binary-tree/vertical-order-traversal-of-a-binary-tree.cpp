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
    void solve(TreeNode* root,int x,int y,map<int,map<int,vector<int>>> &map){
        if(root==nullptr){
            return ;
        }
        map[y][x].push_back(root->val);
        solve(root->left,x+1,y-1,map);
        solve(root->right,x+1,y+1,map);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int>>> map;

        solve(root,0,0,map);
        int n=map.size();
        vector<vector<int>> res(n);
        int index=0;
        for(auto i:map){
            vector<int> r;
            for(auto j:i.second){
                sort(j.second.begin(),j.second.end());
                for(int k:j.second){
                    r.push_back(k);
                }
            }
            res[index++]=r;
        }

        return res;
    }
};