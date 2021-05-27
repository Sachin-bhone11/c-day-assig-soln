#include <stdio.h>

//int main()
//{
//    float celsius, fahrenheit;
//    printf("Enter temperature in Celsius: ");
//    scanf("%f", &celsius);
//    //celsius to fahrenheit conversion formula
//    fahrenheit = (celsius * 9 / 5) + 32;
//    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
//    return 0;
//}

//void main()
//{
//	int a,b;
//	
//	printf("Enter the fahrenheit temperature= ");
//	scanf("%d",&a);
////	printf("Enter the fahrenheit temperature = %d",a);
//	b=(a-32)*5/9;
//	printf("\n celcious temprature is %d",b);
//}

//1st type-without parameter without return type
//void convertCelFahrenheit();
//void main(){
//	convertCelFahrenheit();
//}
//
//void convertCelFahrenheit()
//{
//int a,b;
//	
//	printf("Enter the fahrenheit temperature= ");
//	scanf("%d",&a);
//	b=(a-32)*5/9;
//	printf("\n celcious temprature is %d",b);
//}



//2st type-without parameter with return type
//int convertCelFahrenheit();
//void main(){
//	int result;
//	result=convertCelFahrenheit();
//	printf("\n celcious temprature is %d",result); 
//}
//
//int convertCelFahrenheit()
//{
//int a,b;
//	
//	printf("Enter the fahrenheit temperature= ");
//	scanf("%d",&a);
//	b=(a-32)*5/9;
//    return b;  
//  
//}



// type-3- with parameter without return type
//void convertCelFahrenheit(int,int);
//void main(){
//	int x, y;
//		printf("Enter the fahrenheit temperature ");
//		scanf("%d",&x);
//	    convertCelFahrenheit(x,y);
//	 
//}
//
//void convertCelFahrenheit(int a,int b)
//{
//	
//	b=(a-32)*5/9;
//	printf("\n celcious temprature is %d",b);
//     
//}

// type-4- with parameter with return type
int convertCelFahrenheit(int,int);
int main(){
	int x, y,result;
		printf("Enter the fahrenheit temperature = ");
		scanf("%d",&x);
	    result=convertCelFahrenheit(x,y);
	    printf("\n celcious temprature is %d",result); 
	    
	 
}

int convertCelFahrenheit(int a,int b)
{
	
	b=(a-32)*5/9;
    return b;
     
}




