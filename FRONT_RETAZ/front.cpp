//
// Created by cerve on 1. 4. 2024.
//
#include "front.h"
#include <iostream>

front* f_init()
{
   return new front{
       0,
       NULL,
       NULL
   };
}
bool f_isEmpty(front*f)
{
    return f->head == NULL;
}
bool f_exists(front*f,int item)
{
    if(f_isEmpty(f))
        return false;
    auto pom = f->head;
    do {
        if(pom->item == item)
            return true;
        else
        {
            pom = pom->next;
        }
    }while(pom->next != f->head->next);
    return false;

}
void f_put(front*f,int item)
{
    if (f->head == NULL)
    {
        f->head=f->tail= new front_node;
        f->head->item=item;
        f->head->next = f->tail;
        f->head->previous = f->tail;
        f->count +=1;
    }
    else
    {
        f->tail->next = new front_node{
            item,
            f->head,
            f->tail
        };
        f->tail = f->tail->next;
        f->head->previous = f->tail;
        f->count += 1;
    }
}

int f_get(front*f)
{
    if(f_isEmpty(f))
        return -1;
    if(f->head == f->tail)
    {
        auto value = f->head->item;
        delete f->head;
        f->head = f->tail = NULL;
        f->count = 0;
        return value;
    }
    else
    {
        auto value = f->head->item;
        auto pom = f->head->next;
        delete f->head;
        f->head = pom;
        f->head->previous = f->tail;
        f->tail->next = f->head;
        return value;
    }
}
void f_destroy(front*f)
{
    while(true)
    {
        if(f->head != f->tail)
        {
            auto pom = f->head->next;
            delete f->head;
            f->head = pom;
        }
        else
        {
            delete f->head;
            delete f;
            break;
        }
    }
}