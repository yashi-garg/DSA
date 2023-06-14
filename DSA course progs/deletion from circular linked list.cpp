//deletion of node from a circular linked list
#include<iostream>
using namespace std;
 struct node
 {
 int data;
  node *next;
   node(int data)
   {
   	this->data=data;
   	this->next=NULL;
	   }	
 };
 struct linkedlist{
 	node *head,*last;
 	linkedlist()
 	{
 		head=last=NULL;
	 }
	 //input of linked list
	 void input(int x)
	 {
	 	node *t=new node(x);
	 	if(head==NULL)
	 	{
	 		head=last=t;
		 }
		 else
		 {
		 	last->next=t;
		 	last=t;
		 }
	 }
	 //making it circular
	 void circular(node *temp)
	 {
	 	while(temp->next!=NULL)
	 	temp=temp->next;
	 	temp->next=head;
	 }
	 //deletion of head node
	 void deletion(node *temp)
	 {
	 	while(temp->next!=head)
	 	temp=temp->next;
	 	temp->next=head->next;
	 	head=temp->next;
	 }
	 //deletion from any other position
	 void deletionpos(node *temp,int pos)
	 {
	 	node *p=NULL,*q=temp;
	 	for(int i=0;i<pos-1;i++)
	 	{
	 		p=q;
	 		q=q->next;
		 }
		 p->next=q->next;
		 delete q;
		 
	 }
	 //display of circular linked list
	 void display(node *temp)
	 {
	 	do
	 	{
	 		cout << temp->data << " ";
	 		temp=temp->next;
		 }while(temp!=head);
	 }
 };
 int main()
 {
 	linkedlist l1;
 	int n;
 	 cout <<"enter the dimensions\n";
 	 cin >> n;
 	  for(int i=0;i<n;i++)
 	  {
 	  	int x;
 	  	cout <<"enter a value\n";
 	  	cin >> x;
 	  	l1.input(x);
	   }
	   l1.circular(l1.head);
	   l1.display(l1.head);
	   cout << endl;
	   l1.deletionpos(l1.head,4);
	   l1.display(l1.head);
 }