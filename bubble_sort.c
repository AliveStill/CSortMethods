//
// Created by 绘新 on 2019/3/25.
//

#ifndef UNTITLED6_BUBBLE_SORT_H
#define UNTITLED6_BUBBLE_SORT_H
#include <stdbool.h>

void bubble_sort(int *arr, int num)
{
    bool flag = true;
    int count = 0;
    while (flag)
    {
        flag = false;
        for(int i = 0; i < num - count - 1; ++i)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp_int = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp_int;
                flag = true;
            }
        }
        ++count;
    }
}

/* FIXME, 该算法有误,有待后续调整*/
void debubble_sort(int *arr,const int num)
{
    if ( num <= 1) { return ; }

    bool flag = true;
    int low_count = 0;
    int upp_count = num - 1;
    int temp_int = 0;
    unsigned int i = 0;
    while ( flag && low_count < upp_count )
    {
        flag = false;
        for ( i = low_count; i < upp_count ; ++i )
        {
            if ( arr[i] > arr[i + 1] )
            {
                temp_int = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp_int;
                flag = true;
            }
        }
        --upp_count;
        for ( i = upp_count - 1; i > low_count; --i )
        {
            if ( arr[i] < arr[i - 1] )
            {
                temp_int = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp_int;
                flag = true;
            }
        }
        ++low_count;
    }
}


#endif //UNTITLED6_BUBBLE_SORT_H
