#include<bits/stdc++.h>
using namespace std;

void reverse_queue(queue<int>&q)
{
    if(q.empty())
        return ;

    int data=q.front();
    q.pop();

    reverse_queue(q);

    q.push(data);
}

int main()
{
    queue<int>q;
    stack<int>st;

    for(int i=0; i<=5; i++)
    {
        q.push(i+1);
    }

    reverse_queue(q);

    while(!q.empty())
    {
        cout<<q.front()<<"  ";
        q.pop();
    }

    cout<<endl<<endl;
    return 0;
}
