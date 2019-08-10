class Solution {
public:
    string addBinary(string a, string b) {
        string temp,ans="";
        if(a.length()<=b.length()){
            temp=a;;
            a=b;
            b=temp;
        }
        
        //a long b short
        int j=b.length()-1;
        char bj;
        for(int i=a.length()-1;i>=0;i--){
            if(j>=0)
                bj=b[j];
            else
                bj='0';
            int num=(a[i]-'0')+(bj-'0');
            if(num>=2){
                ans=char((num%2)+'0')+ans;
                if(i-1>=0){
                    a[i-1]+=(num/2);
                }
                else{
                    ans=char(num/2+'0')+ans;
                }
            }
            else{
                ans=char(num+'0')+ans;
            }
            j--;
        }
        
        return ans;
        
        
        
        
    }
};