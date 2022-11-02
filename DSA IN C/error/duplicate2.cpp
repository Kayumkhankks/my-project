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
    // ~Node()
    // {
    //     int val = this->data;
    //     if (this->next != NULL)
    //     {
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout << "Your duplicate data is remove for = " << val << endl;
    // }
};
void insertH(Node *&head, int d)

{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
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
Node *remove1(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *next = temp->next;
        while (next != NULL)
        {
            if (temp->data == next->data)
            {
                Node *next_next = next->next;
                Node *del = next;
                delete del;
                next = next_next;
            }
       }  temp = next;  
    }
    return head;
}

int main()
{
    Node *head = new Node(10);

    insertH(head, 2);
    insertH(head, 34);
    insertH(head, 4);
    insertH(head, 34);
    insertH(head, 2);
    print(head);
    cout << endl;

    remove1(head);

    print(head);

    return 0;
}