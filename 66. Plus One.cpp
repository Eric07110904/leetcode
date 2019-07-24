class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len=digits.size();
        digits[len-1]+=1;
        for(int i=len-1;i>=0;i--){
            if(digits[i]/10>0){
                digits[i]%=10;
                if(i-1>=0)
                    digits[i-1]+=1;
                else
                    digits.insert(digits.begin(),1);
            }
            else
                break;
        }
        return digits;
    }
};