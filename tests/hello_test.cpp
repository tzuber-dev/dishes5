#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"




TEST_CASE( "allowedspace works" ) {
QueueTees waitinglist;
    Cutie* cutiesobject = nullptr;


    for (int x=0; x<10; x++) {
        waitinglist.enqueue(cutiesobject);
    };


    REQUIRE(waitinglist.size() ==10);
    REQUIRE(waitinglist.fullsize()== true) ;


    waitinglist.enqueue(cutiesobject);



}
