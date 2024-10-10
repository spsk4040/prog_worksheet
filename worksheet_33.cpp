//
//  worksheet_33.cpp
//  C_ Project
//
//  Created by 이범수 on 10/10/24.
//

#include <stdio.h>
#include <string.h>
int main(){
    char y[10];
    char n[10];
    char name[10];
    char s[30];
    
    printf("학년 : ");
    scanf("%s", y);
    printf("학번 : ");
    scanf("%s", n);
    printf("이름 : ");
    scanf("%s", name);
    
    strcat(s, y);
    strcat(s, "학년 ");
    strcat(s, n);
    strcat(s, " ");
    strcat(s, name);
    strcat(s, "\n");
    
    printf("%s\n", s);
}
