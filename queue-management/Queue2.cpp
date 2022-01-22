//
//  Queue2.cpp
//  queue-management
//
//  Created by Aeneas Tews on 22.01.22.
//

#include "Queue2.hpp"
#include <iostream>

using namespace std;

void Queue2::print(int position)
{
    if (position == -1) {
        for (int i = 0; i < size; i++) {
            cout << queue[i] << endl;
        }
    }else
    {
        cout << queue[position];
    }
    
    cout << endl;
}
