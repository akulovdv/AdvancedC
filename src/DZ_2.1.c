/*
 ============================================================================
Реализуйте функцию Swap, которая принимает два указателя и обменивает местами значения,
на которые указывают эти указатели (нужно обменивать именно сами указатели,
переменные должны оставаться в тех же адресах памяти).
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int  swap_pointer(void**,void**);

int main(void) {
	int a,b;
	int *p_a,*p_b;
	void *pp_a,*pp_b;
	a=1;
	p_a=&a;
	b=2;
	p_b=&b;
	printf("a=%d\n",a);
	printf("p_a=%p\n",p_a);
	pp_a=&p_a;
	printf("addr_p_a=%p\n",pp_a);

	printf("b=%d\n",b);
	printf("p_b=%p\n",p_b);
	pp_b=&p_b;
	printf("addr_p_b=%p\n",pp_b);

	printf("=====\n");
	swap_pointer((void*)&p_a,(void*)&p_b);
	printf("=====\n");

	printf("p_a=%p\n",p_a);

	printf("p_b=%p\n",p_b);




	printf("a=%d\n",*p_a);
	printf("b=%d\n",*p_b);

	return EXIT_SUCCESS;
}

int  swap_pointer(void **pp_a,void **pp_b)
{
	void *tmp_p;

	tmp_p=*pp_a;
	*pp_a=*pp_b;
	*pp_b=tmp_p;

	return 0;
}
