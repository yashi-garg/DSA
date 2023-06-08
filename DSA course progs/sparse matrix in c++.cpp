//sparsematrixin c++
#include <iostream>

using namespace std;
class element{
   public:
       int i;
       int j;
       int x;
};
class sparse{

    int m;
    int n;
     int num;
     element *ele;
     public:
         sparse(int m,int n,int num)
         {
             this->m=m;
             this->n=n;
             this->num=num;
             ele=new element[this->num];
         }
         void read()
         {
            cout <<"enter all the non zero elements\n";
            for(int i=0;i<num;i++)
            {
                cin >> ele[i].i>>ele[i].j>>ele[i].x;
            }
         }
         void display()
         {
        int h=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ele[h].i==i && ele[h].j==j)
                    cout << ele[h++].x <<" ";
                else
                    cout <<"0 ";
            }
            cout << endl;
        }
         }
     ~sparse()
     {
         delete[]ele;
     }

 };
int main()
{
    int m,n,num;
    cout << "enter the dimensions of the matrix\n";
    cin >> m>> n;
    cout <<"enter the no. of non zero elements\n";
    cin >> num;
    sparse ob(m,n,num);
    ob.read();
    ob.display();

    return 0;
}
