class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int total=m+n-1;//代表陣列的最後一個index;
        m-=1;n-=1;//到每個陣列的最後一個元素
        while(n>=0){//把nums2 的 n個元素通通插入
            if(m<0||nums2[n]>=nums1[m]){//兩個陣列最大的來比較 m<0代表是最小的
                nums1[total]=nums2[n];
                total-=1;n-=1;
            }
            else{
                nums1[total]=nums1[m];
                m-=1;total-=1;
            }
        }
    }
};