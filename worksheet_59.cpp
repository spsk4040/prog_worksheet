//
//  worksheet_59.cpp
//  C_ Project
//
//  Created by 이범수 on 11/7/24.
//

#include <stdio.h>
#define SQUARE(x) ((x)*(x))

int main()
{
    int a = 5;
    
    printf("%d\n", SQUARE(a));
    printf("%d\n", SQUARE(a+1));
    printf("%d\n", 100/SQUARE(a));
}

