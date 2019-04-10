/* 
 * File:   main.c
 * Author: trabdlkarim
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "include/callbyvalue.h"
#include "include/game.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
    int n;
    
    //roll_six_sided_dice(50);
    //printf("\n-----------------------Craps game party-------------------\n");
    //craps_dice_game();
    
    printf("facotorial (loop) of 5: %d\n",factorial_loop(5));
    printf("facotorial (recursion) of 5: %d\n",factorial_rec(5));
    printf("facotorial (tail) of 5: %d\n",factorial_tail(5));
    return (EXIT_SUCCESS);
}

