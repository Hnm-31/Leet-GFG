class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int>st;
        for(int i=0;i<a.size();i++){
            st.insert(a[i]);
        } 
        for(int i=0;i<b.size();i++){
            st.insert(b[i]);
        }
        vector<int> v(st.begin(),st.end());
        return v;
        
    }
};