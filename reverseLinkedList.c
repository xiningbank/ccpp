//
// Created by william on 2022/2/22.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node* pNext;
} NODE;

NODE* reverseLinkedList(NODE* pHead) {
    NODE* pTmp = pHead;
//    while (NULL != pTmp) {
//        pTmp->pNext = pTmp;
//    }

    return pTmp;
}

int main() {
    int length = 4;
    NODE* pHead = (NODE*)malloc(sizeof(NODE));
    NODE* pTmp = pHead;
    for (int i = 0; i < length; i++) {
        NODE* pNode = (NODE*)malloc(sizeof(NODE));
        pNode->value = i;
        pNode->pNext = NULL;

        pTmp->pNext = pNode;
        pTmp = pTmp->pNext;
    }

//    pHead = reverseLinkedList(pHead);

    pTmp = pHead;
    while (NULL != pTmp) {
        printf("i: %d\n", pTmp->value);
        pTmp = pTmp->pNext;
    }

//    free(pHead);

    return 0;
}
