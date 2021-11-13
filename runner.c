#include "single_linked_list.h"
//For the moment this only handles integer data type but slowly I would include for other data types too.
int main(void){
    for (int i=0;i<=15;i++){
        beginsert(i);
        printList();
    }
    head=listreverse(head);
    printList();
    printList();

    listreverseRecursive(NULL,head);
    printList();   
    for(int i=0;i<15;i++){
        lastDelete();
        printList();
    }
    
}