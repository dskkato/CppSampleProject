#include "gtest/gtest.h"
#include "../SampleDll/SampleDll.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(0, fnSampleDll());
}