//
//  Queue.cpp
//  Queue management
//
//  Created by Aeneas Tews on 20.01.22.
//

#include "Queue.hpp"
#include <iostream>

using namespace std;

Queue::Queue(int size)
: size(0)
{
    queue = new int[size];
}

void Queue::add(int item)
{
    queue[size] = item;
    size++;
}

void Queue::add(int item, int position)
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

void Queue::remove(int position){
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

void Queue::print(int position)
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

int Queue::getItem(int position)
{
    if (position >= size) {
        cout << "Out of range";
        return NULL;
    }
    
    return queue[position];
}

void Queue::setItem(int Item, int position)
{
    queue[position] = Item;
}

int Queue::sum(int start, int end)
{
    if (end == -1)
        end = size - 1;
    int sum = 0;
    
    for (int i = start; i <= end; i++) {
        sum += getItem(i);
    }
    
    return sum;
}

Queue operator+(Queue q1, Queue q2)
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
