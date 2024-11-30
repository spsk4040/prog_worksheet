//
//  worksheet_47.cpp
//  C_ Project
//
//  Created by 이범수 on 10/31/24.
//

#include <stdio.h>
int Fibonacci(int n)
{
    if (n == 1 || n== 2){
        return 1;
    }else{
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}

int main()
{
    for (int i = 1; i <= 20; i++) {
        printf("%d ", Fibonacci(i));
    }
    printf("\n");
}
