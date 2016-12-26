#ifndef A_GENERATE_H
#define A_GENERATE_H


struct _A_INT_TAB;

struct _A_INT_TAB {
   int length,
   int *int
}

typedef _A_INT_TAB A_INT_TAB;


/**
 * @brief Generate compartment of int then mixed up :)
 * @p[in] begin Min value of set.
 * @p[in] end Max value of set
 * @retval Return Mixed up table where maximumly value is begin and minmumly is end.
 */
A_INT_TAB a_generateSetOfInt(int begin, int end)


// aby coś posortować
// int sort(type, tab_of_elemnt, length)
// compare(element , element)
//
#endif
