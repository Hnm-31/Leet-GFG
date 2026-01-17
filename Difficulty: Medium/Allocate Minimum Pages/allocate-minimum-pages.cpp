class Solution {
  public:
  
    int countstudents(vector<int> &arr,int pages){
        int student=1;
        int holdpages =0;
        for(int i=0;i<arr.size();i++){
            if(holdpages + arr[i]<=pages){
                holdpages+=arr[i];
                
            }
            else{
                student ++;
                holdpages = arr[i];
            }
        }
        return student;
    }
    
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int ans =0;
        if(k>n) return -1;
        int low = *max_element(arr.begin(),arr.end());
        int high = accumulate(arr.begin(),arr.end(),0);
        while(low<=high){
            int mid =low + (high-low)/2;
            if(countstudents(arr,mid)<=k){
                 ans=mid;
                 high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
            
        
            
        
        return ans;
        
    }
};