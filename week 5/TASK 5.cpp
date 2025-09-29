#include<stdio.h>
#include<math.h>
main(){
	float L,B,S,r,area,tarea,tperi,carea,cperi,perimeter,s1,s2,s3,s,circlearea,circleperimeter;
	printf("\nTo find the area and perimeter of Rectangle : press A");
	printf("\nTo find the area and perimeter of Circle : press B");
	printf("\nTo find the area and perimeter of Triangle : press C");
	printf("\nTo find the area and perimeter of Cube : press D\n");	
	char R ;
	scanf("%c",&R);
	if (R=='A'){
	printf("Enter Length of Rectangle");
	scanf("%f",&L);
	printf(" Enter Breadth of Rectangle");
	scanf("%f",&B);
	area=L*B;
	perimeter=2*(L+B);
	printf("Area of Rectangle :%f",area);
	printf("\nPerimeter of Rectangle :%f",perimeter);
	}
	if (R=='B'){
		printf("Enter radius of Circle :");
		scanf("%f",&r);
		circlearea=r*3.14*r;
		circleperimeter=2*3.14*r;
		printf("Area of circle :%f",circlearea);
		printf("\nPerimetr of circle ;%f",circleperimeter);
		}
		if (R=='C'){
			printf("Enter the 1st side of Triangle :");
			scanf("%f",&s1);
			printf("Enter the 2nd side of Triangle :");
			scanf("%f",&s2);
			printf("Enter the 3rd side of Triangle :");
			scanf("%f",&s3);
			s=(s1+s2+s3)/2;
			tarea=pow(s*(s-s1)*(s-s2)*(s-s3),0.5);
			tperi=s1+s2+s3;
			printf("Area of triangle :%f",tarea);
			printf("\nPerimeter of Triangle :%f",tperi);
		}
		if (R=='D'){
			printf(" Enter the side of Cube :");
			scanf("%f",&S);
			carea=S*S*S;
			cperi=12*S;
			printf("Area of Cube :%f",carea);
			printf("\nPerimeter of Cube :%f",cperi);
			
			
			
			
			
		}
	
}
