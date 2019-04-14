
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../include/game.h"
#include "../include/myfunctions.h"

int roll_two_dices(void){
    
    int dice_1 = generate_rand_num(6);
    int dice_2 = generate_rand_num(6);
    
    int work_sum = dice_1 + dice_2;
    
    printf("Player rolled (%d,%d) => %d\n",dice_1,dice_2,work_sum);
    
    return work_sum; 
}

void craps_dice_game(void){
    
    int player_point = 0;
    enum Status game_status;
    
    srand(time(NULL));
    
    int sum = roll_two_dices();
    
    switch(sum){
        
        // win on first roll 
        case 7:
        case 11:
            game_status = WON;
            break;
       
        // lose on first roll 
        case 2:
        case 3:
        case 12:
            game_status = LOST;
            break;
        
        // remember player point
        default:
            game_status = CONTINUE;
            player_point = sum;
            printf("Player point is: %d\n",player_point);
            break;
    }
    
    if(game_status == WON) printf("Player wins\n");
    else if (game_status == LOST) printf("Player loses\n");
    else{
        while(game_status == CONTINUE){
            sum = roll_two_dices();
            if(sum == player_point){
                game_status = WON;
                printf("Player wins\n");
            }
            else if (sum == 7){
                game_status = LOST;
                printf("Player lost\n");
            }
        }
    }

}