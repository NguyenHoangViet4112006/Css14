#include <stdio.h>

int main(){
    char kytu[] = "laptrinhc";
    char check;
    int count = 0;
    printf("nhap vao mot ky tu bat ky: ");
    scanf("%c", &check);
    for (int i = 0; kytu[i] != '\0'; i++){
        if (kytu[i] == check){
            count++;
        }
    }
    printf("ky tu %c xuat hien %d lan", check, count);



    return 0;
}

