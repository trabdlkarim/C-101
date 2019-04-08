/* 
 * File:   game.h
 * Author: trabdlkarim
 *
 */

#ifndef GAME_H
#define GAME_H

#ifdef __cplusplus
extern "C" {
#endif
    
    enum Status { CONTINUE, WON, LOST };
   
    void craps_dice_game(void);
    int roll_two_dices(void);

#ifdef __cplusplus
}
#endif

#endif /* GAME_H */

