//
//  worksheet_32.cpp
//  C_ Project
//
//  Created by 이범수 on 10/10/24.
//

#include <stdio.h>
int main(){
    char s[10];
    
    printf("입력: ");
    scanf("%s", s);
    
    for (int i = 0; s[i] != '\0'; i++) {
        printf("%c\n", s[i]);
    }
}
