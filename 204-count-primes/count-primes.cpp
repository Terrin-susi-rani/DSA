class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<bool>num(n,true);
        vector<int>isPrime;
        num[0]=num[1]=false;
        for(int i=2;i*i<n;++i){
            for(int j=i*i;j<n;j+=i){
                    num[j]=false;
            }
        }

        for(int i=0;i<n;i++){
            if(num[i]){
                isPrime.push_back(i);
            }
        }

        return isPrime.size();
    }
};