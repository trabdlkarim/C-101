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
    printf("How many times do you want to roll the dice? ");
    scanf("%d",&n);
    roll_six_sided_dice(n);
    
    printf("\n-----------------------Craps game party-------------------\n");
    craps_dice_game();
    
    return (EXIT_SUCCESS);
}

