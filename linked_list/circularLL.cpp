#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class circularLinkedList
{
    node *head;

public:
    circularLinkedList()
    {
        head = NULL;
    }

    void append(int val)
    {
        node *ptr = new node(val);

        // check is head NULL
        if (head == NULL)
        {
            head = ptr;
            head->next = head;
        }
        else
        {
            node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = head;
        }
    }

    int deleteAtlast()
    {
        int data = -1;
        if (head == nullptr)
            return -1;
        else
        {
            node *temp = head;
            node *ptemp = head;
            while (temp->next != head)
            {
                ptemp = temp;
                temp = temp->next;
            }
            ptemp->next = head;
            data = temp->val;
            delete temp;
        }
        return data;
    }

    int deleteNode(int target)
    {
        int data = -1;
        if (head == nullptr)
            return -1;
        else if (head->val = target)
        {
            node *temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
            node *temp = head;
            node *ptemp = head;
            while (temp->val != target && temp != NULL)
            {
                ptemp = temp;
                temp = temp->next;
            }
            ptemp->next = temp->next;
            delete temp;
        }
    }

    void display()
    {
        if (head == nullptr)
        {
            std::cout << "The list is empty." << std::endl;
            return;
        }
        node *temp = head;
        do
        {
            std::cout << temp->val << " ";
            temp = temp->next;
        } while (temp != head);
        std::cout << std::endl;
    }
};

int main()
{
    circularLinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);
    list.display();

    return 0;
}