#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        int lf =0;
        int rt=0;
        int curr_sum=0;
        bool flag= true;
        for(int i =0;i<n;i++)
        {  
            rt=i;
            curr_sum+=arr[i];
            
            while(curr_sum>s)
            {
                curr_sum= curr_sum-arr[lf];
                lf++;
            }
            if(curr_sum==s)
            {
                flag = false;
                break;
            }
        }
        vector<int> result(1,-1);
        if(flag)
        {
            return result;
        }
        vector<int> ans;
        ans.push_back(lf+1);
        ans.push_back(rt+1);
        return ans;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends