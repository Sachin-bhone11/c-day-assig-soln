//#include <stdio.h>
//
//void main()
//{
//	int bs,da,ta,hra,gross;
//	printf("enter baisc salary: ");
//	scanf("%d",&bs);
//	
//	if(bs<=5000)
//	{
//		da=(bs*10)/100;
//		ta=(bs*20)/100;
//		hra=(bs*25)/100;
//	}
//	else
//	{
//	   	da=(bs*15)/100;
//		ta=(bs*25)/100;
//		hra=(bs*30)/100;	
//	}
//	
//	gross=bs+da+ta+hra;
//	printf("gross salary :%d",gross);
//	
//}


//typy-1-without parameter and without return type

//#include <stdio.h>
//void salary();
//void main()
//{
//	 salary();
//	
//}
//
//void salary()
//{
//		int bs,da,ta,hra,gross;
//	    printf("enter baisc salary: ");
//      	scanf("%d",&bs);
//	
//	if(bs<=5000)
//	{
//		da=(bs*10)/100;
//		ta=(bs*20)/100;
//		hra=(bs*25)/100;
//	}
//	else
//	{
//	   	da=(bs*15)/100;
//		ta=(bs*25)/100;
//		hra=(bs*30)/100;	
//	}
//	
//	gross=bs+da+ta+hra;
//	printf("gross salary :%d",gross);
//
//}
//



//typy-2-without parameter and with return type

//#include <stdio.h>
//int salary();
//void main()
//{
//	 salary();
//	
//}
//
//int salary()
//{
//		int bs,da,ta,hra,gross;
//	    printf("enter baisc salary: ");
//      	scanf("%d",&bs);
//	
//	if(bs<=5000)
//	{
//		da=(bs*10)/100;
//		ta=(bs*20)/100;
//		hra=(bs*25)/100;
//	}
//	else
//	{
//	   	da=(bs*15)/100;
//		ta=(bs*25)/100;
//		hra=(bs*30)/100;	
//	}
//	
//	gross=bs+da+ta+hra;
//	printf("gross salary :%d",gross);
//	return gross;
//
//}




//typy-3-with parameter and without return type
//
//#include <stdio.h>
//void salary(int,int,int,int,int);
//void main()
//{ 
//     int b,d,t,hr,g;
//	 salary(b,d,t,hr,g);
//	
//}
//
// void salary(int bs,int da,int ta,int hra,int gross)
//{
//	    printf("enter baisc salary: ");
//      	scanf("%d",&bs);
//	
//	if(bs<=5000)
//	{
//		da=(bs*10)/100;
//		ta=(bs*20)/100;
//		hra=(bs*25)/100;
//	}
//	else
//	{
//	   	da=(bs*15)/100;
//		ta=(bs*25)/100;
//		hra=(bs*30)/100;	
//	}
//	
//	gross=bs+da+ta+hra;
//	printf("gross salary :%d",gross);
//
//
//}





//typy-4-with parameter and with return type

#include <stdio.h>
int salary(int,int,int,int,int);
void main()
{ 
     int b,d,t,hr,g;
	 salary(b,d,t,hr,g);
	
}

int salary(int bs,int da,int ta,int hra,int gross)
{
	    printf("enter baisc salary: ");
      	scanf("%d",&bs);
	
	if(bs<=5000)
	{
		da=(bs*10)/100;
		ta=(bs*20)/100;
		hra=(bs*25)/100;
	}
	else
	{
	   	da=(bs*15)/100;
		ta=(bs*25)/100;
		hra=(bs*30)/100;	
	}
	
	gross=bs+da+ta+hra;
	printf("gross salary :%d",gross);
    return gross;

}
