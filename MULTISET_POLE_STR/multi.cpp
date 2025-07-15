//
// Created by cerve on 1. 4. 2024.
//
#include "multi.h"
#include <iostream>
#include <cstdlib>

multiset*m;
int item,maxCAP;

void m_init(int maxC)
{
    m = new multiset[maxC];

    maxCAP = maxC;
    for(int i=0;i<maxCAP;i++)
    {
        m[i].item = -1;
        m[i].count = 0;
    }
}
bool m_isEmpty()
{
    for(int i=0;i<maxCAP;i++)
    {
        if(m[i].item != -1)
            return false;
    }
    return true;
}
void m_put(int item)
{
    if(m_exists(item))
    {
        for(int i=0;i<maxCAP;i++)
        {
            if(m[i].item == item)
            {
                m[i].count++;
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < maxCAP; i++)
        {
            if (m[i].item == -1)
            {
                m[i].item = item;
                m[i].count++;
                break;
            }
        }
    }
}
bool m_exists(int item)
{
    for(int i=0;i<maxCAP;i++)
    {
        if(m[i].item == item)
            return true;
    }
    return false;
}
void m_del(int item)
{
    for(int i=0;i<maxCAP;i++)
    {
        if(m[i].item == item)
        {
            m[i].item = -1;
            m[i].count = 0;
        }
    }
}
void m_destroy()
{
    delete[] m;
}
int m_get()
{

    if(m_isEmpty())
        return -1;

    int pom,value;
    do {
        pom = rand() % maxCAP;
    }while(m[pom].item == -1);

    value = m[pom].item;
    if(m[pom].count == 1)
    {
        m[pom].item = -1;
    }
    m[pom].count--;
    return value;
}
int m_count()
{
    int pom=0;
    for(int i=0;i<maxCAP;i++)
    {
        if(m[i].count != 0)
            pom+=m[i].count;
    }
    return pom;
}
int m_items()
{
    int pom=0;
    for(int i=0;i<maxCAP;i++)
    {
        if(m[i].item != -1)
            pom++;
    }
    return pom;
}