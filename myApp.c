#include <stdio.h>
#include <math.h>

int main()
{
   float alt, imc;
   int peso, idade;

   printf("Digite sua idade: ");
   scanf("%d", &idade);

   printf("Digite sua altura: ");
   scanf("%f", &alt);

   printf("Digite seu peso: ");
   scanf("%d", &peso);

   imc = peso / pow(alt, 2);

   
   if (idade >= 18)
   {
      if (imc >= 18.5 && imc <= 24.9)
      {
         printf("Seu imc é de %.2f e o seu peso é ideal!\n ", imc);
         // printf("Seu peso é o ideal");
      }
      else
      {
         printf("Seu imc é de %.2f e você está fora do peso ideal!", imc);
      }
   }
   else if (idade >= 65)
   {
      if (imc >= 22 && imc <= 27)
      {
         printf("Seu imc é de %.2f e o seu peso é ideal!\n ", imc);
      }
      else
      {
         printf("Seu imc é de %.2f e você está fora do peso ideal!", imc);
      }
   }

   /*if (imc >= 18.5 && imc <= 24.9 )
   {
      printf("Seu imc é de %.2f e o seu peso é ideal!\n ", imc);
      //printf("Seu peso é o ideal");
   } else
   {
      printf("Seu imc é de %.2f e você está fora do peso ideal!", imc);
   }*/

   // printf("Seu imc é de: %.2f\n", imc);

   return 0;
}