// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ linkedlist.h
#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H 
#define STRING_SIZE 256

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Libraries 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>


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
typedef char string[STRING_SIZE];


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Node Method[Declaration]
Node * createNode(int data);
Node * getNode(Node * node, int index);


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ SLList Method[Declaration]
void initList(SLList * lst);
bool updateData(SLList * lst, int index, int data);

bool insertData(SLList * lst, ins front, ins end, int data);
bool pushFront(SLList * lst,  int data);
bool pushMiddle(SLList * lst, int data);
bool pushEnd(SLList * lst, int data);

bool removeData(SLList * lst, rem front, rem end);
bool popFront(SLList * lst);
bool popMiddle(SLList * lst);
bool popEnd(SLList * lst);

void traverse(SLList * lst);
void status(SLList * lst);

bool isEmpty(SLList * lst);
bool linear_search(SLList * lst,  int data);
bool reverse(SLList * lst);
void deleteList(SLList * lst);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~ text.c Methods[Declaration]
void main_menu(void);
void isQuit(void);

#endif

