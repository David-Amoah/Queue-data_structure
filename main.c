#include <stdio.h>
#include <stdlib.h>
#include "queue.h"


// Queue implemented using a circular array
int main() {

    //declare handle type
    QUEUE hQ;

    hQ = queue_init_default();

    if (hQ == NULL) {
        printf("failed to allocate space");
        exit(1);
    }

    if (queue_is_empty(hQ)) {
        printf("It's empty");
    } else {
        printf("It's not empty");
    }

    queue_destroy(&hQ);


    return 0;

}
