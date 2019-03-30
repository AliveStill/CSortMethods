#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "quick_sort.h"
#include "select_sort.h"
#include "insert_sort.h"
#include "bubble_sort.h"
#include "shell_sort.h"
#include "heap_sort.h"
#include "merge_sort.h"


#define NUMBER 1000000

void generate_random(int *, int);
void print_array(const int *, int);
bool check_valid(const int *, int);

int a[NUMBER];

int main(int argc, char **argv)
{
    clock_t start_time = 0;
    clock_t end_time = 0;


//    开始对各个排序算法进行效率分析
    generate_random(a,NUMBER);

    start_time = clock();

//    quick_sort(a,NUMBER);
//    quick_sort_ind(a, NUMBER);//These two functions have similar efficiency, due to the same methods and different code
//    qsort_range(a,0,5);
//    select_sort(a,NUMBER);
//    insert_sort(a,NUMBER);
//    debubble_sort(a,NUMBER);
//    bubble_sort(a,NUMBER);
//    shell_sort(a,NUMBER);
//    heap_sort(a,NUMBER);
    merge_sort(a,NUMBER);

    end_time = clock();
//    print_array(a,NUMBER);

    if ( check_valid(a, NUMBER) ) { puts("\nThe algorithm is valid.");}
    else { puts("\nInvalid, please check again."); exit(0); }

    printf("Sorting %d numbers cost %ld ms",NUMBER,end_time - start_time);

    return 0;
}

void generate_random(int *array, int num)
{

    srand(time(NULL));
    for ( int i = 0; i < num; ++i )
    {
        array[i] = rand() % NUMBER;
    }
}


bool check_valid(const int *arr, int num)
{
    for ( int i = 0; i < num - 1; ++i )
    {
        if ( arr[i] > arr[i + 1]) { return false; }
    }

    return true;
}

void print_array(const int *arr, int num)
{
    for(int i = 0; i < NUMBER; ++i)
    {
        if ( i && i % 10 == 0 ) { puts(""); }
        printf("%5d ",arr[i]);
    }
}
