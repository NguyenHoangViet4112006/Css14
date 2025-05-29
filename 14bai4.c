#include <stdio.h>

int main(){
    char kytu[] = "darkbruhlmao";
    char real;
    int count = 0;
    printf("nhap vao mot ky tu bat ky: ");
    scanf("%c", &real);
    for (int i = 0; kytu[i] != '\0'; i++){
        if (kytu[i] == real){
            count++;
        }
    }
    printf("ky tu %c xuat hien %d lan", real, count);



    return 0;
}

