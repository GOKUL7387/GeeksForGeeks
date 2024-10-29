link: https://www.geeksforgeeks.org/problems/product-of-prime-factors5121/1?page=2&category=Prime%20Number&sortBy=submissions

code:

class Solution{
public: 
    long long int primeProduct(int n){
        //code here
        long long int a=1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                a=a*i;
                while(n%i==0) 
                {
                    n/=i;
                }
            }
        }
        if(n>1)
        {
            a=a*n;
        }
        return a;
    }
};
