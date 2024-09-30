#include<stdio.h>
int main(){
    int counter =10;
    int sum =0;
    while(counter){
    printf("%d Hello World\n",counter);
        sum += counter;
        counter--;
    }

    printf("========> Sum %d\n",sum);

    
}