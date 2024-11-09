link: https://www.geeksforgeeks.org/problems/gcd-of-array0614/1

code:

class Solution
{
	public:
    int gcd(int N, int arr[])
    {
    	int min1=0;
    	int max1=0;
    	for(int i=0;i<N-1;i++)
    	{
    	    min1=min(arr[i],arr[i+1]);
    	    max1=max(arr[i],arr[i+1]);
    	    while(min1%max1!=0)
    	    {
    	        int temp=max1;
    	        max1=min1%max1;
    	        min1=temp;
    	    }
    	    arr[i + 1]=max1;
    	}
    	return arr[N-1];
    }
};
