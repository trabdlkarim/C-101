/* 
 * File:   callbyvalue.c
 * Author: trabdlkarim
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * 
 */
int generate_rand_num(int limit){
    // Shifted, scaled integers produced by 1 + rand() % limit 
    return 1 + (rand() % limit);
}

void roll_six_sided_dice(int n){
    
    int counter, face; 
    int freq1 = 0, freq2 = 0, freq3 = 0,freq4 = 0, freq5 = 0, freq6 = 0;
    
    
    // seed random number generator
    srand(time(NULL));
    
    // loop n times
    for(counter=1; counter <= n; counter++){
        face = generate_rand_num(6);
        switch(face){
            case 1:
                freq1++;
                break;
            case 2:
                freq2++;
                break;
            case 3:
                freq3++;
                break;
            case 4:
                freq4++;
                break;
            case 5:
                freq5++;
                break;
            case 6:
                freq6++;
                break;
        }
        // pick random number from 1 to 6 and output it 
        printf("%10d", face);
        
        // if counter is divisible by 5, begin new line of output 
        if (counter % 5 == 0) printf("\n");
    }
    // display results in tabular format
    printf("\n%13s  %13s\n","Face:","Frequency:" );
    printf("%10d %10d\n", 1, freq1);
    printf("%10d %10d\n", 2, freq2);
    printf("%10d %10d\n", 3, freq3);
    printf("%10d %10d\n", 4, freq4);
    printf("%10d %10d\n", 5, freq5);
    printf("%10d %10d\n", 6, freq6);

}

int factorial_loop(int n){
    
    int total = 1;
    for(int i =1;i<=n;i++)total *= i;
    return total;
}

int factorial_rec(int n){
    if (n < 1) return 1;
    else return n*factorial_rec(n-1);
}

int helper_tail(int n, int total){
    if (n<1)return total;
    else return helper_tail(n-1, total*=n);
}

int factorial_tail(int n){
     return helper_tail(n,1);
}