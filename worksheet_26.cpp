//
//  worksheet_26.cpp
//  c_w
//
//  Created by 이범수 on 9/20/24.
//

#include <stdio.h>
int main(){
    
    int n;
    printf("자연수 입력: ");
    scanf("%d", &n);
    
    
    for (int i = n; i > 0; i--){
        for (int j = i; j > 0; j--)
            printf("%d ", j);
        printf("\n");
    }
    
}
