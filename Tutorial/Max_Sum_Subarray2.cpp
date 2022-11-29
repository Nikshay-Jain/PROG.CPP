//Kadane's Algorithm

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,presum=0,max_sum=INT_MIN;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter array"<<endl;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        presum+=a[i];
        if(presum<0)
        {
            presum=0;
        }
        max_sum=max(max_sum,presum);
    }
    cout<<max_sum<<endl;
}