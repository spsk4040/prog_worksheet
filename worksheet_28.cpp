//
//  worksheet_28.cpp
//  c_w
//
//  Created by 이범수 on 10/4/24.
//

#include <stdio.h>
int main(){
    
    int n;
    
    printf("자연수 입력: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n-1; i++) {
        for (int j = n; j >= i-1; j--) {
            printf(" ");
        }
        for (int k = 0; k < i * 2 - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2*(n-i)+1; k++){
            printf("*");
        }
        printf("\n");
    }
}
