//#include <stdio.h>
//
//void main()
//{
//	double a,b,c,d;
//	printf("Enter original price of the product : ");
//	scanf("%lf",&a);
//	printf("Enter discount on the product is percentage : ");
//	scanf("%lf",&b);
//	
//	c=((b/100)*a);
//	d=(a-c);
//	printf("\nprice of the product after discount: %lf ",d);
//}


////type-1-without parameter and without return type
//
//
//#include <stdio.h>
//void  discount();
//void main()
//{
//	  discount();
//}
//
// void discount()
// {
// 	double a,b,c,d;
//	printf("Enter original price of the product : ");
//	scanf("%lf",&a);
//	printf("Enter discount on the product is percentage : ");
//	scanf("%lf",&b);
//	
//	c=((b/100)*a);
//	d=(a-c);
//	printf("\nprice of the product after discount: %lf ",d);
// }
// 
 
 
 
//type-2-without parameter and with return type


//#include <stdio.h>
//int  discount();
//void main()
//{
//	  discount();
//}
//
//int discount()
// {
// 	double a,b,c,d;
//	printf("Enter original price of the product : ");
//	scanf("%lf",&a);
//	printf("Enter discount on the product is percentage : ");
//	scanf("%lf",&b);
//	
//	c=((b/100)*a);
//	d=(a-c);
//	printf("\nprice of the product after discount: %lf ",d);
//	return d;
// }
// 
// 
 
 
//type-3-with parameter and without return type


//#include <stdio.h>
//void  discount(double,double,double,double);
//void main()
//{
//	  double aa,bb,cc,dd;
//	  discount(aa,bb,cc,dd);
//
//}
//
//void discount(	double a,double b,double c,double d)
// {
// 	
//	printf("Enter original price of the product : ");
//	scanf("%lf",&a);
//	printf("Enter discount on the product is percentage : ");
//	scanf("%lf",&b);
//	
//	c=((b/100)*a);
//	d=(a-c);
//	printf("\nprice of the product after discount: %lf ",d);
//	
// }




//type-4-with parameter and with return type


#include <stdio.h>
int discount(double,double,double,double);
void main()
{
	  double aa,bb,cc,dd;
	  discount(aa,bb,cc,dd);

}

int discount(	double a,double b,double c,double d)
 {
 	
	printf("Enter original price of the product : ");
	scanf("%lf",&a);
	printf("Enter discount on the product is percentage : ");
	scanf("%lf",&b);
	
	c=((b/100)*a);
	d=(a-c);
	printf("\nprice of the product after discount: %lf ",d);
	return d;
	
 }
