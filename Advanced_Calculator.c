#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<Windows.h>
#include<complex.h>
#define PI 3.141593
void add();
void minus();
void mul();
void divi();
void raise();
void root();
void permu();
void combi();
void facto();
int fact(int);
void reoccur();
void trigo();
void logo();
void invar();
void cls();
void display();

void reoccur()
{
	printf("\n\n\tTry to enter a suitable response!\n\t");
	char ch,str[6];
		scanf("%s",str);
		if(strcmp(str,"cls")==0){
		  system("cls");
		  display();
	}
		else{
		ch=str[0];
	switch(ch)
	{
		case '+':
			add();
		     	break;
		case '-':
			minus();
				break;
		case 'x':
			mul();
				break;
		case '/':
			divi();
				break;
		case'^':
			raise();
				break;
		case 'R':
			root();
				break;
		case 'P':
			permu();
				break;
		case 'T':
			trigo();
			    break;
		case 'C':
			combi();
				break;
		case '!':
			facto();
				break;
		case 'I':
			invar();
			    break;
		case 'L':
			logo();
			     break;
		case '~':
			printf("\n\n\tHope you liked our service . Hit any key to exit.");
			getch();
			exit(0);
			break;
		case 'H':
			printf("\n\tContact the Developer:\t+91 8209832252 or e-mail:\tgauravkabra12@gmail.com\n");
			reoccur();
	        break;
	    default:{
	        printf("\tSorry! This was not expected from you!!\a\n");
	        reoccur();
	            }
	        getch();
    }
}
	
}

void trigo()
{
	char str[6],ch;
	printf("\tIn which method would you like to  enter the angle?\tPress 1 for rad else hit any other key for deg measure of %c\n\t",233);
	scanf("%s",str);
	ch=str[0];
	switch(ch)
	{
		case '1':
			{
		      char str1[6],chh;
		      float rang;
		      printf("\tEnter the angle\n\t");
			  scanf("%f",&rang);
			  printf("\t1.sine\t\t2.cosine\t\t3.tangent\n4.cosecant\t5.secant\t        6.cotangent\n\t");
			  scanf("%s",str1); 
			  chh=str1[0];
			  switch(chh)
			  {
			  	case '1':
			  		printf("\n\tsin%f= %f",rang,sin(rang));
			  		break;
			  	case '2':
			  		printf("\n\tcos%f= %f",rang,cos(rang));
			  		break;
			  	case '3':
			  		printf("\n\ttan%f= %f",rang,tan(rang));
			  		break;
			  	case '4':
			  		printf("\n\tcosec%f= %f",rang,1/sin(rang));
			  		break;
			  	case'5':
			  		printf("\n\tsec%f= %f",rang,1/cos(rang));
			  		break;
			  	case '6':
			  		printf("\n\tcot%f= %f",rang,1/tan(rang));
			  		break;
			  	default:
			  		printf("\n\tInvalid %c",233);
			  	
			  		
			  }
	}
	break;
	    default:
			{
		      char str2[6],chhh;
		      float dang,ang;
		      printf("\tEnter the angle\n\t");
			  scanf("%f",&dang);
			  ang=dang;
			  dang=dang*PI/180.0;
			  printf("\n\t1.sine\t\t2.cosine\t\t3.tangent\n\t4.cosecant\t5.secant\t        6.cotangent\n\t");
			  scanf("%s",str2);
			  chhh=str2[0];
			  switch(chhh)
			  {
			  	case '1':
			  		printf("\n\tsin%f= %f",ang,sin(dang));
			  		break;
			  	case '2':
			  		printf("\n\tcos%f= %f",ang,cos(dang));
			  		break;
			  	case '3':
			  		printf("\n\ttan%f= %f",ang,tan(dang));
			  		break;
			  	case '4':
			  		printf("\n\tcosec%f= %f",ang,1/sin(dang));
			  		break;
			  	case '5':
			  		printf("\n\tsec%f= %f",ang,1/cos(dang));
			  		break;
			  	case '6':
			  		printf("\n\tcot%f= %f",ang,1/tan(dang));
			  		break;
			  	default:
			  		printf("\n\tInvalid %c",233);
			  	
			  		
			  }
}
 }
  reoccur();
}
void add()
{
	float a,b;
	printf("\n\tEnter the values of a and b for a+b\n\t");
	scanf("%f%f",&a,&b);
	printf("\tThe sum of %f and %f is %f\n\t",a,b,a+b);
	reoccur();
}

void minus()
{
	float a,b;
	printf("\n\tEnter the values of a and b for a-b\n\t");
	scanf("%f%f",&a,&b);
	printf("\tThe value of %f-%f is %f\n\t",a,b,a-b);
	reoccur();
}

void mul()
{
	float a,b;
	printf("\n\tEnter the values of a and b for a*b\n\t");
	scanf("%f%f",&a,&b);
	printf("\tThe value of %f*%f is %f\n",a,b,a*b);
	reoccur();
}

