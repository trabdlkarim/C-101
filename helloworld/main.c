/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: trabdlkarim
 *
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    char name[10];
    
    printf("What is your name? ");
    scanf("%s",name);
    
    printf("Hello %s, nice to meet!!!",name);

    return 0;
}

