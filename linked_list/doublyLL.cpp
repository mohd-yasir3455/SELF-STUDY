#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtIndex(node *&head, int data, int index)
{
    node *ptr = new node(data);
    node *temp = head;
    int count = 0;

    while (count < index)
    {
        temp = temp->next;
        count++;
    }
    ptr->next = temp->next;
    ptr->next->prev = ptr;
    temp->next = ptr;
    ptr->prev = temp;
}

void insertAtHead(node *&head, int data)
{
    node *ptr = new node(data);
    ptr->next = head;
    head->prev = ptr;
    head = ptr;
}

void reverse(node *&head)
{
    node *curr = head;
    node *temp;

    while (curr != NULL)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    if (temp != NULL)
    {
        head = temp->prev; // update head to the new start of the reversed list
    }
}
int main()
{
    node *node1 = new node(19);
    node *head = node1;

    insertAtHead(head, 12);
    insertAtHead(head, 14);
    insertAtIndex(head, 0, 0);
    insertAtIndex(head, 1, 1);
    insertAtHead(head, 10);
    print(head);
    reverse(head);
    print(head);
    return 0;
}