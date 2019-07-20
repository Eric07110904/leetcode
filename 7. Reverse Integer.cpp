class Solution {
public:
    int reverse(int x) {
        //code 1
        /*
        long long int sum=0;
        for(int i=x;i!=0;i/=10){
            sum*=10;
            sum+=i%10;
        }
        if(int(sum)!=sum){
            return 0;
        }
        else
            return int(sum);
        //code 2 
        */
        int sum=0;

        for(int i=x;i!=0;i/=10){
            //2147483647為最大上限 如果現為214748364 -> 214748364*10 + i%10 如果i%10 >7 就變成2147483648 > 2147438647 (overf)
            if(sum>INT_MAX/10||sum==INT_MAX/10&&i%10>7)//如果大於的話 下面sum*10 就會overflow了
                return 0;
            if(sum<INT_MIN/10||sum==INT_MIN/10&&i%10<-8)
                return 0;
            sum*=10;
            sum+=i%10;
        }
        
        return sum;
        
    }
};