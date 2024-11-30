//
//  worksheet_48.cpp
//  C_ Project
//
//  Created by 이범수 on 10/31/24.
//

#include <stdio.h>
void printArr(int a[])
{
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    printArr(a);
    
}
