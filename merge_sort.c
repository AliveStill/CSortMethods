//
// Created by 绘新 on 2019/3/30.
//

#ifndef UNTITLED6_MERGE_SORT_H
#define UNTITLED6_MERGE_SORT_H

/*一次归并操作*/
void merge_once(int *arr, int lower, int medium, int upper)
{
    if ( lower >= upper ) { return ; }

    int a[medium - lower + 1];
    int b[upper - medium];
    for ( unsigned int i = 0; i < medium - lower + 1; ++i ) { a[i] = arr[lower + i]; }
    for ( unsigned int j = 0; j < upper - medium; ++j ) { b[j ] = arr[medium + j + 1]; }

    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int index = lower;

    while ( i < medium - lower + 1 && j < upper - medium )
    {
        if ( a[i] <= b[j] ) { arr[index++] = a[i++]; }
        else { arr[index++] = b[j++];}
    }
    while ( i < medium - lower + 1 ) { arr[index++] = a[i++]; }
    while ( j < upper - medium ) { arr[index++] = b[j++]; }
}

void Merge_Sort(int *arr, int lower, int upper)
{
    if ( lower >= upper ) { return ; }

    int medium = ( lower + upper ) / 2;
    /*分部有序*/
    Merge_Sort(arr, lower, medium);
    Merge_Sort(arr, medium + 1, upper);
    /*一次归并*/
    merge_once(arr, lower, medium, upper);
}

/*And this was copied from others ideas, the more simpler and maybe more effective recursion concept*/
/*归并排序*/
void merge_sort(int *arr, int num)
{
    Merge_Sort(arr, 0, num - 1);
}

#endif
