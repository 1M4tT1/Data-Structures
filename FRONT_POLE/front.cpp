//
// Created by cerve on 31. 3. 2024.
//
#include "front.h"
#include <iostream>
int *f;
int item,head,tail,maxCAP;

void f_init(int maxC)
{
    f= new int[maxC];
    head = 0;
    tail = 0;
    maxCAP = maxC;
}
void f_put(int item)
{
    f[head++] = item;
    head = head % maxCAP;
}
bool f_isEmpty()
{
    return tail == head;
}
int f_get()
{
    int pom;
    pom = f[tail++];
    tail = tail % maxCAP;
    return pom;
}
bool f_exists(int item)
{
    for(int i=0;i< maxCAP;i++)
    {
        if(f[i] == item)
            return true;
    }
    return false;
}
void f_destroy()
{
    delete[] f;
}