class Solution {
  public:
  
  bool canweplace(int dist, vector<int> &stalls,int k){
      int cows =1;
      int last=stalls[0];
      
      for(int i=1;i<stalls.size();i++){
          if(stalls[i]-last>=dist){
              cows ++;
              last = stalls[i];
              
          }
      }
      if(cows >=k) return true;
      return false;
  }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(),stalls.end());
        int ans =1;
        int n=stalls.size();
      int diff=stalls[n-1]-stalls[0];
        int low =1;
        int high=diff; 
       while(low<=high){
           int mid = low + (high-low)/2;
            if(canweplace(mid,stalls,k)==true){
                ans =mid;
                low =mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
        
        
    }
};