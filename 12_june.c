#include<stdio.h>
#include<stdlib.h>
struct Link{
    int data;
    struct Link *next; //creating object for the structure
    };
typedef struct Link Link;  //redefining structure Link to only Link
//creating the function for printing the code
void printList( Link *start)
{
    if (start -> next)
    {   //every time when you hit this 'if block'
//        the value is stored in a stack check online for figures
//        so the stack follows LIFO and as following the function call we can figure out what are the values that get stored in the stack and in which order
//        the order will be 
//        50
//        40
//        30
//        20
//        10

        printList(start -> next);//recursive way calling printList
    }
    printf("%d\n",start->data);
}

int main()
{
    //pointer variable *var is created using the '*' symbol
    //dynamically created
    // and assigned the value 10 using the -> operator
    //now var points to address of data
    Link *var = malloc(sizeof(Link));
    var->data = 10;

    //now we create a node next dynamically
    //variable points to this next
    var->next = (Link*)malloc(sizeof(Link));
    //now the next which is created above points to data value
    var->next->data = 20;

    var->next->next = (Link*)malloc(sizeof(Link));
    var->next->next->data = 30;

    var->next->next->next = (Link*)malloc(sizeof(Link));
    var->next->next->next->data = 40;

    var->next->next->next->next = (Link*)malloc(sizeof(Link));
    var->next->next->next->next->data = 50;

    var->next->next->next->next->next = NULL;

    printList(var);
    return 0;
}
