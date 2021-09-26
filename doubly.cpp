 #include<iostream>
 using namespace std;
  struct Node
  {
  	int data;
  	Node* next;
  	Node* prev;
  };

 class doubly
 {
 	    Node *head,*tail,*nptr;
 
 
  public:
 
 	doubly()
 	{
 		head=tail=NULL;
	}
   
  
/*  Node* create(Node *nptr)
  {
  	nptr= new Node;
  	nptr->next=NULL;
  	nptr->prev=NULL;
  	return nptr;
  }*/
  int data()
  { int a; 
     cout<<"Enter Data:-";
     cin>>a;
     return a;
  }
  
   void link()
  {
  	nptr= new Node;
  	nptr->data=data();
  	nptr->next=NULL;
  	nptr->prev=NULL;
  	
  	 if(head==NULL)
  	 {
  	 	head=tail=nptr;
	 }
	else
	{
	   	tail->next=nptr;
	   	nptr->prev=tail;
	   	tail=tail->next;
	}
	
  }
  
 void display()
  {  
     Node *np=new Node;
     np=tail;
  	 while(np!=NULL)
  	 {
  		cout<<np->data<<"\n";
  		np=np->prev;
	 }
  }
  
 };


  



int main()
{   
   doubly d1;
   for(int i=0;i<4;i++)
   {
   	d1.link();
   }
   d1.display();
	return 0;
}
