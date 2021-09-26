/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
    
    ListNode* head,*nptr,*ptr;
    vector<int> v1;
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int  y,z,carry,data,size,res;
        
        
        head=nullptr;
        
 
        helper1(l1);
       
        vector <int> v2(v1.begin(),v1.end());
        v1.clear();
        
        helper1(l2);
     
 
        int size1=v1.size();
        int size2=v2.size();
        
        size=(size1>size2)?size1:size2;
            
        while(size)
        {  
           
                if(size1)       
                {
                y=v1[size1-1];
                v1.pop_back();
                }
                else
                   y=0;
          
                if(size2)           
                {
                    z=v2[size2-1];
                    v2.pop_back();
                }
               else
                  z=0;
            
            
            res=y+z+carry;
            
            data= (res/10)>=1?res%10:res;
            
            nptr=create(data);
            Insert(nptr);
           
            
            carry=res/10;
            
            size1=v1.size();
            size2=v2.size();
            size-=1;
          
       
            
        }
        if (carry==1)
        {
            nptr=create(1);
            Insert(nptr);
        }
       
            
            
        
        return head;
       
    }
    
    
    void Insert(ListNode* nptr)
    {
        if(head==nullptr) head= ptr=nptr;
        
        else
        {
            ptr->next=nptr;
            ptr=ptr->next;
        }
    }
    ListNode* create(int q)
    {
        nptr=new ListNode;
        nptr->val=q;
        nptr->next=nullptr;
        return nptr;
    }
    void  helper1(ListNode* l1)
    {   
        if(l1==nullptr)
            return ;
        
        helper1(l1->next);
     
        v1.push_back(l1->val);
        
     
    }
    
};