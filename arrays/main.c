/* 
 * File:   main.c
 * Author: trabdlkarim
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

/*
 * Histogram printing program 
 */
int main(int argc, char** argv) {
    
    /* use initializer list to initialize array n */
    int n[ SIZE ] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
    int i; /* outer for counter for array elements */
    int j; /* inner for counter counts *s in each histogram bar */
    
    printf("%10s %13s %13s \n", "Element", "Value", "Histogram" );

    /* for each element of array n, output a bar of the histogram */
    for ( i = 0; i < SIZE; i++ ) {
        printf("%7d %15d     ", i, n[ i ]) ;
        for ( j = 1; j <= n[ i ]; j++ ) { /* print one bar */
             printf( "%2c", '*' );
        } 

       printf( "\n" ); /* end a histogram bar */
    } 
    
    return (EXIT_SUCCESS);
}

