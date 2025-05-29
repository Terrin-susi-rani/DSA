class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<bool>num(n,true);
        int count=0;
        num[0]=num[1]=false;
        for(int i=2;i<n;++i){
            if(num[i]){
                count+=1;
            }
            for(int j=i*2;j<n;j+=i){
                    num[j]=false;
            }
        }

        return count;
    }
};