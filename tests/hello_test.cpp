#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"




TEST_CASE("queue has some sort of objects during enqueue execution") {
    QueueTees waitinglist;
    Cutie* cutiesobject = nullptr;
    waitinglist.enqueue(cutiesobject);

    REQUIRE(waitinglist.notfullsize() == false);
};



TEST_CASE("enqueue works even after initiating dequeue method") {
    QueueTees waitinglist;
    Cutie* cutiesobject = nullptr;



    for (int x=0; x<10; x++) {
        waitinglist.enqueue(cutiesobject);
    };


    waitinglist.dequeue();


    REQUIRE(waitinglist.size() ==9);
    waitinglist.enqueue(cutiesobject);
    REQUIRE(waitinglist.size() ==10);



};




TEST_CASE( "allowedspace works" ) {
QueueTees waitinglist;
    Cutie* cutiesobject = nullptr;


    for (int x=0; x<10; x++) {
        waitinglist.enqueue(cutiesobject);
    };


    REQUIRE(waitinglist.size() ==10);
    REQUIRE(waitinglist.fullsize()== true) ;


    waitinglist.enqueue(cutiesobject);



};


TEST_CASE("empty queue does not break program but returns nullptr") {
    QueueTees waitinglist;
    Cutie* var1 = waitinglist.dequeue();
    REQUIRE(waitinglist.size() == 0);




    REQUIRE(var1 == nullptr);

};

