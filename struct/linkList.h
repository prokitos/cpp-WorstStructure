#pragma once
#include <iostream>

using std::cout;
using std::string;

struct node 
{
    int field;           // поле данных
    struct node* next;  // следующй элемент
};

class lList
{
    node* firstNode;
    node* lastNode;
public:
    lList()
    {
        firstNode = NULL;
        lastNode = NULL;
    };
    void insert(int d);
    void show(node* nod);
    void showAll();

};

