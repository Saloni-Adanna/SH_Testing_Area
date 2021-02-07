#include "unity.h"
#include "circle.h"
//#include "test_circle.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */

void tearDown(){}

void test_circle(void)
{
  TEST_ASSERT_EQUAL(12.56, circle(2));
  TEST_ASSERT_EQUAL(78.5, circle(5));
}
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(153.86, circle(7));
  //TEST_ASSERT_EQUAL(1, prime());
}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(119, circle(6));
  TEST_ASSERT_EQUAL(180, circle(8));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_circle);
  RUN_TEST(test_zero_one);
  RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}