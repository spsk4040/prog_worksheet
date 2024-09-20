//
//  worksheet_24.cpp
//  c_w
//
//  Created by 이범수 on 9/20/24.
//

#include <stdio.h>
int main(){
    
    int n;
    printf("자연수 입력: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n ; i++){
        for (int j = 1; j <= 2 * i - 1; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    
}
