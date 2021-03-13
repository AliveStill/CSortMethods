//
// Created by 绘新 on 2019/3/25.
//

#ifndef UNTITLED6_SHELL_SORT_H
#define UNTITLED6_SHELL_SORT_H

/*希尔排序*/
void shell_sort(int *arr, int num)
{
    int j = 0;
    int temp = 0;

    for ( int gap = num / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < num; ++i)
        {
            j = i - gap;
            while (j >= 0 && arr[j] > arr[i]) { j -= gap;}
            temp = arr[i];
            for (int k = i; k > j + gap; k -= gap)
            {
                arr[k] = arr[k - gap];
            }
            arr[j + gap] = temp;
        }
    }
}

#endif //UNTITLED6_SHELL_SORT_H
