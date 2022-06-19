#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

node *top = NULL;

bool isempty()
{
    if (top == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push(int val)
{
    node *a = new node(val);
    a->next = top;
    top = a;
}

void pop()
{
    if (isempty())
    {
        cout << "Stack is empty: " << endl;
    }
    else
    {
        node *ptr = top;
        top = top->next;

        delete ptr;
    }
}
void showTop()
{

    if (isempty())
    {
        cout << "Stack is Empty: ";
    }
    else
    {
        cout << "element at top is: " << top->data << endl;
        ;
    }
}
int main()
{
    push(1);
    push(2);
    pop();
    showTop();

    return 0;
}
