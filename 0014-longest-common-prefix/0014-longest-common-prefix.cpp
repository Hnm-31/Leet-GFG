class Solution {
public:


 // shrihari code 
//    string common="";
//         int minSize = INT_MAX;
//         string temp = ""; 
//         for(auto& s : strs) {
//             if(minSize > s.size()) {
//                 minSize = min(minSize, (int)s.size());
//                 temp = s;
//             } 
//         }
//         int ans = 0;
//         bool flag = true;
//         for(int i = 0; i < minSize; i++) {
//             char ch = temp[i];

//             for(auto& it : strs) {
//                 if(it[i] != ch) {
//                     flag = false;
//                     break;  
//                 }
//             }
//             if(!flag) break;
//             ans++;
//         }
//         string finalAns = "";
//         for(int i = 0; i < ans; i++) {
//             finalAns += temp[i];
//         }
//         return finalAns;
    string longestCommonPrefix(vector<string>& strs) {
        int mini =INT_MAX;
        string common="";
        for(int i=0;i<strs.size();i++){
            if(strs[i].size()<mini){
                mini=strs[i].size();
                common=strs[i];
            }
        }
        int i=0;
        int flag =0;
        for(i;i<mini;i++){
            for(auto curr: strs){
                if(curr[i]!=common[i]){
                    flag = 1;
                    break;
                } 
                
            }
            if(flag==1) break;

        }
        cout<<i;
        string ans="";
        for(int k=0;k<i;k++){
            ans += common[k];
        }
        return ans;

      
    }
};