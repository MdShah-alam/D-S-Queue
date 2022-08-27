#include<bits/stdc++.h>
#include"Queue.h"
using namespace std;

int main()
{
    Queue<int>q;
    stack<int>st;

    int n,k;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        q.push(a);
    }

    int i=0;
    while(!q.empty() && i<k)
    {
        int a=q.Front();
        q.pop();
        st.push(a);
        i++;
    }

    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    for (int i = 0; i < n- k; i++)
    {
        q.push(q.Front());
        q.pop();
    }

    while(!q.empty())
    {
        cout<<q.Front()<<"  ";
        q.pop();
    }
    cout<<endl<<endl;
    return 0;
}

