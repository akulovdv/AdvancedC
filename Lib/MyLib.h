/*
 * MyLib.h
 *
 *  Created on: 2 окт. 2023 г.
 *      Author: mirazh
 */

#ifndef MYLIB_H_
#define MYLIB_H_

#include <time.h>
#include <stdio.h>

//функция измеряющая время работы другой функции
// f(int a);
// a параметр int измеряемой функции

void run_time_meter(void (*f)(int),int a);




#endif /* MYLIB_H_ */
