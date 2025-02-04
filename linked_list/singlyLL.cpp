#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // caliing the constructor

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtIndex(node *&head, int data, int index)
{
    node *temp = head;
    int cnt = 1;
    node *ptr = new node(data);
    while (cnt < index - 1)
    {
        temp = temp->next;
        cnt++;
    }
    ptr->next = temp->next;
    temp->next = ptr;
}

void insertAtHead(node *&head, int data)
{
    node *temp = new node(data);

    temp->next = head;
    head = temp;
}

void insertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = tail->next;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void deletAtIndex(node *&head, int index)
{
    node *temp = head;

    int cnt = 1;

    while (cnt < index - 1)
    {
        temp = temp->next;
        cnt++;
    }
    node *loc = temp->next;
    temp->next = temp->next->next;
    free(loc);
}

void deletAtLast(node *&head)
{
    // using tail or head;

    node *loc = head;
    node *ploc = NULL;
    while (loc->next != NULL)

    {
        ploc = loc;
        loc = loc->next;
    }
    ploc->next = NULL;
    free(loc);

}

int main()
{

    node *node1 = new node(3);
    node *head = node1;
    node *tail = node1;

    insertAtHead(head, 15);
    print(head);
    insertAtHead(head, 10);
    insertAtHead(head, 5);
    print(head);
    insertAtTail(tail, 20);
    insertAtTail(tail, 25);
    insertAtTail(tail, 30);
    print(head);
    insertAtIndex(head, 4, 5);
    print(head);
    deletAtIndex(head, 4);
    print(head);
    deletAtIndex(head, 4);
    print(head);
    deletAtLast(head);
    print(head);

    return 0;
}