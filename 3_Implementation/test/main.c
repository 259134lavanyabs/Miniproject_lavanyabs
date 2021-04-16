#include "unity.h"
#include "Student_Record.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_Add_Student(void) {
  Student_t new_Student = {"Smit N Desai", "11", "17bee021@email.com","9.95","basketball","17bee021"};
  TEST_ASSERT_EQUAL(0, Add_Student(&new_Student));
}

void test_Delete_Student(void) {
  Student_t new_Student = {"Dhyeya D Patel", "1", "17bee069@email.com","9.99","kabbadi","17bee069"};
  TEST_ASSERT_EQUAL(0, Add_Student(&new_Student));
  TEST_ASSERT_EQUAL(0, Delete_Student(new_Student.name));
}

void test_Modify_Student(void) {
  Student_t new_Student = {"Preet K Pandit", "5", "17bee059@email.com","9","cricket","17bee059"};
  Student_t new_Student1 = {"Preet K Pandit", "6", "17bee069new@email.com","10","cricket","17bee059"};
  TEST_ASSERT_EQUAL(0, Add_Student(&new_Student));
  TEST_ASSERT_EQUAL(0, Modify_Student(new_Student.name, &new_Student1));
  TEST_ASSERT_EQUAL(0, Delete_Student(new_Student1.name));
}
void test_Search_Student(void) {
  Student_t new_Student = {"xyz patelkumar", "3", "atocnew@email.com","16","baseball","17beee7"};
  TEST_ASSERT_EQUAL(0, Add_Student(&new_Student));
  TEST_ASSERT_EQUAL(0 , Search_Student(new_Student.name));
  TEST_ASSERT_EQUAL(0 , Delete_Student(new_Student.name));
}
void test_Display_Student(void) 
{ 
  TEST_ASSERT_EQUAL(1, Display_Student()>0);
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Add_Student);
  RUN_TEST(test_Delete_Student);
  RUN_TEST(test_Modify_Student);
  RUN_TEST(test_Search_Student);
  RUN_TEST(test_Display_Student);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
