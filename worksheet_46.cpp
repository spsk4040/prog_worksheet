//
//  worksheet_46.cpp
//  C_ Project
//
//  Created by 이범수 on 10/24/24.
//

#include <stdio.h>
int fact(int n){
    if (n == 1){
        return 1;;
    }return fact(n-1)*n;
}

int main(){
    int n;
    printf("n을 입력 : ");
    scanf("%d", &n);
    
    printf("재귀함수 : %d\n", fact(n));
    
    int p = 1;
    for (int i = 1; i <= n; i++) {
        p *= i;
    }
    printf("반복문 : %d\n", p);
}
