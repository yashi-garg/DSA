//circular queue implementation using array
#include <iostream>

using namespace std;
struct queue{
public:
    int size;
    int rear,front;
    int *q;
    queue(int size)
    {
        this->size=size;
        rear=front=0;
        q=new int[size];
    }
    void input(int x)
    {
    if((rear+1)%size==front)
        cout <<"queue is full\n";
    else{
        rear=(rear+1)%size;
        q[rear]=x;
    }
    }
    int dequeue()
    {
      int x=-1;
      if(front==rear)
        cout << "queue is empty\n";
      else{
        front=(front+1)%size;
        x=q[front];
      }
      return x;
    }
    void display()
    {
       int i=front+1;
       do
       {
           cout << q[i]<<" ";
           i=(i+1)%size;
       }
       while(i!=(rear+1));
    }
};

int main()
{
 int size;
cout << "enter the size of the queue\n";
cin >> size;
queue q1(size);
for(int i=0;i<size-1;i++) //accepts only size-1 because the front position remains empty
{
    int y;
     cin >> y;
     q1.input(y);
}
for(int i=0;i<size-1;i++)
{
    int r=q1.dequeue();
    if(r!=-1)
    {
        cout << r << " ";
    }
}
}
