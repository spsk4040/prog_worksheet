//
//  worksheet_22.cpp
//  c_w
//
//  Created by 이범수 on 9/20/24.
//

#include <stdio.h>
int main(){
    
    int n;
    printf("입력: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= 9; i++){
        printf("%dX%d=%d\n", n, i, n * i);
    }
}
