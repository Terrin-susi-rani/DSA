class Solution {
public:
    int reverse(int x) {
        int k=0;
        while(x!=0){
            int d=x%10;
            if(k>INT_MAX/10 || k< INT_MIN/10){return 0;}
    
            k=(k*10)+d;
            x=x/10;
        }
        return k;
    }
};