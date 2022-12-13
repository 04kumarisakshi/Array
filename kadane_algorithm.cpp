#include<bits/stdc++.h>
using namespace std;
 int maxSubArray(vector<int>& nums) {
     int maxterm =nums[0], sum =0;
    for(int i=0;i<nums.size();i++)
    {
        sum = sum+nums[i];
        maxterm =max(maxterm,sum);
        if(sum<0)
        
            sum=0;
    }
        return maxterm;
        
    }
    
    

int main()
{
     
    vector<int> a = {1, 3, 8, -2, 6, -8, 5};
    cout << maxSubArray(a) << endl;
    return 0;
}
