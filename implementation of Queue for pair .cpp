#include<bits/stdc++.h>
#include"Queue.h"
using namespace std;

typedef pair<int,int >mypair;

int main()
{
    Queue<mypair> q;

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        char a;
        char b;
        cin>>a>>b;
        q.push(make_pair(a,b));
    }

    while(!q.empty())
    {
        mypair chk;
        chk=q.pop();
        cout<<chk.first<<"  "<<chk.second<<endl;
    }

    if(!q.empty())
    {
        mypair chk;
        chk=q.pop();
        cout<<chk.first<<"  "<<chk.second<<endl;
    }

    if(!q.empty())
    {
        mypair chk;
        chk=q.pop();
        cout<<chk.first<<"  "<<chk.second<<endl;
    }

    return 0;
}

