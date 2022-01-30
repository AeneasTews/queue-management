//
//  Queue.cpp
//  Queue management
//
//  Created by Aeneas Tews on 20.01.22.
//

#include "Queue.hpp"
#include <iostream>

using namespace std;

template <class T>
Queue<T>::Queue(int size)
: size(0)
{
    queue = new T[size];
}

template <class T>
void Queue<T>::add(T item)
{
    queue[size] = item;
    size++;
}

template <class T>
void Queue<T>::add(T item, int position)
{
    if (position > size - 1)
        cout << "Queue only has " << size << " position" << endl;
    else
    {
        for (int i = size; i > position; i--) {
            queue[i] = queue[i-1];
        }
    
        queue[position] = item;
    }
}

template <class T>
void Queue<T>::remove(int position){
    if (position == -1)
        queue[size - 1] = NULL;
    else
    {
        for (int i = position; i < size; i++) {
            queue[i] = queue [i + 1];
        }
    }
    size--;
}

template <class T>
void Queue<T>::print(int position)
{
    if (position == -1) {
        for (int i = 0; i < size; i++) {
            cout << queue[i] << " <- ";
        }
    }else
    {
        cout << queue[position];
    }
    
    cout << endl;
}

template <class T>
T Queue<T>::getItem(int position)
{
    if (position >= size) {
        cout << "Out of range";
        return NULL;
    }
    
    return queue[position];
}

template <class T>
void Queue<T>::setItem(T Item, int position)
{
    queue[position] = Item;
}

template <class T>
Queue<T> operator+(Queue<T> q1, Queue<T> q2)
{
    Queue q(q1.size + q2.size);
    
    for (int i = 0; i < q1.size; i++) {
        q.add(q1.getItem(i));
    }
    
    for (int i = 0; i < q2.size; i++) {
        q.add(q2.getItem(i));
    }
    
    return q;
}

/*int Queue<T>::sum(int start, int end)
{
    if (end == -1)
        end = size - 1;
    int sum = 0;
    
    for (int i = start; i <= end; i++) {
        sum += getItem(i);
    }
    
    return sum;
}*/
