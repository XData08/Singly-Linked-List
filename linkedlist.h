// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ linkedlist.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H 


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Libraries 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Node Struct
typedef struct node{
    struct node * next;
    int data;
} Node;


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ SLList Struct
typedef struct sllist{
    struct node * head;
    struct node * tail;
    int size;
} SLList;


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Datatypes
typedef bool (*ins)(SLList *, int);
typedef bool (*rem)(SLList*);


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Node Method[Declaration]
Node * createNode(int data);
Node * getHeadNode(Node * node, int index);
Node * getTailNode(Node * node, int index);


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ SLList Method[Declaration]
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


#endif