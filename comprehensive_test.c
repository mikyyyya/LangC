#include <stdio.h>
int main(){
    int i, j;
    for(i = 1; i <= 25; i++){
        if(i % 3 == 0){
            printf("%d\n",i);
        }
    }
    while(25 < i && i < 51){
        if(i % 3 == 0){
            printf("%d\n",i);
        }
        i = i + 1;
    }
}