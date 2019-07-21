class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       //nums.erase(nums.begin(),nums.begin()+1);
        int j,count,len;
        if(nums.size()==0)
            return 0;
        for(int i=0;i<nums.size()-1;i++){
            j=i;count=0;len=nums.size();
            while((nums[j]==nums[j+1])){
                count++;
                j++;
             
                if(j>=len-1)
                    break;
            }

            if(count!=0){
                nums.erase(nums.begin()+i,nums.begin()+count+i);
                i=0;
            }
        }
        return nums.size();
    }
};
/* best version
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=nums.size();
        if(len==0)
            return 0;
        int temp=nums[0];
        for(int i=1;i<len;){
            if(temp==nums[i]){
                nums.erase(nums.begin()+i,nums.begin()+i+1);
                len--;
            }
            else{
                temp=nums[i];
                i++;
            }
        }
        return nums.size();
    }
};
*/