//
// Created by cerve on 2. 4. 2024.
//

#ifndef SET_RETAZ_SET_H
#define SET_RETAZ_SET_H
struct set{
    int count;
    struct set_node *head;
};

struct set_node{
    int item;
    struct set_node *next;
    struct set_node *previous;
};

set *s_init();
bool s_isEmpty(set*s);
bool s_exists(set*s,int item);
set_node *s_findItem(set*s,int item);
void s_put(set*s,int item);
int s_remove(set*s,int item);
void s_destroy(set*s);

#endif //SET_RETAZ_SET_H

