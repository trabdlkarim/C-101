/* 
 * File:   main.c
 * Author: trabdlkarim
 *
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *  Simple Hello World Program in C
 */
int main(int argc, char** argv) {
    
    char name[10];
    
    printf("What is your name? ");
    scanf("%s",name);
    
    printf("Hello %s, nice to meet!!!",name);

    return 0;
}

