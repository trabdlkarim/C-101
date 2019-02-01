/* 
 * File:   main.c
 * Author: trabdlkarim
 *
 */

#include <stdio.h>
#include <stdlib.h>

/* A C program to demonstrate different storage  classes
 *  
 * Storage Classes are used to describe the features of a variable/function. 
 * These features basically include the scope, visibility and life-time which 
 * help us to trace the existence of a particular variable during the runtime 
 * of a program. 
 * They precede the type that they modify. 
 * We have four different storage classes in a C program:
 * 1- auto
 * 2- register
 * 3- static
 * 4- extern
 */

// static global variable
static int count;

// global variable having its declaration in helper.c
int count2; 

// external function having its definition in helper.c
extern void extern_storage_class();


void auto_storage_class() 
{ 
  
    printf("\nDemonstrating auto class\n\n"); 
  
    // declaring an auto variable (equivalent to "int a=32;") 
    auto int a = 32; 
   
    printf("Value of the variable 'a' declared as auto: %d\n",a); 
  
    printf("--------------------------------"); 
}


void register_storage_class() 
{ 
  
    printf("\nDemonstrating register class\n\n"); 
   
    register char b = 'G'; 
  
    // printing the register variable 'b' 
    printf("Value of the variable 'b' declared as register: %c\n",b); 
 
    printf("--------------------------------"); 
}


void static_storage_class() 
{ 
   // local static variable
   static int i = 5; 
   i++;

   printf("i is %d and count is %d\n", i, count);
} 
 
  
int main(int argc, char** argv) {
    
    
     // demonstrate auto Storage Class 
    auto_storage_class(); 
  
    // demonstrate register Storage Class 
    register_storage_class(); 
  
    // demonstrate static Storage Class 
    while(count--) {
        static_storage_class(); 
    }
    
    // demonstrate extern Storage Class 
    count2 = 5;
    extern_storage_class();

    return (EXIT_SUCCESS);
}

