//sparse matrix creation addition and display prog
#include <stdio.h>
#include <stdlib.h>
struct element{
int i;
 int j;
  int x;
};
struct sparse{
int m;
int n;
int num;
struct element *ele;
};
void create(struct sparse *s)
{
 int k;
 printf("enter the dimensions\n");
 scanf("%d%d",&s->m,&s->n);
 printf("enter the number of non zero elements\n");
 scanf("%d",&s->num);
 s->ele=(struct element *)malloc(s->num*sizeof(struct element));
 printf("enter all the non zero elements with their location");
 for(k=0;k<s->num;k++)
 {
     scanf("%d %d %d",&s->ele[k].i,&s->ele[k].j,&s->ele[k].x);
 }
}
void display(struct sparse s)
{
    int k,l,h=0;
    for(k=0;k<s.m;k++)
    {
        for(l=0;l<s.n;l++)
        {
            if(k==s.ele[h].i && l==s.ele[h].j)
            printf("%d ",s.ele[h++].x);
            else
                printf("0 ");
        }
        printf("\n");
    }
}
struct sparse * add(struct sparse *s1,struct sparse *s2)
{
    if(s1->m==s2->m &&(s1->n==s2->n))
    {
    int i,j,k;
    i=j=k=0;
    struct sparse *sum;
    sum=(struct sparse *)malloc(sizeof(struct sparse));
    sum->ele=(struct element *)malloc((s1->num+s2->num)*sizeof(struct element));
    while(i<s1->num && j<s2->num)
    {
        if(s1->ele[i].i<s2->ele[j].i)
            sum->ele[k++]=s1->ele[i++];
        else if(s1->ele[i].i > s2->ele[j].i)
        sum->ele[k++]=s2->ele[j++];
        else
        {
            if(s1->ele[i].j<s2->ele[j].j)
                sum->ele[k++]=s1->ele[i++];
            else if(s1->ele[i].j>s2->ele[j].j)
                sum->ele[k++]=s2->ele[j++];
            else
            {
                sum->ele[k]=s1->ele[i];
                sum->ele[k++].x=s1->ele[i++].x+s2->ele[j++].x;
            }

        }
    }
    for(;i<s1->num;i++)
        sum->ele[k++]=s1->ele[i];
    for(;j<s2->num;j++)
        sum->ele[k++]=s2->ele[j];
    sum->m=s1->m;
    sum->n=s1->n;
    sum->num=k;
    return sum;
    }
   else
    {
       printf("the two matrix are not compatible for addition\n");
       exit(0);
   }
};
int main()
{
   struct sparse s1,s2,*s3;
   create(&s1);
   create(&s2);
   s3=add(&s1,&s2);
   printf("FIRST MATRIX\n");
   display(s1);
    printf("SECOND MATRIX\n");
   display(s2);
    printf("SUM MATRIX\n");
   display(*s3);
    return 0;
}
