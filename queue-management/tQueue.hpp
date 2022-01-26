//
//  tQueue.hpp
//  queue-management
//
//  Created by Aeneas Tews on 25.01.22.
//

#ifndef tQueue_hpp
#define tQueue_hpp

#include <stdio.h>
#include <iostream>

template <class T>
class tQueue {
public:
    tQueue(int size = 100);
    void add(T item, int position = -1);
    void remove(int position = -1);
    T getItem(int position);
    void setItem(T item, int position);
    void print(int position = -1);
    
private:
    T* queue;
    int size;
};

#endif /* tQueue_hpp */
