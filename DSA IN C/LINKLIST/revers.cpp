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

void insertH(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {

        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    }
}

void insertT(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {

        Node *temp = new Node(d);
        tail->next = temp;
        tail = tail->next;
    }
}
void anyP(Node *&head, Node *&tail, int p, int d)
{
    Node *temp = head;
    int c = 1;
    if (p == 1)
    {
        insertH(head, tail, d);
        return;
    }

    while (c < p - 1)
    {
        temp = temp->next;
        c++;
    }

    if (temp->next == NULL)
    {
        insertT(head, tail, d);
        return;
    }

    Node *newNode = new Node(d);
    newNode->next = temp->next;
    temp->next = newNode;
}
void print(Node *&tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }
}
void revers(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        cout << "YOUR LIST IS ALREADY SHORTED  " << endl;
    }

    Node *per = NULL;
    Node *cur = head;
    Node *forward = NULL;

    while (cur != NULL)
    {
        forward = cur->next;
        cur->next = per;
        per = cur;
        cur = forward;
    }  cout<<endl;
     print(per);
   cout<<endl;
}

int main()
{
    Node *node = new Node(10);
    Node *head = node;
    Node *tail = node;

    anyP(head, tail, 2, 32);

    anyP(head, tail, 3, 3);

    anyP(head, tail, 4, 2);

    anyP(head, tail, 5, 56);
    print(head);
   
revers(head);
    return 0;
}