/* 
 * File:   callbyvalue.c
 * Author: trabdlkarim
 *
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * 
 */
int generate_rand_num(int limit){
    // Shifted, scaled integers produced by 1 + rand() % limit 
    return 1 + (rand() % limit);
}

void roll_six_sided_dice(int n){
    
    int counter;
    
    // seed random number generator
    srand(time(NULL));
    
    // loop n times
    for(counter=1; counter <= n; counter++){
        
        // pick random number from 1 to 6 and output it 
        printf("%10d", generate_rand_num(6));
        
        // if counter is divisible by 5, begin new line of output 
        if (counter % 5 == 0) printf("\n");
    }

}