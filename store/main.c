/*
* this example is to simulate the object-oriented programming using c.
*/

#include <stdio.h>
#include <stdlib.h>
#include "store.h"

int main(int argc, char* argv[]) {
    Store* pStore = NULL;
    pStore = new_store(pStore, 1);

    printf("store id: %d\n", pStore->store_id);

    pStore->pfn_set_store_id(pStore, 4015);
    printf("store id: %d\n", pStore->store_id);

    pStore->pfn_set_name(pStore, "Clothes Store.");
    printf("store name: %s\n", pStore->store_name);

    delete_store(pStore);

    return 0;
}