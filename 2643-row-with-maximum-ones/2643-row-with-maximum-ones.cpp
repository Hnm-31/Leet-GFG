class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int maxi=0;
        ans.push_back(0);
                ans.push_back(maxi);

        for(int i=0;i<mat.size();i++){
            int cnt=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]== 1) cnt ++;
            }
            if(maxi<cnt) {
                ans.pop_back();
                ans.pop_back();
                ans.push_back(i);
                ans.push_back(cnt);
                maxi=cnt;
           
            }



        }
        return ans;
    }
};