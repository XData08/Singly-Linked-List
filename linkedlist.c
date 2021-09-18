// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ linkedlist.c 
#include "linkedlist.h"


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Node Method[body]
Node * createNode(int data){
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->data = data;
    return newNode;
}

Node * getNode(Node * node, int index){
    for (int i=0; i<index; i++){
        node = node->next;
    }
    return node;
}


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ SLList Method[body]
void initList(SLList * lst){
    lst->head = NULL;
    lst->tail = NULL;
    lst->size = 0;
    return;
}

bool insertData(SLList * lst, ins front, ins end, int data){
    return (lst->head== NULL)? front(lst, data) : end(lst, data);
}

bool pushFront(SLList * lst,  int data){
    Node * newNode = createNode(data);
    if (newNode == NULL){
        return false;
    } else {
        newNode->next = lst->head;
        if (lst->head == NULL){
            lst->tail = newNode;
        }
        lst->head = newNode;
    }
    lst->size++;
    return true;
}

bool pushMiddle(SLList * lst, int data){
    if (lst->head == NULL){
        return pushFront(lst, data);
    } else if (lst->head->next == NULL){
        return pushEnd(lst,data);
    } else {
        Node * newNode, * front, * back;
        newNode = createNode(data);
        if (newNode== NULL){
            return false;
        } else {
            front = getNode(lst->head, ((lst->size-1)/2));
            back = front->next;

            front->next = newNode;
            newNode->next = back;
        }
    }
    lst->size++;
    return true;
}

bool pushEnd(SLList * lst, int data){
    if (lst->head == NULL){
        return pushFront(lst, data);
    } else {
        Node * newNode = createNode(data);
        if (newNode== NULL){
            return false;
        } else {
            lst->tail->next = newNode;
            lst->tail = newNode;
        }
    }
    lst->size++;
    return true;
}

bool removeData(SLList * lst, rem front, rem end){
    return (lst->head->next == NULL)? front(lst) : end(lst);
}

bool popFront(SLList * lst){
    if (lst->head == NULL){
        return false;
    } else {
        Node * node = lst->head;
        lst->head = node->next;
        free(node);
    }
    lst->size--;    
    return true;
}

bool popMiddle(SLList * lst){
    if (lst->head== NULL){
        return false;
    } else {
        Node * front, * back, * toDel;
        front = getNode(lst->head, ((lst->size-1)/2));
        toDel = front->next;
        back = toDel->next;

        front->next = back;
        free(toDel);
    }
    lst->size--;
    return true;
}

bool popEnd(SLList * lst){
    if (lst->head ==NULL){
        return false;
    } else {
        Node * node = getNode(lst->head, (lst->size -2));

        node->next = NULL;
        free(lst->tail);
        lst->tail = node;
    }
    lst->size--;
    return true;
}

void traverse(SLList * lst){
    Node * tmp; int i =0 ;

    if (lst->head == NULL){
        printf("\n~~~ List is Empty ~~~\n");
    } else {
        tmp = lst->head;
        while (tmp != NULL){
            printf("\t > Index[%d] : %d\n", i++,tmp->data);
            tmp = tmp->next; 
        }
    }
    return; 
}

void status(SLList * lst){
    if (lst->head != NULL){
        printf(" > Head Node : %d\n", lst->head->data);
        printf(" > Tail Node : %d\n", lst->tail->data);
        printf(" > Contents  : \n");
        traverse(lst);
    } else {
        printf("\n~~~ List is Empty ~~~\n");
    }
    return;
}

bool isEmpty(SLList * lst){
    return (lst->size == 0);
}

bool linear_search(SLList * lst,  int data){
    if (lst->head == NULL){
        return false;
    } else {    
        Node * tmp = lst->head;
        while (tmp!=NULL){
            if (tmp->data != data){
                return false;
            }
            tmp = tmp->next;
        }
    }
    return true;
}

bool reverse(SLList * lst){
    if (lst->head == NULL){
        return false;
    } else {
        Node * prev=NULL, * next=NULL ;
        Node * current = lst->head;
        lst->tail = lst->head;
        while (current!= NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        lst->head = prev;
    }
    return true;
}

bool updateData(SLList * lst, int index, int data){
    if (lst->head == NULL){
        return false;
    } else {
        if(index > 0 && index < lst->size){
            Node * tmp = getNode(lst->head, index);
            tmp->data = data;
            return true;
        } else {
            return false;
        }
    }
}

void deleteList(SLList * lst){
    free(lst->head);
    free(lst->tail);
    return;
}
