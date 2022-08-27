#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node
{
public:
    T val;
    Node *next;

    Node(T v)
    {
        val=v;
        next=NULL;
    }
};

template<typename ST>
class Queue
{
public:
    Node<ST> *front;
     Node<ST> *rear;

    Queue()
    {
        front=NULL;
        rear=NULL;
    }

    //enqueue...>push()
    void push(ST val)
    {
         Node<ST> *newNode=new Node<ST>(val);

        if(front==NULL && rear==NULL)
        {
            front=newNode;
            rear=newNode;
            return ;
        }

        rear->next=newNode;
        rear=rear->next;
    }

    //dequeue--->pop
    ST pop()
    {
        ST chk;

        if(rear==NULL)
        {
            cout<<"Queue is underflow . "<<endl;
            return chk;
        }

        Node<ST> *delnode=front;
        front=front->next;

        if(front==NULL)
        {
            rear=NULL;
        }

        chk=delnode->val;
        delete delnode;

        return chk;
    }

    //peak-->front() , back()
    ST Front()
    {
        ST chk;
        chk=front->val;
        return chk;
    }

    ST Back()
    {
      ST chk;
      chk=rear->val;
      return chk;
    }

    bool empty()
    {
        if(front==NULL && rear==NULL)
            return true;
        else
            return false ;
    }
};
