#include <string>

#include "cutie.hpp"


#include <iostream>



using namespace std;


class QueueTees {
private:
    static const int allowedspace = 10;
    Cutie* cuties[allowedspace];
    int forward;
    int backward;
    int sizeatthemoment;
public:
    QueueTees();
    void enqueue(Cutie* cutie);
    Cutie* dequeue();

    int size();
    bool fullsize();
    bool notfullsize();



};
