//
// Created by 绘新 on 2019/3/27.
//

#ifndef _SWAP_H
#define _SWAP_H

void SWAP(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

#endif

#ifndef UNTITLED6_HEAP_SORT_H
#define UNTITLED6_HEAP_SORT_H

void max_heap(int *array, const int pos, const int lim)
{
    int max_pos = pos;
    if ( 2 * pos + 1 < lim && array[2 * pos + 1] > array[max_pos] )
    {
        max_pos = 2 * pos + 1;
    }
    if ( 2 * pos + 2 < lim && array[2 * pos + 2] > array[max_pos] )
    {
        max_pos = 2 * pos + 2;
    }
    if ( pos != max_pos )
    {
        SWAP( &array[pos], &array[max_pos] );
        max_heap( array, max_pos, lim );
    }
}


void heap_sort(int *arr, const int num)
{
    if ( num <= 1 ) { return ; }

    /*建最大堆*/
    int temp_num = num - 1;
    int i = 0;
    for ( i = num - 1; i >= 0; --i )
    {
        /*以arr[i]为根节点构建大顶堆*/
        max_heap(arr, i, num);
    }

    for ( i = num - 1; i > 0; --i , --temp_num )
    {
        SWAP( &arr[0], &arr[temp_num ] );
        /*以arr[0]为根节点构建大顶堆*/
        max_heap( arr, 0, temp_num );
    }
}

#endif //UNTITLED6_HEAP_SORT_H
