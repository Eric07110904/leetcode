class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
            return true;
        if(n==0||n<0)
            return false;
        for(int i=n;i!=1;i/=2){
            if(i%2==1){
                return false;
            }
        }
        return true;
    }
};