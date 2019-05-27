/* 
 * File:   main.c
 * Author: trabdlkarim
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "include/arrays.h"

#define SIZE 30

/*
 * Histogram printing program 
 */
int main(int argc, char** argv) {
    
   
    int array[ SIZE ];
    init_array(SIZE,array) ;
    print_array(SIZE,array);
    frequency(SIZE,array);
    
    return (EXIT_SUCCESS);
}

