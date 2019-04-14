/* 
 * File:   main.c
 * Author: trabdlkarim
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "include/myfunctions.h"
#include "include/game.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
    int n;
    
    //roll_six_sided_dice(50);
    //printf("\nCraps game party:\n");
    //craps_dice_game();
    
    printf("facotorial (loop) of 5: %ld\n",factorial_loop(20));
    printf("facotorial (recursion) of 5: %ld\n",factorial_rec(20));
    printf("facotorial (tail) of 5: %ld\n",factorial_tail(20));
    
    return (EXIT_SUCCESS);
}

