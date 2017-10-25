#include<stdio.h>
#include<conio.h>
int N;
int I;
int R;
main()
{

printf("\tTablas de Multiplicar del 1 al 10 ");
N=1;

do{
	printf("\n");
	printf("\t");
	I=1;
		do{
			R=N*I;
			printf("\n");	
			printf("\t");
			printf("%d", N);
			printf("X");
			printf("%d", I);
			printf("=");
			printf("%d", R);
			I=I+1;
			}while(I<11);
N=N+1;
}while(N<11);

	getch();
return 0;
}

