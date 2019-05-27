/* 
 * File:   array.c
 * Author: trabdlkarim
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gen_rand_num(int a, int b){
    return a + (rand() % b);
}

void init_array(int size, int array[]){
     srand(time(NULL));
     for(int i=0;i<size;i++){
         array[i] = gen_rand_num(1,10);
     }
}
void print_array(int size, int array[]){
    printf("Array: {");
    for(int i=0;i<size;i++) printf("%4d",array[i]);
    printf("  }\n");
}

void frequency(int size, int array[]){
    
    int f = 0, c=0;
    int frequencies[size];
    int groups[size];
    int isPresent = 0;
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(array[i] == array[j]) 
                f++;
        }
        for(int k=0; k<c; k++){
          if(array[i] == groups[k]){
              isPresent = 1;
              break;
          }  
        }
        if(!isPresent){
            groups[c] = array[i];
            frequencies[c] = f;
            c++;
        }
        
        f=0;
        isPresent = 0;
        
    }
    
    printf("\n%6s %17s %10s\n","Value","Frequency","Histogram");
    for(int i=0; i<c;i++){
        printf("%4d %15d     ",groups[i],frequencies[i]);
        for(int j=0;j<frequencies[i];j++)printf("%2c",'*');
        printf("\n");
    }
}

