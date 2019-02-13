/* 
 * File:   helper.c
 * Author: trabdlkarim
 *
 */

#include <stdio.h>

// global variable having its declaration in main.c
extern int count2;
 
void extern_storage_class(void) {
   printf("exten count is equal to %d\n", count2);
}
