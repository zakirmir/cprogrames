/*
 ============================================================================
 Name        : Calculator.c
 Author      : ZAKIR GULZAR MIR

 Version     : 0.1 Alpha
 Copyright   :
 Description : Calculator in C
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

#define PI 3.1416

void standard();
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float multiply(float a, float b);
float division(float a, float b);
void scientific();
float sine(float  x);
float cosine(float x);
float tangent(float x);
float logten(float x);
float squareroot(float x);
float exponent(float x);
float power(float x,float y);

int main(void){
	int n, c;
	
	printf("\nAuthor      : ZAKIR GULZAR MIR\n\n");
	do{		
		printf("\nWhat do you want to do?\n\n");
		printf(" 1. Standard Calculator\n 2. Scientific Calculator\n\n ");
		scanf("%d", &n);
		
		switch (n) {
			case 1: standard();   break;
			case 2: scientific();   break;
		}
		if (n!=1 && n!=2)
			printf("\nWorng input.\n");
		
		printf("\nEnter 1 for Contine.\nEnter any number to exit.\n\n ");
		scanf("%d",&c);
		
		if (c!=1)
			return -1;
		
	}while(c==1);
	
	return 0;
}

void standard() {
	int n;
    float x,y,result;
    
    printf("\nWhat do you want to do?\n\n");
    printf(" 1. Addtion\n 2. Subtraction\n 3. Multiplication\n 4. Division\n\n ");
	scanf ("%d",&n);
	
	if (n>0 && n<5){
    	printf("\nEnter two numbers : ");
    	scanf("%f %f", &x, &y);
		switch (n){
	        case 1: result = add(x, y);    break;
	        case 2: result = subtract(x, y);   break;
	        case 3: result = multiply(x, y);   break;
	        case 4: result = division(x, y);   break;
    	}
	}

	if (n>0 && n<5)
			printf("\n Result : %f\n",result);
	else
    	printf("\nWrong input.\n");
}

float add(float a, float b){
	return a + b;
}

float subtract(float a, float b){
	return a - b;
}

float multiply(float a, float b){
	return a * b;
}

float division(float a, float b){
	return a / b;
}

void scientific(){
	int n;
    float x,y,result;
    
    printf("\nWhat do you want to do?\n\n");
    printf(" 1. Sin\n 2. Cos\n 3. Tan\n 4. Log10\n 5. Square Root\n 6. Exponent\n 7. Power\n\n ");
    scanf ("%d",&n);
    
    if (n<7 && n>0)
    {
        printf("\n Enter a number : ");
        scanf("%f",&x);
        
		switch (n){
            case 1: result = sine(x);       break;
            case 2: result = cosine(x);     break;
            case 3: result = tangent(x);    break;
            case 4: result = logten(x);     break;
            case 5: result = squareroot(x); break;
            case 6: result = exponent(x);   break;
        }
    }
    
	if (n==7)
    {
        printf("\nEnter number and power : ");
        scanf("%f%f",&x,&y);
        result = power(x,y);
    }
    if (n>0 && n<8){
	
    	if (result == -272241.812500)
			printf("\n Not defined\n");
		else
        	printf("\n Result : %f\n",result);
	}
    else
        printf("\nWrong input.\n");
	
}

float sine(float x){
    return (sin (x*PI/180));
}

float cosine(float x){
    return (cos (x*PI/180));
}

float tangent(float x){
    return (tan(x*PI/180));
}

float logten(float x)
{
    return (log10(x));
}

float squareroot(float x){
    return (sqrt(x));
}

float exponent(float x){
    return(exp(x));
}
float power(float x, float y){
    return (pow(x,y));
}