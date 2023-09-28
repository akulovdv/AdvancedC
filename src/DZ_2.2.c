/*
 ============================================================================
Создайте массив на куче.
Создайте функцию которая формирует массив указателей на значения массива на куче и возвращает его.
Создайте функцию SortPointers, которая принимает массив указателей и сортирует указатели ** по значениям**,
на которые они указывают. Метод сортировки можете использовать любой. Сортировка по возрастанию.
 ============================================================================
 */

enum {SIZE = 7};
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int complite_pointer_arrray(int *pointer_array[],int *heap_mas,int size);
int sort_pointer_array_by_value(int *pointer_array[],int size);


int main(void) {
	int *mas;
	int *p_mas[SIZE];

	mas=malloc(sizeof(*mas)*SIZE);
	printf("addr heap arrray=%p\n",mas);
	// заполним массив на на куче начальными значениями
	srand(time(NULL));
	for(int i=0;i<SIZE;i++)
	{
		printf("addr p_mas[%d]=%p\n",i,p_mas[i]);
	}

	for(int i=0;i<SIZE;i++)
	{
		//*(mas+i)=i*2;
		*(mas+i)=rand()%100;
	}
	// Заполним массив указателями на элементы массива на куче
	complite_pointer_arrray(p_mas, mas, SIZE);
	printf("== unsort array ==\n");
	for(int i=0;i<SIZE;i++)
	{

		printf("index %d add=%p value=%d\n",i,p_mas[i],*p_mas[i]);
	}
	sort_pointer_array_by_value(p_mas, SIZE);
	printf("== after sorting array ==\n");
	for(int i=0;i<SIZE;i++)
	{

		printf("index %d add=%p value=%d\n",i,p_mas[i],*p_mas[i]);
	}
	free(mas);
	return EXIT_SUCCESS;
}

int complite_pointer_arrray(int *pointer_array[],int *heap_mas,int size)
{
	for(int i=0;i<size;i++)
	{
		pointer_array[i]=heap_mas++;
	}
	return 0;
}

int sort_pointer_array_by_value(int *pointer_array[],int size)
{
	//bubble sort
	int *tmp;
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if((((*(*((int **)&pointer_array[j])))))>(*(*((int **)&pointer_array[j+1]))))
			{
				int *tmp=pointer_array[j];
				pointer_array[j]=pointer_array[j+1];
				pointer_array[j+1]=tmp;
			}
		}
	}
	return 0;
}
