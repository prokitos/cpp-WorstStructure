#include "linkList.h"

void lList::insert(int d)
{
    lListNode* tmp = new lListNode;
    tmp->field = d;
    tmp->next = NULL;

    if(firstNode == NULL)
    {
        firstNode = tmp;
        lastNode = tmp;
    }
    else
    {
        lastNode->next = tmp;
        lastNode = tmp;
    }

};

void lList::show(lListNode* nod)
{
    if(nod != NULL)
    {
        cout << nod->field << " ";
        show(nod->next);
    }
};

void lList::showAll()
{
    show(firstNode);
};
