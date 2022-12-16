#include<stdio.h>

int main(){
    int banyaktanjakan, input, puncaktanjakan = 2000000000, ketinggiantanjakan, panjangtanjakan;
    int tinggi = 0, pos = 0;
    int curam = 0;
    int adatanjakan = 0;
    scanf("%d", &banyaktanjakan);
    for(int i = 0; i < banyaktanjakan; i++){
        scanf("%d", &input);

        if (input < puncaktanjakan) {
            puncaktanjakan = input;
            
            if (ketinggiantanjakan > tinggi) {
                tinggi = ketinggiantanjakan;
                curam =(float)tinggi / panjangtanjakan;
                pos = i;
            } else if (ketinggiantanjakan == tinggi) {
                if ((float)ketinggiantanjakan / panjangtanjakan > curam) {
                    curam = (float)tinggi / panjangtanjakan;
                    pos = i;
                }
            }

            ketinggiantanjakan = 0;
            panjangtanjakan = 0;

        } else if (input >= puncaktanjakan) {
            if (input > puncaktanjakan) {
                ketinggiantanjakan += input - puncaktanjakan;
            } 
            panjangtanjakan++;
            adatanjakan = 1;
        }
    }
    if (adatanjakan) {
        printf("%d", pos);
    } else {
        printf("-1");
    }
}
    
    
