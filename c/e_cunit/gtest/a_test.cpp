#include "a_test.hpp"
#include "a.h"

#include <gtest/gtest.h>

class a_test : public ::testing::Test {
    public:
    void SetUp() {
    }

    void TearDown() {
    }

    char *data = "abcdef";
};


TEST_F (a_test, name_of_test) {
    ASSERT_EQ(1, a_f1());

  //  ASSERT_EQ(NULL, createJsonPacket(data, 0));
}


