#include <stdio.h>
int differenceOfSums(int n, int m) {
    int num1 = 0,num2 = 0;
    for(int i=1;i<n;i++){
        if(m%i != 0){
            num1 += m;
        }else{
            num2 += m;
        }
    }
    return num1 - num2;
}
int main(){
    printf("%d",differenceOfSums(10,3));

    return 0;
}
