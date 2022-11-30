#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sub,n,i,j;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Sum of subarrays:"<<endl;
    for(i=0;i<n;i++)
    {
        sub=0;
        for(j=i;j<n;j++)
        {
            sub+=a[j];
            cout<<sub<<endl;
        }
    }
}