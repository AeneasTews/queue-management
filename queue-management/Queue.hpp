//
//  Queue.hpp
//  Queue management
//
//  Created by Aeneas Tews on 20.01.22.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include <iostream>

template <class T>
class Queue {
public:
    Queue(int size = 100);
    void add(T item);
    void add(T item, int position);
    void remove(int position = -1);
    void print(int position = -1);
    T getItem(int position);
    void setItem(T Item, int position);
    //int sum(int start = 0, int end = -1);
    Queue operator+(Queue q1)
    {
        Queue q(q1.size + size);
        
        for (int i = 0; i < size; i++) {
                    q.add(getItem(i));
        }
        
        for (int i = 0; i < q1.size; i++) {
            q.add(q1.getItem(i));
        }
        
        return q;
    }
    
protected:
    T* queue;
    int size;
};

/*template <>
class Queue <int> {
public:
    Queue(int size = 100);
    int sum(int start = 0, int end = -1);
protected:
    int* queue;
    int size;
};*/

#endif /* Queue_hpp */
