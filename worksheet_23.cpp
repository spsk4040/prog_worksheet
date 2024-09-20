//
//  worksheet_23.cpp
//  c_w
//
//  Created by 이범수 on 9/20/24.
//

#include <stdio.h>
int main(){
    
    for (int i = 1; i <= 9; i++){
        for (int j = 2; j <= 5; j++){
            printf("%d * %d = %d\t", j, i, i * j);
        }
        printf("\n");
    }
    printf("\n");
    
    for (int i = 1; i <= 9; i++){
        for (int j = 6; j <= 9; j++){
            printf("%d * %d = %d\t", j, i, i * j);
        }
        printf("\n");
    }
}
