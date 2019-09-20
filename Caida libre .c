#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float r,tc,x,t,g=9.8,s=340;
	
	printf("\n Este es un programa de fisica, Una piedra es arrojada desde el reposo dentro de un pozo con agua");
	printf("\n\n Ingrese el tiempo");
	scanf("%f",&t);
	
	r=sqrt((pow((2*s),2))-(4*(g)*(-2*t*s)));
	
	tc=((-2*s)+r)/(2*g);
	
	x=(g*(pow(tc,2)))/2;
	
	
	printf("\n\n La altura del pozo es de: %f m", x);
	
	
	return 0;
}
