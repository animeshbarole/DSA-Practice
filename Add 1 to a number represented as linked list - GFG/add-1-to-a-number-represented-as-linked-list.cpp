//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    
    Node* Reverse(Node *head)
    {
        Node *p,*q,*r;
        p = head;
        q = NULL;
        r = NULL;
        
        while(p)
        {
            r  = q;
            q = p;
            p = p->next;
            q->next =r;
        }
        head = q;
        return head;
    }
    
    Node* addOne(Node *head) 
    {
          Node * new_head = Reverse(head);
          
          Node* curr = new_head;
          Node* pre = NULL;
          Node*curr_1 = new_head;
          int carry = 0;
          
          while(curr)
          {
              int sum = 0;
              if(pre==NULL)
              {
                  sum = curr->data+1;
                  
              }
              else
              {
                  sum = curr->data+carry;
              }
              
              carry = sum/10;
              curr->data =sum%10;
              pre = curr;
              curr = curr->next;
          }
          
          if(carry==1)
          {
              Node * last = new Node(1);
              pre->next = last;
          }
          
          return Reverse(curr_1);
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends