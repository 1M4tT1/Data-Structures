//
// Created by cerve on 1. 4. 2024.
//
#include "stack.h"
#include <iostream>

stack* s_init()
{
    return new stack{
        0,
        NULL
    };
}
bool s_isEmpty(stack* s)
{
    return s->head == NULL;
}
void s_put(stack*s,int item)
{
    auto n = new stack_node{
        item,
        s->head
    };
    s->head = n;
    s->count+=1;
}
int s_get(stack*s)
{
    if(!s_isEmpty(s))
    {
        stack_node *pom;
        int value = s->head->item;
        pom = s->head->next;
        delete s->head;
        s->head = pom;
        s->count -= 1;
        return value;
    }
    return -1;
}
void s_destroy(stack*s)
{
    stack_node* pom;
    while(s->head != NULL)
    {
        pom = s->head->next;
        delete s->head;
        s->head = pom;
    }
    delete s;
}
bool s_exists(stack*s, int item)
{
    auto pom = s->head;
    while(pom != NULL)
    {
        if(pom->item == item)
            return true;
        else
        {
            pom = pom->next;
        }
    }
    return false;
}