//
//  worksheet_56.cpp
//  C_ Project
//
//  Created by 이범수 on 11/7/24.
//

#include <stdio.h>

int main()
{
    enum Fruit {Apple, Banana, Orange};
    
    Fruit fruit;
    printf("과일 선택(Apple:0, Banana:1, Orange:2 : ");
    scanf("%d", &fruit);
    
    if (fruit == Apple) {
        printf("Apple\n");
    }else if (fruit == Banana) {
        printf("Banana\n");
    }else if (fruit == Orange) {
        printf("Orange\n");
    }
}
