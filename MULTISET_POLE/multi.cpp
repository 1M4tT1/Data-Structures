//
// Created by cerve on 1. 4. 2024.
//
#include "multi.h"
#include <iostream>
#include <cstdlib>

int*m,*c;
int item,maxCAP;

void m_init(int maxC)
{
    m = new int[maxC];
    c = new int[maxC];
    maxCAP = maxC;
    for(int i=0;i<maxCAP;i++)
    {
        m[i] = -1;
        c[i] = 0;
    }
}
bool m_isEmpty()
{
    for(int i=0;i<maxCAP;i++)
    {
        if(m[i] != -1)
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
            if(m[i] == item)
            {
                c[i]++;
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < maxCAP; i++)
        {
            if (m[i] == -1)
            {
                m[i] = item;
                c[i]++;
                break;
            }
        }
    }
}
bool m_exists(int item)
{
    for(int i=0;i<maxCAP;i++)
    {
        if(m[i] == item)
            return true;
    }
    return false;
}
void m_del(int item)
{
    for(int i=0;i<maxCAP;i++)
    {
        if(m[i] == item)
        {
            m[i] = -1;
            c[i] = 0;
        }
    }
}
void m_destroy()
{
    delete[] m;
    delete[] c;
}
int m_get()
{

    if(m_isEmpty())
        return -1;

    int pom,value;
    do {
        pom = rand() % maxCAP;
    }while(m[pom] == -1);

    value = m[pom];
    if(c[pom] == 1)
    {
        m[pom] = -1;
    }
    c[pom]--;
    return value;
}
int m_count()
{
  int pom=0;
  for(int i=0;i<maxCAP;i++)
  {
      if(c[i] != 0)
          pom+=c[i];
  }
  return pom;
}
int m_items()
{
    int pom=0;
    for(int i=0;i<maxCAP;i++)
    {
        if(m[i] != -1)
            pom++;
    }
    return pom;
}