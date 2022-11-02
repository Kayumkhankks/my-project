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
void get_mid(int len)
{
    int mid;
    if (len % 2 == 0)   mid = len / 2;
 
    else  mid = (len / 2) + 1;

    cout << "your mid is = " << mid;

}

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;

    insertH(head, 13);
    insertH(head, 177);
    insertH(head, 3);
    insertH(head, 12);
    // insertH(head, 12);
    // insertH(head, 12);
    print(head);

    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }

    get_mid(len);

    return 0;
}