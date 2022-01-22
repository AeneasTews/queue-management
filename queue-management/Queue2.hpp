//
//  Queue2.hpp
//  queue-management
//
//  Created by Aeneas Tews on 22.01.22.
//

#ifndef Queue2_hpp
#define Queue2_hpp

#include <stdio.h>
#include "Queue.hpp"

class Queue2 : public Queue
{
public:
    void print(int position = -1);
};

#endif /* Queue2_hpp */
