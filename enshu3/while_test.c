#include <stdio.h>
int main(){
    int count, count2;
    count = 1;
    while(count < 11){
        count2 = count % 2;
        if (count2 == 0){
            printf("%d\n",count);
        }
        count = count + 1;
    }
}