//
//  worksheet_58.cpp
//  C_ Project
//
//  Created by 이범수 on 11/30/24.
//

#include <stdio.h>

enum Size { Short, Tall, Grande, Venti };
char sizeName[][7] = { "Short", "Tall", "Grande", "Venti" };
int priceAmericano[] = { 3800, 4100, 4600, 5100 };
int priceCapucciono[] = { 4600, 5900, 6400, 6900 };

int main() {
    printf("커피 가격표(아메리카노)\n");
    for (int i = Short; i <= Venti; i++) {
            printf("%s : %d\n", sizeName[i], priceAmericano[i]);
        }
        
        printf("\n"); // 줄 바꿈

        printf("커피 가격표(카푸치노)\n");
        for (int i = Short; i <= Venti; i++) {
            printf("%s : %d\n", sizeName[i], priceCapucciono[i]);
        }
}
