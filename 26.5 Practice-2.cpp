#include<bits/stdc++.h>
#include"Queue.h"
using namespace std;

int main()
{
    Queue<int>q;
    Queue<int>s;

    int n;
    cin>>n;
    int maxi=0;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        maxi=max(a,maxi);
        q.push(a);
    }

    int k;
    cin>>k;

    for(int i=0;i<k;i++)
    {
        int a;
        cin>>a;
        s.push(a);
    }

    int ar[maxi+1]{0};
    int h[n];
    int i=0;

    while(!q.empty())
    {
        int a=q.Front();
        q.pop();
        ar[a]++;
        h[i]=a;
        i++;
    }

    while(!s.empty())
    {
        bool found=true;
        int a=s.Front();

        for(int i=0;i<n;i++)
        {
            if(a==h[i])
            {
                cout<<ar[a]<<"  ";
                found=false;
                break;
            }
        }
        s.pop();
        if(found)
            cout<<"-1  ";
    }

    cout<<endl;
    return 0;
}
