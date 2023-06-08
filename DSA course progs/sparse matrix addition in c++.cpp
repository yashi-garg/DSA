//sparse matrix cration additon and display in c++
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
         ~sparse()
     {
         delete[]ele;
     }
     sparse operator+(sparse &s);
   friend istream & operator >>(istream &is,sparse &s);
    friend ostream & operator <<(ostream &os,sparse &s);

 };

 sparse sparse::operator+(sparse &s)
 {
  int i,j,k;
  if(m!=s.m && n!=s.n)
  {
      cout << "the matrix are not compatible for addition";
      exit(0);
  }
  else{
    sparse *sum=new sparse(m,n,num+s.num);

    i=j=k=0;
    while(i,num && j<s.num)
    {
        if(ele[i].i < s.ele[j].i)
        sum->ele[k++]=ele[i++];
        else if(ele[i].i > s.ele[j].i)
        sum->ele[k++]=s.ele[j++];
        else{
            if(ele[i].j < s.ele[j].j)
             sum->ele[k++]=ele[i++];
            else if(ele[i].j > s.ele[j].j)
               sum->ele[k++]=s.ele[j++];
            else
            {
                sum->ele[k]=ele[i];
                sum->ele[k++].x=ele[i++].x+s.ele[j++].x;
            }
        }
    }
    for(;i<num;i++)
        sum->ele[k++]=ele[i];
    for(;j<s.num;j++)
       sum->ele[k++]=ele[j];
    sum->num=k;
    return *sum;

  }
 }

istream & operator>>(istream &is,sparse &s)
         {
            cout <<"enter all the non zero elements\n";
            for(int i=0;i<s.num;i++)
            {
                 cin >> s.ele[i].i>>s.ele[i].j>>s.ele[i].x;
            }
            return is;
         }
         ostream & operator <<(ostream &os,sparse &s)
         {
        int h=0;
        for(int i=0;i<s.m;i++)
        {
            for(int j=0;j<s.n;j++)
            {
                if(s.ele[h].i==i && s.ele[h].j==j)
                    cout  << s.ele[h++].x <<" ";
                else
                    cout <<"0 ";
            }
            cout << endl;
        }
        return os;
         }


int main()
{
    int m,n,num;
    cout << "enter the dimensions of the first matrix\n";
    cin >> m>> n;
    cout <<"enter the no. of non zero elements\n";
    cin >> num;
    sparse ob1(m,n,num);
    cin >> ob1;
    int m1,n1,num1;
    cout << "enter the dimensions of the second matrix\n";
    cin >> m1>> n1;
    cout <<"enter the no. of non zero elements\n";
    cin >> num1;
    sparse ob2(m1,n1,num1);
    cin >> ob2;
    sparse sum=ob1+ob2;
   cout << "first matrix\n"<<ob1<<endl;
   cout <<"second matrix\n"<<ob2<<endl;
   cout <<"sum matrix\n"<<sum<<endl;
    return 0;
}
