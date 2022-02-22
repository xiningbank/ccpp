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
	if (NULL == pHead->pNext) {
		return pHead;
	}
    NODE* fast = NULL;
    NODE* slow = NULL;
    while (pHead) {
	  fast = pHead->pNext;
	  pHead->pNext = slow;
	  slow = pHead;
	  pHead = fast;
    }
    return slow;
}

NODE* createList(int nLength) {
	return NULL;
}

int main() {
    NODE* pHead = (NODE*)malloc(sizeof(NODE));
    NODE* pTmp = pHead;
    int length = 4;
    for (int i = 1; i < length; i++) {
        NODE* pNode = (NODE*)malloc(sizeof(NODE));
        pNode->value = i;
        pNode->pNext = NULL;

        pTmp->pNext = pNode;
        pTmp = pNode;
    }

   pHead = reverseLinkedList(pHead);

    pTmp = pHead;
    while (NULL != pTmp) {
        printf("value: %d\n", pTmp->value);
        pTmp = pTmp->pNext;
    }

//    free(pHead);

    return 0;
}
