//
//  worksheet_34-1.cpp
//  C_ Project
//
//  Created by 이범수 on 11/8/24.
//

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("문자열을 입력하세요: ");
    gets(str);

    printf("%s - %d글자\n", str, strlen(str));
}
