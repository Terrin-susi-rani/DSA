class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> arr;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(find(arr.begin(),arr.end(),nums[i])==arr.end() ){
                int c=0;
                for(int j=0;j<n;j++){
                    if(nums[i]==nums[j]){
                        c++;
                    }
                }
                if(c>(n/3)){
                    arr.push_back(nums[i]);
                }
            }
        }
        return arr;
    }
};