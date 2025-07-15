//
// Created by cerve on 1. 4. 2024.
//

#ifndef FRONT_RETAZ_FRONT_H
#define FRONT_RETAZ_FRONT_H

#include <iostream>

struct front{
    int count;
    struct front_node *head;
    struct front_node *tail;
};

struct front_node{
    int item;
    struct front_node *next;
    struct front_node *previous;
};

front* f_init();
bool f_isEmpty(front*f);
bool f_exists(front*f,int item);
void f_put(front*f,int item);
int f_get(front*f);
void f_destroy(front*f);

#endif //FRONT_RETAZ_FRONT_H
