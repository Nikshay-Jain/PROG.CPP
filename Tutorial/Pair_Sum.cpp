#include<bits/stdc++.h>
using namespace std;
bool pairsum(int a[],int n,int k)
{
    int low=0,high=n-1;
    while(low<high)
    {
        if(a[low]+a[high]==k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(a[low]+a[high]>k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}
int main()
{
    int i,n,k;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter array"<<endl;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter sum to be searched"<<endl;
    cin>>k;
    cout<<pairsum(a,n,k);
}