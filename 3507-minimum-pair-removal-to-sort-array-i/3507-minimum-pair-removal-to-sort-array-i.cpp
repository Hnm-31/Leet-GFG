class Solution {
public:
bool issorted(vector<int> &arr){
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]) return false;
    }
    return true;
}

    int minimumPairRemoval(vector<int>& nums) {
        int cnt=0;
       
       while(!issorted(nums)){
        int minsum= INT_MAX , idx=0;
        for(int i=0;i+1<nums.size();i++){
            if(nums[i]+nums[i+1]<minsum){
                minsum=nums[i]+nums[i+1];
                idx=i;
            }
        }
        nums[idx]=minsum;
        nums.erase(nums.begin()+idx+1);
        cnt++;
       }
return cnt;
    }
};