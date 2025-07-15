//
// Created by cerve on 1. 4. 2024.
//

#ifndef STACK_RETAZ_STACK_H
#define STACK_RETAZ_STACK_H
struct stack{
    int count;
    struct stack_node*head;
};
struct stack_node{
    int item;
    struct stack_node *next;
};

stack* s_init();
bool s_isEmpty(stack* s);
void s_put(stack*s,int item);
int s_get(stack*s);
void s_destroy(stack*s);
bool s_exists(stack*s, int item);


#endif //STACK_RETAZ_STACK_H
