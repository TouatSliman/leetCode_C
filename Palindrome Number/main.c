#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isPalindrome(int x){
	char str[20];
	sprintf(str,"%d",x);
	for(int i=0;i<strlen(str)/2;i++){
		if(str[i] != str[strlen(str)-i-1]){
			return false;
		}
	}
	return true;
}
int main(){
	printf("%d",isPalindrome(121));
	return 0;
}
