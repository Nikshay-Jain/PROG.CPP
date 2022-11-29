#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=1,b=0,c=0,i=1,n;
    cout<<"Enter no of terms"<<endl;
    cin>>n;
    cout<<"Virahanka Sequence: "<<endl<<b<<endl<<a<<endl;
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        b=a;
        a=c;
        cout<<c<<endl;
    }
    return 0;
}