#pragma once
#include <iostream>

using std::cout;
using std::string;

// лучше потом сделать через темплейт, чтобы был не только стринг
struct stackNode
{
    string data;
    stackNode* prev;
    // для задачи можно добавить доп поле минимум, отображает минимальный элемент, который был до этого элемента
};

class stack
{
public:
    stack(){};
    ~stack()
    {
        // delete all node
    };

    string pop(); // забрать и удалить последний элемент
    void push(string item); // закинуть элемент в конец
    string peek(); // посмотреть последний элемент
    void isEmpty(); // проверка пустой ли стек

    stackNode* lastElement = NULL;
};