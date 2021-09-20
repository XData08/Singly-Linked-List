// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ text.c 
#include "singlylinkedlist.h"


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
 */

void main_menu(void){
    system("cls");
    printf(
        "\n\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s",
        "\t<<+==+~~~~~~~~~~~~~~~~~~~~~~+==+>>",
        "\t   ||   SINGLY LINKED LIST   ||",
        "\t<<+==+~~~~~~~~~~~~~~~~~~~~~~+==+>>",
        "\t   ||     Function List      ||",
        "\t   ||    ---------------     ||",
        "\t   ||    [1] InsertData      ||",
        "\t   ||        * pushFront     ||",
        "\t   ||        * pushMiddle    ||",
        "\t   ||        * pushEnd       ||",
        "\t   ||    [2] removeData      ||",
        "\t   ||        * popFront      ||",
        "\t   ||        * popMiddle     ||",
        "\t   ||        * popEnd        ||",
        "\t   ||    [3] updateData      ||",
        "\t   ||    [4] status          ||",
        "\t   ||        * traverse      ||",
        "\t   ||    [5] isEmpty         ||",
        "\t   ||    [6] linear search   ||",
        "\t   ||    [7] reverse         ||",
        "\t   ||    [0] Exit Program    ||",
        "\t<<+==+~~~~~~~~~~~~~~~~~~~~~~+==+>>",
        "\t   ||    Developed by Data   ||",
        "\t<<+==+~~~~~~~~~~~~~~~~~~~~~~+==+>>",
        "\t          Enter choice: "
        ""
    );
    return;
}

void isQuit(void){
    
    printf(
        "\n\n\n%s\n%s\n%s\n%s\n%s\n\n\n\n", 
        "\t<<+==+~~~~~~~~~~~~~~~~~~~~~~~+==+>>",
        "\t   ||   THANK YOU FOR USING!  ||",
        "\t<<+==+~~~~~~~~~~~~~~~~~~~~~~~+==+>>",
        "\t   || Developed by Lirae Data ||",
        "\t<<+==+~~~~~~~~~~~~~~~~~~~~~~~+==+>>"
    );
    return;
}