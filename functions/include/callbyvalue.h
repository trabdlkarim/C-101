/* 
 * File:   callbyvalue.h
 * Author: trabdlkarim
 *
 */

#ifndef CALLBYVALUE_H
#define CALLBYVALUE_H

#ifdef __cplusplus
extern "C" {
#endif

void roll_six_sided_dice(int n);
int generate_rand_num(int limit);

long factorial_loop(long n);
long factorial_rec(long n);
long factorial_tail(long n);

long fibonacci( long n );

#ifdef __cplusplus
}
#endif

#endif /* CALLBYVALUE_H */

