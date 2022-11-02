 #include <climits>
 #include <iostream>
using namespace std;
class Node
{
 
public:
int data;
Node* next;


    Node( int data){
    this -> data =  data;
    this ->next = NULL;}
     
};void insertH(Node* &head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print(Node* &head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
 void intersection(Node* &head1 ,Node *&head2)
{
   Node* temp = head1;
   while (temp != NULL)
   {
    while (head2 !=NULL)
    {
        if(temp  == head2  )
        {
            cout<<"present  ";
            return;
        }
        head2 = head2-> next;
    }
    temp = temp ->next;
   }
    cout<<"absent";

   
}


int main () {

    
    Node* head =  new Node(10);
    Node* head2 =  new Node(0);

    insertH(head,4);
    insertH(head,8);
    insertH(head2,6);
    insertH(head2,1);
   

    print(head);cout<<endl<<endl;
    print(head2);
cout<<endl<<endl;
    intersection(head,head2) ; 
 
    
   return 0;
}