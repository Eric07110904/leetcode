class Solution {
public:
    int countPrimes(int n) {
        bool* isprime=new bool[n+5]{};
        int count=0;
        
        //在每一次for裡面建立prime table
        for(int i=2;i<n;i++){
            if(isprime[i]==true){//不是prime 就直接continue了
                continue;
            }
            count++;
            for(int j=i+i;j<n;j+=i){
                isprime[j]=true;
            }
        }
        
        
        return count;
    }
};