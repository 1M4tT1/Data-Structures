//
// Created by cerve on 31. 3. 2024.
//
#include <iostream>
#include "stack.h"

int *s;
int maxCap,item,head;

void s_init(int MaxC)
{
    s = new int(MaxC);
    maxCap = MaxC;
    head = -1;
}
void s_put(int item)
{
    if (head == maxCap) {
        return;
    }
    else
    {
        s[++head] = item;
    }
}
int s_get()
{
    if(s_isEmpty())
    {
        return -1;
    }
    return s[head--];

}
bool s_isEmpty()
{
    if (head <= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void s_destroy()
{
    delete(s);
}
