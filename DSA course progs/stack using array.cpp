//stack using array
#include <iostream>

using namespace std;
struct stack
{
int size;
int top;
int *s;
stack(int size)
{
    this->size=size;
    top=-1;
    s=new int[size];
}
void input(int x)
{
    if(top==size-1)
    {
        cout << "stack overflow\n";
    }
    else{
        top++;
        s[top]=x;
    }
}
void display()
{
    if(top==-1)
    {
        cout <<"stack underflow\n";
            }
            else{
                cout << s[top]<< " ";
                top--;
            }
}
};

int main()
{
stack s1(5);
for(int i=0;i<5;i++)
{
    int x;
    cin>> x;
    s1.input(x);
}
cout <<endl;
for(int i=0;i<5;i++)
{
    s1.display();
}
}
