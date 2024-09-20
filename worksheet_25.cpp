//
//  worksheet_25.cpp
//  c_w
//
//  Created by 이범수 on 9/20/24.
//

#include <stdio.h>
int main(){
    
    int n;
    printf("자연수 입력: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
}
