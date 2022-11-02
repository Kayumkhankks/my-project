#include <climits>
#include <iostream>
 
using namespace std;
class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void anyp(Node *&head, Node *&tail, int p, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    Node *temp = head;
    Node *cur = new Node(d);
    int c = 1;
    while (c < p-1)
    {
        temp = temp->next;
        c++;
    }
  
    cur->next = temp->next; 
     temp->next = cur;
  
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void kth(Node* &head, int k)
{

    Node* cur = head;
    Node* pre = NULL;
    Node*  forward = NULL;
 int c = 0;
 while (c < k && cur != NULL)
 {
    forward = cur -> next;
    cur -> next = pre;
    pre = cur;
    cur = forward;
    c++;

 if(forward != NULL){
    int a = kth(forward , k);
    cur -> next = a;
 } }
  
  print(pre);
  

  
 

}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    anyp(head, tail, 2, 23);
    anyp(head, tail, 3, 20);
    anyp(head, tail, 4, 3);
    anyp(head, tail,5 , 45);

    print(head);   
    return 0;
}