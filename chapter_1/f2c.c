#include <stdio.h>

int main(){
    float fahr, cel = 0;

    int lower = 300;
    int upper = 0;
    int step = 20;

    fahr = lower;
    printf("Temperature Conversion Table \n");
    while(fahr >= upper){
        cel = (fahr - 32.0) * (5.0/9.0);
        printf("%.0f\t%.1f\n",fahr, cel);
        fahr = fahr - step;
    }
}