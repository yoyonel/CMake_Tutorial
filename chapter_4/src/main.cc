#include <iostream>
  using std::cerr;
  using std::cout;
  using std::endl;

#include "ToDoCore/ToDo.h"
  using ToDoCore::ToDo;

#define EXPECT_EQUAL(test, expect) equalityTest( test,  expect, \
                                                #test, #expect, \
                                                __FILE__, __LINE__)

template < typename T1, typename T2 >
/**
 * @brief
 *
 * @param testValue
 * @param expectedValue
 * @param testName
 * @param expectedName
 * @param fileName
 * @param lineNumber
 * @return int
 */
int equalityTest(const T1    testValue,
                 const T2    expectedValue,
                 const char* testName,
                 const char* expectedName,
                 const char* fileName,
                 const int   lineNumber);


/**
 * @brief
 *
 * @param int
 * @param
 * @return int
 */
int main(
    int,
    char**
)
{
    int result = 0;

    ToDo list;

    list.addTask("write code");
    list.addTask("compile");
    list.addTask("test");

    result |= EXPECT_EQUAL(list.size(),     size_t(3));
    result |= EXPECT_EQUAL(list.getTask(0), "write code");
    result |= EXPECT_EQUAL(list.getTask(1), "compile");
    result |= EXPECT_EQUAL(list.getTask(2), "test");

    if (result == 0)
    {
        cout << "Test passed" << endl;
    }

    return result;
}


template < typename T1, typename T2 >
/**
 * @brief
 *
 * @param testValue
 * @param expectedValue
 * @param testName
 * @param expectedName
 * @param fileName
 * @param lineNumber
 * @return int
 */
int equalityTest(
    const T1    testValue,
    const T2    expectedValue,
    const char* testName,
    const char* expectedName,
    const char* fileName,
    const int   lineNumber
)
{
    if (testValue != expectedValue)
    {
        cerr << fileName << ":" << lineNumber << ": "
             << "Expected " << testName << " "
             << "to equal " << expectedName << " (" << expectedValue << ") "
             << "but it was (" << testValue << ")" << endl;

        return 1;
    }
    else
    {
        return 0;
    }
}
