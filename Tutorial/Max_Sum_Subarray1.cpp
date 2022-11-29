#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,sum;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter array"<<endl;
    int a[n],s[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int presum[n+1];
    presum[0]=0;
    for(i=1;i<n+1;i++)
    {
        presum[i]=presum[i-1]+a[i-1];
    }
    int max_sum=INT_MIN;
    for(i=0;i<n+1;i++)
    {
        sum=0;
        for(j=0;j<i;j++)
        {
            sum=presum[i]-presum[j];
            max_sum=max(sum,max_sum);
        }
    }
    cout<<max_sum;
}