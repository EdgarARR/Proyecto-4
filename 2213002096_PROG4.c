#include <math.h>
#include <stdio.h>
int main()
{
float temp1, temp2, temp3, temp4, temp5, sumatemp, sumatempfin;

printf("Introduzca la temperatura 1:");
scanf("%f", &temp1);

printf("\nIntroduzca la temperatura 2:");
scanf("%f", &temp2);

printf("\nIntroduzca la temperatura 3:");
scanf("%f", &temp3);

printf("\nIntroduzca la temperatura 4:");
scanf("%f", &temp4);

printf("\nIntroduzca la temperatura 5:");
scanf("%f", &temp5);

sumatemp= temp1+temp2+temp3+temp4+temp5;
printf("\n\nLa suma de las temperaturas es de: ");
printf("%.2f", sumatemp);

sumatempfin=sumatemp*-1;

printf("\nLa raiz cuadrada de la temperaturaes %.2f", sqrt(sumatempfin));

return 0;
}
