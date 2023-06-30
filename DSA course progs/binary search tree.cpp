//program implementing a abinary search tree
#include<iostream>
using namespace std;
struct node 
{
	int data;
	node *lchild;
	node *rchild;
	node(int data)
    {
    	this->data=data;
    	lchild=rchild=NULL;
	}
};
struct bst{
	node *root;
	bst()
	{
		root=NULL;
	}
	void insert(int key)
	{
		node *t=root; node *r;
		if(root==NULL)
		{
			node *p=new node(key);
			p->lchild=p->rchild=NULL;
			root=p;
			return;
		}
		while(t!=NULL)
		{
			r=t;
			if(key<t->data)
			{
				t=t->lchild;
			}
			else if(key > t->data)
			{
				t=t->rchild;
			}
			else
			return;
		}
		node *p=new node(key);
		p->lchild=p->rchild=NULL;
	    if(key<r->data)
	    r->lchild=p;
	    else
	    r->rchild=p;
	}
	void inorder(node *p)
	{
		if(p!=NULL)
    {
        inorder(p->lchild);
        printf("%d ",p->data);
        inorder(p->rchild);
    }
	}
};
int main()
{
	bst b1;
	b1.insert(10);
	b1.insert(34);
	b1.insert(3);;
	b1.insert(4);
	b1.insert(1);
	b1.inorder(b1.root);
	
}