//
//  worksheet_27.cpp
//  c_w
//
//  Created by 이범수 on 10/4/24.
//

#include <stdio.h>
int main(){
    
    int n;
    
    printf("n입력:");
    scanf("%d", &n);
    
    //1
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
    
    //2
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i * 2 - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
    
    //3
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
    //4
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
    //5
    for (int i = 1; i <= n; i++) {
        for (int k = n; k > i; k--){
            printf(" ");
        }
        for (int j = 1; j <= i * 2 - 1 ; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    printf("\n");
    //6
    for (int i = 1; i <= n ; i++) {
        for (int j = 1; j < i; j++){
            printf(" ");
        }
        for (int k = 1; k <= 2*(n-i)+1; k++){
            printf("*");
        }
        printf("\n");
    }
    
    
}
