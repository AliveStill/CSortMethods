//
// Created by 绘新 on 2019/3/25.
//

#ifndef UNTITLED6_INSERT_SORT_H
#define UNTITLED6_INSERT_SORT_H

int insert_sort(int *arr, int num)
{
    int j = 0;
    int temp = 0;

    for (int i = 1; i < num; ++i)
    {
        j = i - 1;
        while (arr[j] > arr[i] && j >= 0) {--j;}
        temp = arr[i];
        for(int k = i; k > j + 1; --k)
        {
            arr[k] = arr[k - 1];
        }
        arr[j + 1] = temp;
    }
}

#endif //UNTITLED6_INSERT_SORT_H

