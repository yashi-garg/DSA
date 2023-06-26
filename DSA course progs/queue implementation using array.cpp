//queue implementation
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
        rear=front=-1;
        q=new int[size];
    }
    void input(int x)
    {
        if(rear==size-1)
        {
            cout <<"queue is full\n";
        }
        else
        {
            rear++;
            q[rear]=x;
        }
    }
    int display()
    {
      int x=-1;
      if(rear==front)
      {
          cout << "queue is empty\n";
      }
      else{
        front++;
        x=q[front];
      }
      return x;
    }
};

int main()
{
 int size;
cout << "enter the size of the queue\n";
cin >> size;
queue q1(size);
for(int i=0;i<size;i++)
{
    int y;
     cin >> y;
     q1.input(y);
}
for(int i=0;i<size;i++)
{
    int r=q1.display();
    if(r!=-1)
    {
        cout << r << " ";
    }
}
}
