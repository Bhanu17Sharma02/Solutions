#include<iostream>
using namespace std;
struct Node
{
	int val;
	Node* next;
}*head,*current,*tail,*next,*prev;
void insert(int a)
{
	
   Node * node=new Node();

   node->val=a;
   node->next=NULL;
   
   if(head==NULL)
    { 
	 	 head=node;
    	 tail=node;
	}
	else
	   {   
	        tail->next=node;
	        tail=tail->next;
		}	
	
}
void recrev(Node* p)
{
	if(p->next==NULL)
	{
		head=p;
		return;
	}
	recrev(p->next);
	
	Node*q=p->next;
	q->next=p;
	p->next=NULL;
}
void reverse()
{
	current=head;
	
	prev=NULL;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	
	}
	head=prev;

}
void printnode()
{    Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->val<<" ";
		temp=temp->next;
	}
	cout<<"\n";
}
int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(5);
	insert(100);
	

	printnode();
	
    //reverse();
	recrev(head);
	printnode();	
	
	
	return 0;
}
