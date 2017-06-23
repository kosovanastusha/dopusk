#include <ctest.h>
#include <../src/function.h>

// Proverka
CTEST(Test_1_proverka, input_1)
{
    int result = Proverka(1);
	
    int expected = 2;
	
    ASSERT_EQUAL(expected, result);
}

CTEST(Test_2_proverka, input_m_1)
{
    int result = Proverka(-1);
	
    int expected = 1;
	
    ASSERT_EQUAL(expected, result);
}

CTEST(Test_3_proverka, input_0)
{
    int result = Proverka(0);
	
    int expected = 0;
	
    ASSERT_EQUAL(expected, result);
}
