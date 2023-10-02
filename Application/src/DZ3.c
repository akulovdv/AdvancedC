/*
1. Создайте функцию, которая будет измерять время работы другой функции и возвращать время работы в милисекундах.
Функция, время работы которой надо измерить (и параметры для неё при необходимости) должны передаваться в качестве параметров.

2. Создайте библиотеку из функции замеряющей время.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "MyLib.h"


void func_On(int x);
void func_On2(int x);

int main(void)
{
	int n=INT_MAX/100000;
	run_time_meter(func_On,n);
	run_time_meter(func_On2,n);
	return EXIT_SUCCESS;
}



void func_On(int x)
{
	printf("FUNC=%s, x=%d\n",__FUNCTION__,x);
	volatile int tmp;
	tmp=1;
	for(int i=0;i<x;i++)
	{
		tmp=tmp*i;
	}
}

void func_On2(int x)
{
	printf("FUNC=%s, x=%d\n",__FUNCTION__,x);
	volatile int tmp;
	tmp=1;
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<x;j++)
		{
			tmp=tmp*i;
		}
	}
}
