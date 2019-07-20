class Solution {
public:
    bool isPalindrome(int x) {
        int sum=0;int c=0;
        if(x<0)
            return false;
        for(int i=x;i!=0;i/=10){
            if (sum> INT_MAX/10 || sum < INT_MIN/10)
                return false; 
            sum=i%10+10*sum;
        }
        return x==sum;
        
    }
};