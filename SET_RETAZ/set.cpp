//
// Created by cerve on 2. 4. 2024.
//
#include "set.h"
#include <iostream>

set *s_init()
{
    return new set{
        0,
        NULL
    };
}
bool s_isEmpty(set*s)
{
    return s->head == NULL;
}
bool s_exists(set*s,int item)
{
    if(s_findItem(s,item) == NULL)
        return false;
    else
        return true;
}
set_node *s_findItem(set*s,int item)
{
    if(s_isEmpty(s))
        return NULL;

    auto x = s->head;
    while(x != NULL)
    {
        if(x->item == item)
            return x;
        else
        {
            x = x->previous;
        }
    }
    return NULL;
}
void s_put(set*s,int item)
{
    if(s->head == NULL)
    {
        s->head = new set_node{
                item,
                NULL,
                s->head
        };
        s->count+=1;
    }
    else if (s_exists(s, item))
    {
       return;
    }
    else
    {
        s->head->next = new set_node{
            item,
            NULL,
            s->head
        };
        s->head = s->head->next;
        s->count+=1;
    }
}
int s_remove(set*s,int item)
{
    auto pom = s_findItem(s,item);
    auto value = pom->item;
    if(pom->previous == NULL)
        pom->next->previous = pom->previous;
    if(pom->next == NULL)
        pom->previous->next = pom->next;
    if(pom->next != NULL)
    {
        pom->previous->next = pom->next;
        pom->next->previous = pom->previous;
    }
    if(pom->previous != NULL)
    {
        pom->previous->next = pom->next;
        pom->next->previous = pom->previous;
    }


}
void s_destroy(set*s)
{

}