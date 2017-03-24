#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
   int hora, minuto, segundo, h, m, s;
   hora=minuto=segundo=0;

   printf("\nRelogio\n");

   printf("\nDespertador\n");

   printf("\nDigite a hora para despertar: ");
   scanf("%d", &h);

   printf("\nDigite o minuto para despertar: ");
   scanf("%d", &m);

   printf("\nDigite o segundo para despertar: ");
   scanf("%d", &s);

   while(1)
   {
       printf("\r hora: %2dh : %2dm : %2ds", hora, minuto, segundo);
       segundo++;

       if(segundo==60) {segundo=0; minuto++;}

       if(minuto==60) {minuto=0; hora++;}

       if(hora==24) {hora=0; hora;}

       Sleep(1000);

       if((hora == h) && (minuto == m ) && (segundo == s)){
        break;
       }




   }
   printf("\n\n     ACORDE");
}
