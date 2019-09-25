#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

class list
{
private:
    node *head, *tail;

public:
    list()
    {
        head = NULL;
        tail = NULL;
    }

    void createnode(int x)
    {
        node *temp = new node;
        temp->data = x;
        temp->next = NULL;
        temp->prev = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            
        }
    }

    void display()
    {
        node *temp = new node;
        temp = head;
        string s = "";
        while (temp)
        {
            cout << temp->data << "\n";
            s = s + std::to_string(temp->data);
            temp = temp->next;
        }
        cout << s;
    }
};

int main()
{
    list l;
    l.createnode(7);
    l.createnode(1);
    l.createnode(6);
    l.display();
    return 0;
}