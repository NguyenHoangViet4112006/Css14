#include<stdio.h>
char str(){
	char str[100];
	int letter = 0;
	printf("moi ban nhap chuoi ");
	fgets(str, 100,stdin);
	for(int i = 0; i< strlen(str); i++){
		if(str[i]==' '){
			letter++;
		}
	}
	printf("chuoi ban nhap co % tu", letter);
}
int main(){
	str();
	return 0;
}
