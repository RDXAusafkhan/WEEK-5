#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c;
	printf("enter first size of triangle : ");
	scanf("%f",&a);
	printf("enter second size of triangle : ");
	scanf("%f",&b);
	printf("enter third size of triangle : ");
	scanf("%f",&c);
	if(a>(b+c)) {printf("no triangle is formed");}
	if ((pow(a,2))==(pow(b,2))+(pow(c,2))){printf("a Right angle triangle is formed ");}
	if((pow(a,2))>(pow(b,2))+(pow(c,2))){printf("a Obtuse angle triangle is formed ");}
	if((pow(a,2))<(pow(b,2))+(pow(c,2))){printf("a Acute angle triangle is formed ");}
}

	 
	
	
		
	
	
