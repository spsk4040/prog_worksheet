//
//  worksheet_45.cpp
//  C_ Project
//
//  Created by 이범수 on 10/24/24.
//

#include <stdio.h>
void cycle(int* a, int* b, int* c){
    int tmp = *a;
    *a = *b;
    *b = *c;
    *c = tmp;
}

int main(){
    int a, b, c;
    printf("3개의 숫자를 입력하세요: ");
    scanf("%d, %d, %d", &a, &b, &c);
    
    cycle(&a, &b, &c);
    
    printf("a = %d, b = %d, c = %d\n", a, b, c);
}
