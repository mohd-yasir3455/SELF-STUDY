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
void insertAtHead(node *&head, int data)
{
    node *temp = new node(data);

    temp->next = head;
    head = temp;
}

void reverse(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }

    node *prev = NULL;
    node *curr = head;
    node *forward;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    // i forgot this so head is lost
    head = prev;
}

// using recursion

void reverse_recursion(node *&head)

{
    node *prev = NULL;
    node *curr = head;
    node *forward;

    // base case
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    forward = curr->next;
    reverse_recursion(prev);
    curr->next = prev;
}
int main()
{
    node *node1 = new node(9);
    node *head = node1;
    node *prev = NULL;
    node *curr = head;
    node *forward;

    insertAtHead(head, 7);
    insertAtHead(head, 5);
    insertAtHead(head, 3);
    insertAtHead(head, 1);
    print(head);
    reverse_recursion(head);
    print(head);

    return 0;
}