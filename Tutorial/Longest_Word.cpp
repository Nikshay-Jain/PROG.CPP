#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000000];
    cout<<"Enter sentence"<<endl;
    cin.getline(ch,1000000);
    int end=0,i=0,c,maxlen=0;
    while(ch[i]!='\0')
    {
        if(ch[i]==' ')
        {
            if(maxlen<c)
            {
                maxlen=max(maxlen,c);
                end=i+1;
            }
            c=0;
        }
        else
            c++;
        i++;
    }
    cout<<maxlen<<endl;
    for(i=end-maxlen-1;i<end;i++)
        cout<<ch[i];
}