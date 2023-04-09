#include<stdio.h>

#include<stdlib.h>
#include<time.h>

//rock=0
//paper=1
//scisorrs=2

int main(void){
    int c, a;
    int w=0, d=0, l=0;
    int r=1;
    const time_t t;
    srand(ctime(&t));
    while(1==1){
        if(r==1){
            a=rand()%3;
        }
        else if(r==0){
            if(a==0){
                a=1;
            }
            else if(a==1){
                a=2;
            }
            else{
                a=0;
            }
        }
        else{
            if(a==0){
                a=1;//or 2
            }
            else if(a==1){
                a=2;//or 0
            }
            else{
                a=0;//or 1
            }
        }
        scanf("%i", &c);
        if(a==c){
            d++;
            r=1;
        }
        else if(c==a+1||c==a-2){
            w++;
            r=0;
        }
        else{
            l++;
            r=2;
        }
        printf("\nWins:%i\nDraws:%i\nLosses:%i\n", l, d, w);
    }
    return 0;
}