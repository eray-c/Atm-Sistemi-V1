#include <stdio.h>
#include <stdlib.h>
#include "atm.h"

void menuYazdir();

int main(int argc, char** argv) {
    int secim;
    
    while(1) {
    menuYazdir();
    scanf("%d", &secim);
    
    switch(secim) {
        case 1:
            paraYatir();
            break;
        case 2:   
            paraCek();
            break;
        case 3:
            sifreDegistir();
            break;
        case 4:
            bakiyeGor();
            break;
        case 0:
            printf("Cikis yapiliyor...");
            exit(0);
    }
  }
    

    return (EXIT_SUCCESS);
}

void menuYazdir() {
    printf("\nErayBank'a Hosgeldiniz. Lutfen Yapmak Istediginiz Islemi Seciniz.\n");
    printf("1. Para Yatirma\n");
    printf("2. Para Cekme\n");
    printf("3. Kart Sifresi Degistirme\n");
    printf("4. Bakiye Goruntuleme\n");
    printf("0. Kart Iade\n");
    printf("Seciminizi giriniz :\n");
}
