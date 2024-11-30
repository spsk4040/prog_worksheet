//
//  worksheet_035.cpp
//  C_ Project
//
//  Created by 이범수 on 11/8/24.
//

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    printf("입력: ");
    gets(str1);

    strcpy(str2, str1);

    printf("%s\n", str2);
}
