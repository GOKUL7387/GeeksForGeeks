link: https://www.geeksforgeeks.org/problems/nearly-sorted-1587115620/1

code:

class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k)
    {
        priority_queue<int>pq;
        int i=0,j=0;
        while(j < arr.size())
        {
            pq.push(-1*arr[j]);
            if(pq.size() < k+1)
            {
                j++;
            }
            else
            {
                arr[i] = -1*pq.top();
                pq.pop();
                i++;
                j++;
            }
        }
        while(!pq.empty())
        {
            arr[i++] = -1 * pq.top();
            pq.pop();
        }
    }
};
