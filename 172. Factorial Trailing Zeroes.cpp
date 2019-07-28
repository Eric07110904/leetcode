class Solution {
public:
    int trailingZeroes(int n) {
        int sum=0;
        while(n/5>0){
            sum+=n/5;
            n/=5;
        }
        return sum;
    }
    //25! 5的數量:25/5=5(5 10 15 20 25) 但是25=5*5 所以應該會多1 n/=5
    //離散有交到
};