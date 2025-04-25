#define BOOST_TEST_MODULE HelloWorldTest
#include <boost/test/included/unit_test.hpp>

#include "hello_world.h"

BOOST_AUTO_TEST_SUITE(hello_world_should)

BOOST_AUTO_TEST_CASE(return_hello_world)
{
    BOOST_CHECK_EQUAL(hello_world(), "Hello, World!");
}

BOOST_AUTO_TEST_CASE(message_is_not_empty)
{
    BOOST_CHECK(!hello_world().empty());
}

BOOST_AUTO_TEST_SUITE_END()