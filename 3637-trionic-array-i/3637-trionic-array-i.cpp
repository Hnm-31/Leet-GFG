class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        if(nums.size()==3) return false;
        int p=0;
        while(p<nums.size()-1){
            if(nums[p+1]>nums[p]) p++;
            else break;
        }
        if(p==0 || p>=nums.size()-2) return false;
        int q=p;
        while(q<nums.size()-1){
            if(nums[q+1]<nums[q]) q++;
            else break;
        }
        if(p==q) return false;
        cout<<q;
        for(int i=q;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]) return false;
        }
        if(q>=nums.size()-1) return false;

    return true;

    }
};