class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0){
            return;
        }
        k=k%n;
         vector<int> first(nums.begin(), nums.end() - k);
        vector<int> second(nums.end() - k, nums.end());
        second.insert(second.end(),first.begin(),first.end());
        nums=second;
    }
};