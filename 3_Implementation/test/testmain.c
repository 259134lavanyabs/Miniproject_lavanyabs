#include "unity.h"
#include "Student_Record.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_addstudent(void) {
  Student_t newStudent = {"lavanya", "18", "somanna","bangalore","29/03/1999"};
  TEST_ASSERT_EQUAL(0, addstudent(&newstudent));
}
void test_searchstudent(void) {
  Student_t newstudent = {"18"};
  //TEST_ASSERT_EQUAL(0, Add_Student(&new_Student));
  TEST_ASSERT_EQUAL(0 , searchstudent(newstudent.name));
  //TEST_ASSERT_EQUAL(0 , Delete_Student(new_Student.name));
}

void test_deletestudent(void) {
  Student_t newstudent = {"18"};
  //TEST_ASSERT_EQUAL(0, addstudent(&newstudent));
  TEST_ASSERT_EQUAL(0, deletestudent(studentid));
}

void test_viewstudent(void) 
{ 
  TEST_ASSERT_EQUAL(1, viewstudent()>0);
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addstudent);
  RUN_TEST(test_deletestudent);
  RUN_TEST(test_searchstudent);
  RUN_TEST(test_viewstudent);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
