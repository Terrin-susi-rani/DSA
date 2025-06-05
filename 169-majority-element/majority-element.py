class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        s=[]
        max=0
        val=0
        for i in nums:
            if( i not in s):
                k=nums.count(i)
                if(k>max):
                    max=k 
                    val=i
                s.append(i)
        return val





