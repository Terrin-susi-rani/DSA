class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int s=nums.size();
        if (s==1) return nums[0];
        set<int>n;
        for(auto k:nums){
            n.insert(k);
        }
        int max=0;
        int val=0;
        for(auto k:n){
            int l=0;
            for(int i=0;i<s;i++){
                if(k==nums[i]){
                    l++;
                }
            }
            if (max<l){
                max=l;
                val=k;
            }
        }
        return val;
    }
};