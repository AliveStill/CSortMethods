#ifndef _SWAP_H
#define _SWAP_H

void SWAP(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

#endif


#ifndef _QUICK_SORT_H
#define _QUICK_SORT_H

/*this was inspired the text on the Internet*/
int find_privot(int *arr, int lower, int upper)
{
    int sta = lower;    ++lower;

    while ( upper > lower )
    {
        while ( arr[sta] < arr[upper] ){ --upper; }
        while ( arr[sta] >= arr[lower] && lower < upper ){ ++lower; }
        if ( lower < upper ) { SWAP( &arr[lower], &arr[upper] ); }
    }

    if ( arr[sta] > arr[upper] ) { SWAP( &arr[upper], &arr[sta] ); }

    return upper;
}

void qsort_range( int *arr, int lower, int upper )
{
    if ( lower >= upper ) { return ; }

    int index = find_privot( arr, lower, upper );
    qsort_range( arr, lower, index -1 );
    qsort_range( arr, index + 1, upper);
}

void quick_sort(int *arr, int num)
{
    /*一般都将范围表达成[x,y]的形式*/
    qsort_range( arr, 0, num-1 );
}


/*this was invented by myself*/
void qsort_range_ind(int *arr, int ori_lower, int ori_upper)
{
    int lower = ori_lower + 1;
    int upper = ori_upper;
    if (lower > upper) {return ;}
    int sta = ori_lower;

    while(upper > lower)
    {
        while(arr[sta] <= arr[upper] && upper > lower){ --upper;}
        while(arr[sta] > arr[lower] && upper > lower){ ++lower;}
        if(lower < upper)SWAP(&arr[lower],&arr[upper]);
    }

    if(arr[sta] > arr[upper])
    {
        SWAP(&arr[upper],&arr[sta]);
        qsort_range(arr,upper+1,ori_upper);
    }else{ qsort_range(arr,upper,ori_upper);}
    qsort_range(arr,ori_lower,upper-1);
}


void quick_sort_ind(int *arr, int num)
{
    /*一般都将范围表达成[x,y]的形式*/
    qsort_range_ind(arr,0,num-1);
}


#endif

/// @TODO 在递归深度超过2logn时转化为堆排序，在规模小于30时使用选择排序
/// @time 3/13/2021
