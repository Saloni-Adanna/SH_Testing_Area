#include "unity.h"
#include "square.h"
//#include "test_square.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */

void tearDown(){}

void test_square(void)
{
  TEST_ASSERT_EQUAL(4, square(2));
  TEST_ASSERT_EQUAL(25, square(5));
}
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(49, square(7));
  //TEST_ASSERT_EQUAL(1, prime());
}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(37, square(6));
  TEST_ASSERT_EQUAL(69, square(8));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_square);
  RUN_TEST(test_zero_one);
  RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}