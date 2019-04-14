class Solution {
public:
    int countPrimes(int n) {
        if(n<3)
            return 0;
        int res[n]={1};
        res[1]=1;
        for(int i=2;i<sqrt(n)+1;i++){
           if(res[i]==0){
               for(int j=2*i;j<n;j=j+i)
                   res[j]=1;
           } 
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(res[i]==0)
                sum+=1;
        }
        return sum;
    }
};
