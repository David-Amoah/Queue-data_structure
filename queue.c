//
// Created by David on 10/7/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct queue { //known type
    int* data;
    int size;
    int capacity;
    int index_of_front;
};

typedef struct queue Queue;

QUEUE queue_init_default(void) {
    Queue* pQueue = (Queue*)malloc(sizeof(Queue));

    if (pQueue != NULL) {
        pQueue->size = 0;
        pQueue->capacity = 1;
        pQueue->data = (int*)malloc(sizeof(int) * pQueue->capacity);
        if (pQueue->data == NULL) {
            free(pQueue);
            return NULL;
        }
    }
    return pQueue;
}

void queue_destroy(QUEUE *phQ) {
    Queue* pQueue = (Queue*)*phQ;
    free(pQueue->data);
    free(pQueue);
    *phQ = NULL;
}

Boolean queue_is_empty(QUEUE hq) {
    Queue* pQ = (Queue*)hq;
    return (pQ->size <= 0) ? TRUE : FALSE;
}

Status queue_insert(QUEUE* hq, int value) {
    Queue* pQueue = (Queue*)hq;
    int* temp;
    if(pQueue->size >= pQueue->capacity) { //there is not enough room so we make room
        temp = (int*)malloc(sizeof(int) * (pQueue->capacity * 2));
        if (temp == NULL) {
            return FAILURE;
        }
        for (int i = 0; i < pQueue->size; i++) {
            temp[i]
        }
    }

}
