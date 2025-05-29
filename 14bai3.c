#include <stdio.h>

int main(){
    char kytu[] = "qwer";
    int length = 0;
    while (kytu[length] != '\0'){
        length++;
    }
    printf("Chuoi dao nguoc: ");
    for (int i = length-1; i>=0; i--){
        printf("%c", kytu[i]);
    }
    
    
    
    return 0;
    
}

