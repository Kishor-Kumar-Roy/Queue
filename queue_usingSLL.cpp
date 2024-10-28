#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};

class queue
{
    Node *front,*rear;
    public:
    queue()
    {
        front=rear=NULL;
    }
   bool isempty()
   {
    return front==NULL;
   }
   void push(int x)
   {
    //check if empty
    if(isempty())
    {
        front=new Node(x);
        cout<<"pushed "<<x<<" into the queue"<<endl;
        rear=front;
        return ;
    }
    //insert
    else
    {
        rear->next=new Node(x);
        cout<<"pushed "<<x<<" into the queue"<<endl;
        rear=rear->next;
    }
   }
   void pop()
   {
    //check if empty
    if(isempty())
    {
        cout<<"queue underflow!"<<endl;
        return ;
    }
    else
    {
       Node *temp=front;
            cout<<"popped "<<temp->data<<" from the queue"<<endl;
       front=front->next;
       delete temp;

    }
   }
   int start()
   {
    if(isempty())
    {
        cout<<"queue is empty."<<endl;
    }
    else{

        cout<<"start element="<<front->data;
        return 0;
    }
   }
//    ~queue()
//    {
//         // Destructor to delete all nodes
//         while (!isempty()) {
//             pop();
//         }
//    }
};

int main()
{

    queue q;

//Test case 1
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.pop();
    // q.start();

//Test case 2
q.pop();
q.start();
    return 0;
}