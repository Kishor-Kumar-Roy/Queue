#include<iostream>
#include<stack>
using namespace std;

class queue
{
    stack<int>st1;
   stack<int>st2;
   
    public:
   
   bool empty()
   {
    return st1.empty() && st2.empty();
   }

void push(int x)
{
        cout<<"pushed "<<x<<" into queue"<<endl;
        st1.push(x);
}

int pop()
{
    if(empty())
    {
    cout<<"queue underflow!"<<endl;
    return 0;
}
else if(!st2.empty())
{
    int element=st2.top();
    cout<<"popped "<<st2.top()<<" from queue"<<endl;
    st2.pop();
    return element;
}
else
{
   while(!st1.empty())
   {
    st2.push(st1.top());
    st1.pop();
   }
   int element=st2.top();
   cout<<"popped "<<st2.top()<<" from queue"<<endl;
    st2.pop();
    return element;
}
}
int start()
{
    if(empty())
    cout<<"stack is empty";

else if(!st2.empty())
{
    cout<<"start element= "<<st2.top();
    return st2.top();
}
else 
{
    while(!st1.empty())
    {
        st2.push(st1.top());
        st1.pop();
    }
    cout<<"start element= "<<st2.top();
    return st2.top();
}
}
};

int main()
{
    queue q;
    //Test case 1
//     q.push(5);
//     q.push(15);
//     q.push(52);
//     q.push(55);
//   q.pop();
//   q.pop();
//   q.start();

//Test case 2
q.pop();q.start();
    return 0;
}