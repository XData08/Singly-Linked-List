# <b> Singly Linked List</b> 
###### Devloped by [Lirae Data](https://www.facebook.com/liraeque.data/)
<br>

A singly linked list is well known and used Data Structure amongst programmers and it is sometimes known as a linear linked list because all nodes are linked together in a sequential ways and others may call it as a dynamic array because the change of size is dynamically allocated everytime a node is added to the list. As a result, it obviously has a beginning or _Head_ and an end or _Tail_. The fundamental issue with this list is that we are unable to access the node's predecessor from the present node.

I've designed my code as a beginner friendly because the is rather simple yet can be comprehended by beginners.  List of functions in my Singly Linked List;

<!--
/**************************
 *  @ List of Functions
 *  ~~~~~~~~~~~~~~~~~~~~
 *  1. initList 
 *  2. deleteList
 *  3. insertData 
 *      - pushFront
 *      - pushMiddle 
 *      - pushEnd
 *  4. removeData
 *      - popFront
 *      - popMiddle
 *      - popEnd
 *  5. updateData
 *  6. status
 *      - traverse
 *  7. isEmpty
 *  8. linear_search
 *  9. reverse
 **************************
 */-->

1. `void initList(SLList * lst); `  
    - To initialize the singly linked list.

2. `void deleteList(SLList * lst);`
    - To delete the singly linked list once the program terminates, so there won't be any memory issue.

3. `bool insertData(SLList * lst, ins front, int end, int data);`
    - To insert data from head to tail. Moreover, I also provided other means of inserting data so that tester or programmer has other options to insert data;

    1. `bool pushFront(SLList * lst, int data);`
        - To insert the node in the head of the singly linked list.
    
    2. `bool pushMiddle(SLList * lst, int data);`
        - To insert the node in the middle of the singly linked list.

    3. `bool pushEnd(SLList * lst, int data);`
        - To insert the node in the end of the singly linked list.

4. `bool removeData(SLList * lst, rem front, rem end, int data);`
    - To delete the node sequentially from end to beginning. Moreover, there are other means of removing the node;

    1. `bool popFront(SLList * lst);`
        - To remove the node in the head of the singly linked list.
    
    2. `bool popMiddle(SLList * lst);`
        - To remove the node in the middle of the singly linked list.
    
    3. `bool popEnd(SLList * lst);`
        - To remove the node in the end of the singly linked list.

5. `bool updateData(SLList * lst, int index, int data);`
    - To update the specified index of the node in the singly linked list with a new data[int].

6. `void status(SLList * lst);`
    - To List all the information of the singly linked list  .       
    1. `void traverse(SLList * lst);`
        - Traverse and outputs the content of the nodes.

7. `bool isEmpty(SLList * lst);`
    - Checks if the singly linked list is empty or not.

8. `bool linear_search(SLList * lst, int data);`
    - To search an  element in the singly linked list in linear time of O(n).

9. `bool reverse(SLList * lst);`
    - To reverse the contents of the linked list

---
## Sample Code Snippet of a Singly Linked List
```
typedef struct node {
    struct node * next;
    int data;
} Node;

typdef struct sllist {
    struct node * head;
    struct node * tail;
    int size;
} SLList;
```

The code above is what I used in creating my Singly linked list in C language.