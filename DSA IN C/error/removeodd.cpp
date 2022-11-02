#include <climits>
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node*per;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->per = NULL;
    }
    ~Node(){
        if(this-> next !=NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void insertH(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertT(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
int remove_odd(Node *head)
{  
   if (head==NULL) 
   {
    return 0;
   }
   while(head!=NULL)
   {
    if (head->data %2 !=0)
    {
    Node *cur  = head;
    per = NULL;
   
   
    cur ->  per = NULL;
    per -> next = cur -> next;
    cur -> next = NULL;
    delete cur;


    }
    head = head->next;
   }
   
         
 return cur;
}
int main()
{
    Node *head = new Node(1);
    insertH(head, 23);
    insertH(head, 23);
    insertH(head, 20);
    insertH(head, 22);
    insertH(head, 3);
    insertH(head, 2);

    print(head);
    remove_odd(head);

    return 0;
}