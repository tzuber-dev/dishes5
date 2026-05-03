#include <iostream>

#include "src/hello.hpp"


class puppy : public Cutie {
public:
    puppy() : Cutie("puppyobject", 10){};


    string get_description() {
        return "puppy";
    };


    int get_cuteness_rating() {
        return 10;
    };
};


class PygmyMarmoset : public Cutie {
public:
    PygmyMarmoset() : Cutie("PygmyMarmoset", 4){};
    string get_description() {
        return "PygmyMarmoset";
    };
    int get_cuteness_rating() {
        return 4;
    };
};


class kitty: public Cutie {
    public:
kitty() : Cutie("kittyobject", 5){};

    string get_description() {
        return "kitty";
    };

    int get_cuteness_rating() {
        return 5;
    };
};










int main() {



    puppy puppyobject;
    kitty kittyobject;
    PygmyMarmoset PygmyMarmosetobject;


    QueueTees queueobject;


    std::cout<<"Beginning size of list: "<<queueobject.size()<<std::endl;

    queueobject.enqueue(&puppyobject);
    queueobject.enqueue(&kittyobject);
    queueobject.enqueue(&PygmyMarmosetobject);


    std::cout<<"Size of list after enqueue: "<<queueobject.size()<<std::endl;


    Cutie* priority = queueobject.dequeue();
    std::cout<<"List after dequeued: "<<priority->get_description()<<std::endl;



    Cutie* secondary = queueobject.dequeue();
    std::cout<<"List after dequeued: "<<secondary->get_description()<<std::endl;



    Cutie* third = queueobject.dequeue();
    std::cout<<"List after dequeued: "<<third->get_description()<<std::endl;


    std::cout<<"Size at the end: "<<queueobject.size()<<std::endl;


    return 0;






};