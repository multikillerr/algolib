#include "single_ll.h"

int main(void){
    for (int i=0;i<=15;i++){
        beginsert(i);
    }
    printList();
    firstDelete();
    printList();
}
