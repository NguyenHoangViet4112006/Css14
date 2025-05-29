#include <stdio.h>
#include <string.h>

void arr(){
    char a[20]="sjogj*&^%hfe5678";
    int cnt=0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='a' && a[i]<='z') ++cnt;
        if(a[i]>='A' && a[i]<='Z') ++cnt;
    }
    printf("so ky tu la chu cai trong mang la %d", cnt);
}

int main(){
    arr();
    return 0;
}
