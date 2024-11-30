//
//  worksheet_62.cpp
//  C_ Project
//
//  Created by 이범수 on 11/30/24.
//

#include <stdio.h>
int main(){
    int x;
    
    printf("정수 입력 : ");
    scanf("%d", &x);
    
    for (int i = 1; i <= 4; i++) {
        int n = 1;
        printf("%d배 곱한 값 : %d\n", n << i, x << i);
    }
}


