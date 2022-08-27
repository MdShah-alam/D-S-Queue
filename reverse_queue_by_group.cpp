#include<bits/stdc++.h>
#include"Queue.h"
using namespace std;

void reverse_a_queue(Queue<int>&q,int k,int n)
{
    stack<int>st;

    if(q.empty())
        return ;

    int x=n/k;
    int y=n%k;

    for(int j=0; j<x; j++)
    {
        int i=0;
        while(!q.empty() && i<k)
        {
            st.push(q.Front());
            q.pop();
            i++;
        }

        while(!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
    }
    int i=0;
    while(!q.empty() && i<y)
    {
        st.push(q.Front());
        q.pop();
        i++;
    }

    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    Queue<int>q;

    for(int i=0; i<n; i++)
    {
        q.push(i+1);
    }
    reverse_a_queue(q,k,n);

    while(!q.empty())
    {
        cout<<q.Front()<<"  ";
        q.pop();
    }

    cout<<endl<<endl;
    return 0;
}
