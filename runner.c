#include "single_ll.h"

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