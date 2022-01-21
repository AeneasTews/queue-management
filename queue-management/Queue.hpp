//
//  Queue.hpp
//  Queue management
//
//  Created by Aeneas Tews on 20.01.22.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>

class Queue {
public:
    Queue(int size = 100);
    void add(int item);
    void add(int item, int position);
    void remove(int position = -1);
    void print(int position = -1);
    int getItem(int position);
    int sum(int start = 0, int end = -1);
    friend Queue operator+(Queue q1, Queue q2);
    
private:
    int *queue;
    int size;
};

Queue operator+(Queue q1, Queue q2);

#endif /* Queue_hpp */
