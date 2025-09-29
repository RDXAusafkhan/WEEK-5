#include<stdio.h>
#include<math.h>
main()
	{float P,R,T,amount,SI,CI ;
	printf("enter principle");
	scanf("%f",&P);
	printf("enter rate");
	scanf("%f",&R);
	printf("enter time");
	scanf("%f",&T);
	SI=(P*R*T)/100;
	amount=P*pow(1+R/100,T);
	CI=amount-P;
	printf("\n simple interest =%.2f",SI);
	printf("\ncompound interest=%.2f",CI);
	return 0;}
