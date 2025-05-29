#include <stdio.h>
#include <string.h>
int main(){
    char real[100];
    printf("nhap mot chuoi bat ky ");
    fgets(real, sizeof(real), stdin);
    printf("do dai cua chuoi %d", strlen(real));
    
    
    return 0;
}

