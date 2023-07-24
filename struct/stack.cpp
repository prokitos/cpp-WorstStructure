#include "stack.h"

void stack::push(string item)
{
    stackNode* newElement = new stackNode;
    newElement->data = item;

    if (lastElement != NULL)
    {
        newElement->prev = lastElement;
    }
    else
        newElement->prev = NULL;

    lastElement = newElement;
};

void stack::isEmpty()
{
    if(lastElement == NULL)
        cout << "stack is empty";
    else
        cout << "stack no empty";
};

string stack::peek()
{
    if(lastElement == NULL)
    {
        cout << "empty stack";
        return "";
    }
    else
    {
        return lastElement->data;
    }
};

string stack::pop()
{
    string output = "";
    if(lastElement != NULL)
    {
        output = lastElement->data;
        stackNode* temp = lastElement;
        lastElement = lastElement->prev;
        delete temp;
    }
    return output;
};