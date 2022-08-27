#include<bits/stdc++.h>
using namespace std;

void _push(stack<int>&st,int ar[],int n)
{
    st.push(ar[0]);
    int a=ar[0];

    for(int i=1;i<n;i++)
    {
        a=min(a,ar[i]);
        st.push(a);
    }
}

void print(stack<int>&st)
{
    while(!st.empty())
    {
        cout<<st.top()<<"  ";
        st.pop();
    }
}

int main()
{
    int n;
    cin>>n;

    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    stack<int>st;
    _push(st,ar,n);
    print(st);
}
