//
//  main.cpp
//  queue-management
//
//  Created by Aeneas Tews on 20.01.22.
//

#include <iostream>
#include "Queue.hpp"
#include "Queue2.hpp"

int main(int argc, const char * argv[]) {
    
    Queue q1;
    Queue q2;
    
    for (int i = 0; i < 30; i += 2) {
        q1.add(i);
    }
    
    q2.add(3); q2.add(7); q2.add(5); q2.add(10);
    
    Queue q = q1 + q2;
    q.print();
    
    Queue q3 = q2 + q1;
    q3.print();
    
    std::cout << q2.sum(0, 3) << std::endl;
    
    Queue2 q2_1;
    
    q2_1.add(3); q2_1.add(5); q2_1.add(7);
    q2_1.print();
    
    return 0;
}
