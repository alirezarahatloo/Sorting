#include <stdio.h>

#define SIZE_OFF_APS_SORT  32


int min_index(int *arr,int i)
{
    if(i == SIZE_OFF_APS_SORT-1)
        return i  ;
    int min_idx_rest = min_index(arr,i+1);
    if(arr[i] < arr[min_idx_rest])
        return i ;
    else
        return min_idx_rest;
}

void swamp(int *a,int *b)
{
    int temp = *a;
    *a = *b ;
    *b = temp;
}

void selection_sort(int *arr,int i)
{
    if( i == SIZE_OFF_APS_SORT)
        return;
    int j = min_index(arr,i);
    swamp(&arr[i],&arr[j]);
    selection_sort(arr,i+1);
}

void print_list(int *list, int i)
{
    if (i == SIZE_OFF_APS_SORT)
        printf("\n");
    else {
        (i != (SIZE_OFF_APS_SORT-1)) ? printf("%i,",list[i]) : printf("%i\n",list[i]);
        print_list(list, i + 1);
    }
}

int main ()
{
    printf("\nHello\n\n");
    int arr[SIZE_OFF_APS_SORT]= {10,6,5,8,12,9,20,31,9,11,13,15,1,2,3,4,5,6,7,31,35,37,39,55,54,65,87,99,101,31,32,5};
    selection_sort(arr,0);
    print_list(arr,0);
    return 0 ;
}
