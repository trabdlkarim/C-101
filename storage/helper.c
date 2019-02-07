/* 
 * File:   helper.c
 * Author: trabdlkarim
 *
 */

#include <stdio.h>

// global variable having its declaration in main.c
extern int count2;
 
void extern_static_class(void) {
   printf("count is %d\n", count2);
}