void divi()
{
	float a,b;
	printf("\n\tEnter the values of a and b for a/b\n\t");
	scanf("%f%f",&a,&b);
	if(b==0)
		printf("\tMath Error\n\t");
	printf("\n\tThe value of %f/%f is %f\n",a,b,a/b);
	reoccur();
}

void raise()
{
	double x,y,z;
	printf("\n\tEnter the suitable values of x and y for x^y\n\t");
	scanf("%lf%lf",&x,&y);
	if(x==0&&y==0)
	printf("\tMath Error\n\t");
	z=pow(x,y);
	printf("\n\tThe value of %f raised to the power %f is %f\n\t",x,y,z);
	reoccur();
}

void root()
{
	float x,sq;
	printf("\n\tEnter the value of x for %cx\n\t",251);
	scanf("%f",&x);
	if(x<0)
	   printf("\n\tMath Error\n\t");
	sq=sqrt(x);
	printf("\n\tThe value of %c%f is %f\n\t",251,x,sq);
	reoccur();
}

void permu()
{
	int n,r,p;
	printf("\n\tEnter the values of n and r for nPr\n\t");
	scanf("%d%d",&n,&r);
	if(n<0||r<0)
	  printf("\n\tMath Error\n\t");
	p=fact(n)/fact(r);
	printf("\n\tThe value of %dP%d is %d\n\t",n,r,p);
	reoccur();
}

void combi()
{
	int n,r,c;
	printf("\n\tEnter the values of n and r for nCr\n\t");
	scanf("%d%d",&n,&r);
	if((n-r)<0||n<0||r<0)
	   printf("\n\tMath Error\n\t");
	c=fact(n)/(fact(r)*fact(n-r));
	printf("\n\tThe value of %dC%d is %d\n\t",n,r,c);
	reoccur();
}

int fact(int num)
{
	int i,f=1;
	for(i=1;i<=num;i++)
	   f=f*i;
	return(f);
	
}

void facto()
{
	int num;
	printf("\n\tEnter the integer number for number!\n\t");
	scanf("%d",&num);
	int i,f=1;
	for(i=1;i<=num;i++)
	   f=f*i;
    printf("\n\tThe value of %d! is %d\n\t",num,f);       
    reoccur();
	
}

void logo()
{
	float x;
	printf("\n\tEnter the value of x for log(x) and ln(x)\n\t");
	scanf("%f",&x);
	if(x<=0)
	  printf("\n\tMath Error\n\t");
	else
	  printf("\n\tThe value of  log(%f)= %f and ln(%f)= %f\n\t",x,log(x)/2.303,x,log(x));
	reoccur();
}

void invar()
{
	int resp;
	float x;
	printf("\n\tSubmit suitable response for arcT functions:\n\t");
	printf("1.arcsin\t\t2.arccos\t\t3.arctan\n\t");
	scanf("%d",&resp);
	printf("\n\tEnter the value of x in arcT(x)\n\t");
	scanf("%f",&x);
	switch(resp)
	{
		case(1):
				printf("\n\tarcsin(%f) = %f(in rad)  and  %f(in deg)\n\t",x,asin(x),asin(x)*180/PI);
				break;
		case(2):
				printf("\n\tarccos(%f) = %f(in rad)  and  %f(in deg)\n\t",x,acos(x),acos(x)*180/PI);
				break;
		case(3):
				printf("\n\tarctan(%f) = %f(in rad)  and  %f(in deg)\n\t",x,atan(x),atan(x)*180/PI);
				break;		
		default:
			    printf("\n\tSorry!This was not expected from you!!\a\n\t");
			    break;
	}
		reoccur();
}

void display()
{
	printf("\n\t\t                       *********  DEVELOPED BY : GAURAV KABRA *********\n\n");
	printf("\t\t     ---------------------------------------------------------------------------------------\n\n");
	printf("  THE POSSIBLE OPERATION    PRESS THE KEY GIVEN BELOW\t     THE POSSIBLE OPERATION        PRESS THE KEY GIVEN BELOW\n\n");
	printf("          ADD                          +\t\t\t       SUBTRACT                     -\n          MULTIPLY                     x\t\t\t       DIVIDE                       /\n");
	printf("          POWER:x^y                    ^\t\t               SQUARE-ROOT                  R\n");
	printf("          PERMUTATION                  P\t\t\t       TRIGO-FNS                    T\n          COMBINATION                  C\t  \t               FACTORIAL                    !\n");
	printf("          INVERSE T-FNS                I                               LOGARITHMS                   L\n");
	printf("          EXIT                         ~                               CLEAR CALCULATIONS         \"cls\"\n");
	printf("\t-------------------Press 'H' for Help or Suggestion--------------------------\n");
	reoccur();
	
}

main()
{
	display();
}
	