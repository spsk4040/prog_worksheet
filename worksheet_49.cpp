//
//  worksheet_49.cpp
//  C_ Project
//
//  Created by 이범수 on 10/31/24.
//

#include <stdio.h>
void printArray(int a[][4])
{
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    printArray(a);
}

