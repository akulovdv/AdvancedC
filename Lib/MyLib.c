/*
 * MyLib.c
 *
 *  Created on: 2 окт. 2023 г.
 *      Author: mirazh
 */

#ifndef MYLIB_C_
#define MYLIB_C_

#include "MyLib.h"

void run_time_meter(void (*f)(int),int a)
{
	clock_t time_start;
	clock_t time_end;
	clock_t time_run;

	time_start=clock();
    // здесь выполняется некоторый код
	f(a);
	time_end=clock();
	time_run=time_end-time_start;
	printf("RUN time %f ms\n", ((double)time_run/CLOCKS_PER_SEC)*1000);
};

#endif /* MYLIB_C_ */
