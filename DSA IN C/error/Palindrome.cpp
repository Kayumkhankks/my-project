#include <climits>
 #include <iostream>
using namespace std;
class Node
{ 
public:
int data;
Node* next ;
    Node( int data)
{
    this->data = data;
    this->next = NULL;
}   
};
void insertH(Node* &head,int d){
    Node* temp = new Node(d);
    if (head ==NULL)
    {
        head = temp;
    
    }
    else{
        temp -> next = head;
        head =temp;
    }
}
void print(Node*&head){
    Node*temp = head;
    while (temp != NULL)
    {
        cout<<temp -> data<< " ";
        temp = temp -> next;

    }
    
}
Node* Palindrome(Node* &head)
{
    Node* temp = head;
    Node* first ;
    Node* sec ;
    int c=0;
   while ( c!=3) 
    {
        first  = temp;
        c++;
        cout<<first->data;
        temp=temp->next;
    } 
    // for (temp = mid +1; temp != NULL;temp = temp -> next)
    while (c != 5)
   {
           sec -> data = temp->data;
           cout<<sec->data;
    }
    while (first!=NULL && sec != NULL)
    {
        
  
    
    if (first ->data == sec -> data)
    {
        cout<<"Palindrome";
    }else
    cout<<"not Palindrome";
       }
   
   
      
    
}


 
int main () {
    Node* head =new Node(12);
    insertH(head,13);  
    insertH(head,64);  
    insertH(head,13);  
    insertH(head,12);  
  
  

 Palindrome(head,5 );

   return 0;
}