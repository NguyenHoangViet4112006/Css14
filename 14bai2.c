#include <stdio.h>

int main(){
    char real[] = "qwerasdf";
    int i = 0;
    printf("cac ky tu trong chuoi ");
    while (real[i] != '\0') {
        printf("%c ", real[i]);
        i++;
    }



    return 0;
}

