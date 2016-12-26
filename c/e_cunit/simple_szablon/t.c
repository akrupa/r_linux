/*

1. Create collection of tests <=> CU_pSuite
2. Add test to collection of tests <=> CU_add_test

*/ 

#include <stdio.h>
#include <string.h>
#include "CUnit/Basic.h"

/* It is working only in summary */
void get_test_results() { 
    printf(" CU_get_number_of_suites_run()    :%d \n", CU_get_number_of_suites_run());
    printf(" CU_get_number_of_suites_failed() :%d \n", CU_get_number_of_suites_failed());
    printf(" CU_get_number_of_tests_run()     :%d \n", CU_get_number_of_tests_run());
    printf(" CU_get_number_of_tests_failed()  :%d \n", CU_get_number_of_tests_failed());
    printf(" CU_get_number_of_asserts()       :%d \n", CU_get_number_of_asserts());
    printf(" CU_get_number_of_successes()     :%d \n", CU_get_number_of_successes());
    printf(" CU_get_number_of_failures()      :%d \n", CU_get_number_of_failures()  );

}


/////////////////////////////////////////////////// funckcje rozpoczynające i kończące main suit
int init_a_suite(void)
{
printf("------------------------------------------- init:  %s ------\n", __FUNCTION__); 
    return 0;
}

int clean_a_suite(void)
{
printf("\n----------------------------------------- clean: %s------\n", __FUNCTION__); 
      get_test_results();
      return 0;
}


int init_b_suite(void)
{
printf("------------------------------------------- init:  %s ------\n", __FUNCTION__); 
    return 0;
}

int clean_b_suite(void)
{
printf("\n----------------------------------------- clean: %s------\n", __FUNCTION__); 
      return 0;
}


/////////////////////////////////////// kod do przetestowania
//// tego kodu powinien zostać dostarczony w formie biblioteki 
int a_max(int i1, int i2)
{
      return (i1 > i2) ? i1 : i2;
}



//// funkcje do testów

void test_a_max(void)
{
   CU_ASSERT(a_max(0,2) == 2);
   CU_ASSERT(a_max(0,-2) == 0);
   CU_ASSERT(a_max(2,2) == 2);
}


void test_a_max_b(void)
{
   CU_ASSERT(a_max(0,2) == 2);
   CU_ASSERT(a_max(0,-2) == 0);
   CU_ASSERT(a_max(2,2) == 2);
}


// tworzenie zbioru testów
CU_pSuite create_a_main_suit() {

    CU_pSuite pSuite= pSuite = CU_add_suite("Suite a", init_a_suite, clean_a_suite);
    if (!pSuite) {
        return 0;
    }

    CU_add_test(pSuite, "test_max", test_a_max);
   // get_test_results(); // won't work 
    CU_add_test(pSuite, "test_max_b", test_a_max_b);


    return pSuite;
}

// tworzenie zbioru test
CU_pSuite create_b_main_suit() {

    CU_pSuite pSuite= pSuite = CU_add_suite("Suite b", init_b_suite, clean_b_suite);
    if (!pSuite) {
        return 0;
    }

    CU_add_test(pSuite, "test_max", test_a_max);
    CU_add_test(pSuite, "test_max_b", test_a_max_b);
 
    return pSuite;
}

//////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////// MAIN
//////////////////////////////////////////////////////////////////////
int main()
{
   printf("--------------------------------------------- MAIN ------\n"); 
    if (CUE_SUCCESS != CU_initialize_registry())
         return CU_get_error();

     if (!create_a_main_suit()  || !create_b_main_suit()){ // zbiory testów reszta jest tak samo
         CU_cleanup_registry();
         return CU_get_error();
     }


   CU_basic_set_mode(CU_BRM_VERBOSE);// level -- How many informatio you want to see.
     CU_basic_run_tests();
     CU_cleanup_registry();
   printf("\n-------------------------------------------- END MAIN #######\n"); 
     return CU_get_error();
}
