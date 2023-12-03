#ifndef __STORE_H__
#define __STORE_H__

#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_STORE_NAME  16

// store structure
typedef struct store {
    unsigned int store_id;
    char store_name[MAX_STORE_NAME];
    // it's unnecessary to put formal parameters in function pointer.
    struct store* (*pfn_set_store_id)(/*struct store*, unsigned int*/);
    struct store* (*pfn_set_name)(/*struct store*, const char**/);
} Store;

// delete the store
void delete_store(Store* this) {
    if (NULL != this) {
        free(this);
        this = NULL;
    }
}

// set store ID
Store* set_store_id(Store* this, unsigned int store_id) {
    assert(NULL != this);
    this->store_id = store_id;
    return this;
}

// set store name
Store* set_name(Store* this, const char* p_store_name) {
    assert(NULL != this);
    if (strlen(p_store_name) > MAX_STORE_NAME) {
        printf("the length of store name can not exceed %ld\n", MAX_STORE_NAME);
        delete_store(this);
        exit(1);
    }
    strcpy(this->store_name, p_store_name);
    return this;
}

// new a store
Store* new_store(Store* this, unsigned int store_id) {
    // validation
    if (store_id <= 0) {
        printf("store id must be bigger than 0.\n");
        delete_store(this);
        exit(1);
    }

    delete_store(this);

    this = (Store*)malloc(sizeof(Store));

    // set methods
    this->pfn_set_store_id = set_store_id;
    this->pfn_set_name = set_name;

    // constructor
    this->store_id = store_id;

    return this;
}

#endif // __STORE_H__