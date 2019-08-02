class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>table; 
        
        int temp=0;int len=nums.size();
        for(int i=0;i<len;i++){
            table[nums[i]]++;
            temp=table[nums[i]];
            if(temp>(len)/2)
                return nums[i];
                
        }
        

        return 0;
    }
};