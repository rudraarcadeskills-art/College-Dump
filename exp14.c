#include<stdio.h>
#include<math.h>
int main(){
	float a , b ,c;
	float d,root1,root2,realPart,imaginaryPart;
	
	
	printf("enter the coefficient");
	scanf("%f %f %f,&a,&b,&c");
	
	d= b*b - 4*a*c;
	
	if(d>0){
		root1 = (-b+sqrt(d))/(2*a);
		root2 = (-b-sqrt(d))/(2*a);
		printf(root1 is %.2f and root2 is %.2f,root1,root2);
		
	}
	
	else if(d=0){
		root1 = root2 = -b/(2*a);
		printf(root1 is %.2f and root2 is %.2f,root1,root2);
		 
	}
	else{
	realPart = -b / (2 * a);
    imaginaryPart = sqrt(-d) / (2 * a);
    printf("root1 is %.2f + i%.2f and root2 is %.2f + i%.2f",realPart,imaginaryPart,realPart , imaginaryPart);
		
	}
	
	
	return 0;
}