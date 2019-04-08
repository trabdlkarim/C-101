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
    
    roll_six_sided_dice(50);
    
    printf("\n-----------------------Craps game party-------------------\n");
    craps_dice_game();
    
    return (EXIT_SUCCESS);
}

