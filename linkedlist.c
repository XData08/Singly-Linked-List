// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ linkedlist.c 
#include "linkedlist.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Node Method[body]
Node * createNode(int data);
Node * getHeadNode(Node * node, int index);
Node * getTailNode(Node * node, int index);


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ SLList Method[body]
void initList(SLList * lst);

bool insertData(SLList * lst, int front, ins end, int data);
bool pushFront(SLList * lst,  int data);
bool pushMiddle(SLList * lst, int data);
bool pushEnd(SLList * lst, int data);

bool removeDat(SLList * lst, rem front, rem end);
bool popFront(SLList * lst);
bool popMiddle(SLList * lst);
bool popEnd(SLList * lst);

void deleteList(SLList * lst);
