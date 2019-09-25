#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
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
        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    bool checkpallindrome(int n)
    {
        node *temp = new node;
        temp = head;
        int x, y;
        bool pal = false;
        while (temp)
        {
            x = temp->data;
            while (temp)
            {
                y = temp->data;
                temp = temp->next;
            }
            if (x == y)
            {
                pal = true;
            }
            else
            {
                pal = false;
            }
        }
        return pal;
    }

    int display()
    {
        node *temp = new node;
        temp = head;
        int count = 0;
        while (temp)
        {
            cout << temp->data << "\n";
            count = count + 1;
            temp = temp->next;
        }
        return count;
    }
};

int main()
{
    list l;
    l.createnode(5);
    l.createnode(10);
    l.createnode(10);
    l.createnode(5);
    int x = l.display();
    if (l.checkpallindrome(x))
    {
        cout << "pallindrome"
             << "\n";
    }
    else
    {
        cout << "not a pallindrome";
    }
    return 0;
}
