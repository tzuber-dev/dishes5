#include <string>

#include "hello.hpp"


#include <iostream>


using namespace std;


QueueTees::QueueTees() {
    forward = 0;
    backward = 0;
    sizeatthemoment =0;


    for (int x=0; x<allowedspace;x++) {
        cuties[x] = nullptr;
    }
};


void QueueTees::enqueue(Cutie *cutie) {
    if (fullsize()) {
        std::cout<<"Unfortunately, the list is full."<<std::endl;
        return;
    };


    cuties[backward] = cutie;
    backward = (backward +1) % allowedspace;
    sizeatthemoment++;
};


Cutie *QueueTees::dequeue() {
    if (notfullsize()) {
        std::cout<<"Unfortunately, the list is empty."<<std::endl;
        return nullptr;
    }


    Cutie* cutie = cuties[forward];


    cuties[forward] = nullptr;
    forward = (forward + 1) % allowedspace;
    sizeatthemoment--;
    return cutie;

};


int QueueTees::size() {
    return sizeatthemoment;
};


bool QueueTees::fullsize() {
    return sizeatthemoment == allowedspace;
};


bool QueueTees::notfullsize() {
    return sizeatthemoment == 0;
};



