#include<bits/stdc++.h>
#include"Queue.h"
using namespace std;

int main()
{
    Queue<int> q;

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        q.push(a);
    }

//    while(!q.empty())
//    {
//        cout<<q.pop()<<endl;
//    }

    if(!q.empty())
        cout<<q.Front()<<endl;

    if(!q.empty())
        cout<<q.Back()<<endl;
}
