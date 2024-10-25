//
// Created by David on 10/7/2024.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H
#include "status.h"

typedef void* QUEUE;


//insert
//empty
//service
//front

QUEUE queue_init_default(void);
void queue_destroy(QUEUE* phQ);
Boolean queue_is_empty(QUEUE hq);
Status queue_insert(QUEUE* hq, int value);


#endif //QUEUE_QUEUE_H
