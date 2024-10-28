#include<iostream>
using namespace std;
class queue{
  int front,rear,size;
  int *arr;
  public:
  queue(int n)
  {    
       arr=new int[n];
       size=n;
       front=rear=-1;

         }
         bool isempty()
         {
            return front==-1;
         }

         bool isfull()
         {
            return (rear+1)%size==front;
         }

         void push(int x)
         {
            //check if empty
            if(isempty())
            {
               front=rear=0;
               cout<<"pushed "<<x<<" into the queue"<<endl;
               arr[front]=x;

            }
            //check if full
            else if(isfull())
            {
               cout<<"queue overflow"<<endl;
               return ;
            }
            //insert
            else 
            {
               rear=(rear+1)%size;
               arr[rear]=x;
               cout<<"pushed "<<x<<" into the queue"<<endl;
            }
         }
    void pop()
    {
      //check if empty
      if(isempty())
      {
         cout<<"queue underflow"<<endl;
         return ;
      }
      //pop
   cout<<"popped "<<arr[front]<<" from the queue"<<endl;
   if(front==rear)
   {
      front=rear=-1;
   }
      else 
      {
         front=(front+1)%size;
      }
    }
  int start()
  {
   if(isempty())
   {
      cout<<"queue is empty"<<endl;
      return -1;
   }
   else 
   {
      cout<<"start element="<<arr[front]<<endl;
      return arr[front];
   }
  }
  int end()
  {
   if(isempty())
   {
      cout<<"queue is empty"<<endl;
      return -1;
   }
   else 
   {
      cout<<"end element="<<arr[rear]<<endl;
      return arr[rear];
   }
  }

  ~queue()
  {
   delete [] arr;
  }
};

int main()
{
   queue q(6);

   //Test case 1

    q.push(10);
    q.push(15);
    q.push(30);
    q.push(13);
    q.push(19);
    q.push(21);
    q.pop();
    q.pop();
    q.push(20);
    q.start();
    q.end();
  

  //Test case 2
   // q.pop();
   // q.start();
   return 0;
}