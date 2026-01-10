#include <queue>
#include<bits/stdc++.h>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if(root ==nullptr){
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);

        int maxsum=INT_MIN;
        int maxlevel=1;
        int level =1;
        while(!q.empty()){
            int levelsum=0;
            int levelsize=q.size();
            for(int i=0;i<levelsize;i++){
                TreeNode * node = q.front();
                q.pop();
                levelsum += node->val;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            if(levelsum>maxsum){
                maxsum = levelsum;
                maxlevel=level;
            }
            level ++;

        }

        return maxlevel;
    }
};