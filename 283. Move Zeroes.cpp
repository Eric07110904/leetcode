class Solution {
public:
    void moveZeroes(vector<int>& nums) {//也可以用vector erase
        int flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[flag]=nums[i];
                flag++;
            }
        }
        for(int i=flag;i<nums.size();i++){
            nums[i]=0;
        }
        
    }
};