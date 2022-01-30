//
//  main.cpp
//  queue-management
//
//  Created by Aeneas Tews on 20.01.22.
//

#include <iostream>
#include "Queue.hpp"
#include "Queue.cpp"

int main(int argc, const char * argv[]) {
    
    Queue<int> q1;
    Queue<int> q2;
    
    for (int i = 0; i < 30; i += 2) {
        q1.add(i);
    }
    
    q2.add(3); q2.add(7); q2.add(5); q2.add(10);
    
    Queue q = q1 + q2;
    q.print();
    
    Queue q3 = q2 + q1;
    q3.print();
    
    //std::cout << q2.sum(0, 3) << std::endl;
    
    return 0;
}
