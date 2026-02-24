class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int maxlen =0;
        int prefixsum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            prefixsum+=arr[i];
            if(prefixsum==k) maxlen =i+1;
            if(mp.find(prefixsum-k) !=mp.end()){
                maxlen=max(maxlen,i-mp[prefixsum-k]);
            }
            if(mp.find(prefixsum)==mp.end())
            mp[prefixsum]=i;
        }
        return maxlen;
        
    }
};