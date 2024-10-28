#include<iostream>
#include<queue>
#include<stack>
 using namespace std;
//reverse first k elements
 int main()
 {
  queue<int>q;
  stack<int>st;
  int k=3;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  //push first k elements of queue into stack
  int temp=k;
  while(temp--)
  {
    st.push(q.front());
    q.pop();
  }
  
  //push elements from stack back to queue(bt in reverse order)
  while(!st.empty())
  {
    q.push(st.top());
    st.pop();
  }

//move the remaining elements in the queue to the back
  int n=q.size()-k;
for(int i=0;i<n;i++)
  {
    q.push(q.front());
    q.pop();
  }
  while(!q.empty())
  {
    cout<<q.front()<<" ";
    q.pop();
  }
    return 0;
 }