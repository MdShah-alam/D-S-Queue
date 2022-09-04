#include<bits/stdc++.h>
using namespace std;

void firnd(long int ar[], long int n, long int s)
{
    long int sum=0,start=0;
    for(int i=0;i<n;i++)
    {
        sum+=ar[i];
        while(sum>s)
        {
            sum=sum-ar[start];
            start++;
        }
        if(sum==s)
        {
            cout<<start+1<<"  "<<i+1<<endl;
            return ;
        }
    }
}

int main()
{
    long int n,s;
    cin>>n>>s;
    long int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    firnd(ar, n,s);
}
