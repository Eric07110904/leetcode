class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=nums[0],sum=0;
        for(int i=0;i<nums.size();i++){
            
            sum+=nums[i];
            //cout<<sum<<endl;
            if(sum>max_sum)
                max_sum=sum;
            if(sum<0)// important step!
                sum=0;
        }
        return max_sum;
    }
    
    
};