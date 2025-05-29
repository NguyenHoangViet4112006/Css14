#include <stdio.h>

int main(){
    char kyTu[] = "qwerasdf";
    int i = 0;
    printf("cac ky tu trong chuoi ");
    while (kyTu[i] != '\0') {
        printf("%c ", kyTu[i]);
        i++;
    }



    return 0;
}

