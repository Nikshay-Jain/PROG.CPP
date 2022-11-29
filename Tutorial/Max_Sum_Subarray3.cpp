/*Circular Subarray
Max subarray sum = tot sum - sum of non-contributing elements*/

#include<bits/stdc++.h>
using namespace std;
int kadane(int a[],int n)
{
    int i,presum=0,max_sum=INT_MIN;
    for(i=0;i<n;i++)
    {
        presum+=a[i];
        if(presum<0)
            presum=0;
        max_sum=max(max_sum,presum);
    }
    return max_sum;
}
int main()
{
    int i,n,wrapsum=0,totsum=0;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter array"<<endl;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        totsum+=a[i];
    }
    int nonwrapsum=kadane(a,n);
    for(i=0;i<n;i++)
        a[i]=-a[i];
    wrapsum=totsum - (-kadane(a,n));
    cout<<max(wrapsum,nonwrapsum);
}