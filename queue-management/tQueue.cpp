//
//  tQueue.cpp
//  queue-management
//
//  Created by Aeneas Tews on 25.01.22.
//

#include "tQueue.hpp"
#include <iostream>

template <class T>
tQueue<T>::tQueue(int size)
: size(0)
{
    queue = new T[size];
}

template <class T>
void tQueue<T>::add(T item, int position)
{
    if (position != -1 && (position >= size || position < 0))
    {
        std::cout << position << " is out of range!";
        return;
    }else if (position == -1)
    {
        queue[size] = item;
        size++;
        return;
    }else
    {
        for (int i = size - 1; i > position; i--) {
            queue[i + 1] = queue[i];
        }
        
        queue[position] = item;
        size++;
    }
}

template <class T>
void tQueue<T>::remove(int position)
{
    if (position != -1 && (position >= size || position < 0))
    {
        std::cout << position << " is out of range!";
        return;
    }else if (position == -1)
    {
        queue[size - 1] = NULL;
        size--;
    }
}

template <class T>
T tQueue<T>::getItem(int position)
{
    return queue[position];
}

template <class T>
void tQueue<T>::setItem(T item, int position)
{
    queue[position] = item;
}

template <class T>
void tQueue<T>::print(int position)
{
    if (position != -1 && (position >= size || position < 0))
    {
        std::cout << position << " is out of range!";
        return;
    }else if (position == -1)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << queue[i] << " <- ";
        }
    }else
    {
        std::cout << queue[position];
    }
    
    std::cout << std::endl;
}

