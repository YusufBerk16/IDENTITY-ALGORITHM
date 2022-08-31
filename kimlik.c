#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void main() {
    long long number;
    int hane;
    int c1;
    int c2;
    int d;
    do {
        printf("Sayi giriniz\n");
        scanf("%lld", &number);
        hane = log10(number)+1;
    }while(hane != 11);
    c2 = number %10;
    c1 = number %100/10;
    d = number /100;

    int tektop = 0;
    int cifttop = 0;

    for (size_t i = 0; i < 9; i++)
    {
           
        if (i%2 == 0)
        {
            tektop = d %10 + tektop;
        } else {
            cifttop = d %10 + cifttop;
        }
        d = d/10;
    
    }
    
    if (c1 == (tektop*7-cifttop) %10 && c2 == (tektop+cifttop+c1) %10)
    {
        printf("Şartlar sağlandı\n");
        
    } else {
        printf("Şartlar sağlanmadı\n");
    }
    
    
} 