/* A key/value dict system in C */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TEST TRUE /* Comment this line out to compile without a main function (used when including into another application). */

typedef struct dict_t_struct {
    char *key;
    void *value;
    struct dict_t_struct *next;
} dict_t;

dict_t **dict_alloc(void) {
    return malloc(sizeof(dict_t));
}

void dict_dealloc(dict_t *dict) {
    dict_t *ptr;
    for (ptr = dict; ptr != NULL; ptr = ptr->next) {
        free(ptr);
    }
}

void *dict_getItem(dict_t *dict, char *key) {
    dict_t *ptr;
    for (ptr = dict; ptr != NULL; ptr = ptr->next) {
        if (strcmp(ptr->key, key) == 0) {
            return ptr->value;
        }
    }
    
    return NULL;
}

void dict_addItem(dict_t **dict, char *key, void *value) {
    dict_t *d = malloc(sizeof(struct dict_t_struct));
    d->key = malloc(strlen(key)+1);
    strcpy(d->key, key);
    d->value = value;
    d->next = *dict;
    *dict = d;
}

int dict_size(dict_t *dict) {
    int size = 0;
    
    dict_t *ptr;
    for (ptr = dict; ptr != NULL; ptr = ptr->next) {
        size++;
    }
    
    return size;
}

dict_t **dict_invert(dict_t *dict) {
    dict_t **invert = dict_alloc();
    
    dict_t *ptr;
    for (ptr = dict; ptr != NULL; ptr = ptr->next) {
        dict_addItem(invert, ptr->value, ptr->key);
    }
    
    return invert;
}

#ifdef TEST

int main(int argc, char **argv) {
    /* Create a dict */
    dict_t **dict = dict_alloc();
    
    /* add them again to proof it works */
    dict_addItem(dict, "foo", "bar");
    dict_addItem(dict, "bar", "foo");
    dict_addItem(dict, "bar", "pan");
    
    /* see, here */
    printf("%s %s (size: %i)\n", (char *)dict_getItem(*dict, "foo"), (char *)dict_getItem(*dict, "bar"), dict_size(*dict));
    
    /* invert the dict */
    dict_t **invert = dict_invert(*dict);
    printf("%s %s (size: %i)\n", (char *)dict_getItem(*invert, "bar"), (char *)dict_getItem(*invert, "pan"), dict_size(*invert));
    dict_dealloc(*invert);
    
    dict_dealloc(*dict);
    
    return 0;
}

#endif
