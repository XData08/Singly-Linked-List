/* =============================>
 *
 *  @Author : Lirae Que Data
 *  @Date   : 09/17/2021
 *  @Topic  : Singly Linked List
 * 
 * =============================> 
 */

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ main.c 
#include "linkedlist.h"


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ main methods [Declaration]
bool isInteger(string input_number);
int input(void);


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Main Function
int main(int argc, char ** argv){
    SLList lst; 
    int choice = 0, data, index;
    char quit;
    initList(&lst);
    while (true){
        main_menu();   
        choice = input(); 

        switch (choice){
            case 1:
                printf("\n\tEnter Element[int] of the Node : ");
                data = input();
                if (insertData(&lst, pushFront, pushEnd, data)){
                    printf("\n\n\t~~~ Successfully Inserted ~~~\n");
                } else {
                    printf("\n\n\t ~~~ Error ~~~\n");
                }
                break; 
            case 2:
                if (removeData(&lst, popFront, popEnd)){
                    printf("\n\n\t~~~ Successfully Removed ~~~\n");
                } else {
                    printf("\n\n\t ~~~ Error ~~~\n");
                }
                break;
            case 3:
                printf("\n\tEnter Index of the Element: ");
                index = input();
                printf("\tEnter Element[int] of the Node: ");
                data = input();

                if (updateData(&lst, index,data)){
                    printf("\n\n\t~~~ Successfully Updated ~~~\n");
                } else {
                    printf("\n\n\t ~~~ Error ~~~\n");
                }
                break;
            case 4:
                printf("\n\n");
                status(&lst);
                break;
            case 5:
                if (isEmpty(&lst)){
                    printf("\n\n\t~~~ List is Empty ~~~\n");
                } else {
                    printf("\n\n\t~~~ List is not Empty ~~~\n");
                }
                break;
            case 6: 
                printf("\n\tEnter Element[int] to search: ");
                scanf("%d", &data);
                if (linear_search(&lst,data)){
                    printf("\n\n\t~~~ Element Found ~~~\n");
                } else {
                    printf("\n\n\t~~~ Element not Found ~~~\n");
                }
                break;
            case 7:
                if(reverse(&lst)){
                    printf("\n\n\t~~~ List is Reversed ~~~\n");
                } else{
                    printf("\n\n\t~~~ Unable to Reverse List ~~~\n");
                }
                break;
            default:
                isQuit();
                return 1;

        }
        printf("\n\n\tPress q to quit else press any: ");
        quit = getch();
        if (quit == 'q' || quit =='Q') break;
    }
    deleteList(&lst);
    isQuit();

    return 0;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ main methods [Body]
bool isInteger(string input_number){
    int length = strlen(input_number);
    for (int i=0; i<length ; i++){
        if (!isdigit(input_number[i])){
            return false;
        }
    }
    return true;
}

int input(void){
    string input_number;
    do{
        fflush(stdin);
        gets(input_number);
    } while (!isInteger(input_number));
    return atoi(input_number);
}
