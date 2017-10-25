/*Programa Tablas de Multiplicar
	Hernández Hernández Alonso de Jesús*/
#include<stdio.h>
#include<conio.h>
main()
{
int N;
int I;
int R;

printf("\tTablas de Multiplicar del 1 al 10 ");
for(N=1;N<11;N=N+1)
{
	
	printf("\n");
	printf("\t");

for(I=1;I<11;I=I+1)
{

R=N*I;
printf("\n");
printf("\t");
printf("%d", N);
printf("X");
printf("%d", I);
printf("=");
printf("%d", R);
}
}

	getch();
return 0;
}

