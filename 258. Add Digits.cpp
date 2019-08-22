class Solution {
public:
    int addDigits(int num) {
        int next;
        while(num>=10){
            next=0;
            for(int i=num;i!=0;i/=10){
                next+=i%10;
            }
            num=next;
        }
        return num;
    }
};