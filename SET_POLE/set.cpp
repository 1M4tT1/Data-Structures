//
// Created by cerve on 31. 3. 2024.
//
#include "set.h"
#include <iostream>
#include <cstdlib>

int*s;
int maxCAP,item;


void s_init(int maxC)
{
    s= new int[maxC];
    maxCAP = maxC;
    for(int i=0;i<maxCAP;i++)
    {
        s[i] = -1;
    }
}
void s_put(int item)
{
    for(int i=0;i<maxCAP;i++)
    {
        if(s[i] == -1)
        {
            s[i] = item;
            break;
        }
    }
}
bool s_exists(int item)
{
    for(int i=0;i<maxCAP;i++)
    {
        if(s[i] == item)
            return true;
    }
    return false;
}
int s_get()
{
    int pom,item;
    if(s_isEmpty())
        return -1;

    do {
        pom = rand() % maxCAP;
    }while(s[pom] == -1);

    item = s[pom];
    s[pom] = -1;
    return item;



}
bool s_isEmpty()
{
    for(int i=0;i<maxCAP;i++)
    {
        if(s[i] != -1)
            return false;
    }
    return true;
}
void s_destroy()
{
    delete [] s;
}