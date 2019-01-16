#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define P printf
#define S scanf
void add();
void sub();
void mul();
void div();
void prime();
void fac();
void even();
void sumofdigit();
void reverse();
void QE();
void leap();
void lcm();
void hcf();
void ap();
void fib();
int fabb(int);
void neon();
int sum(int);
void arm();
void starpattern();
void summ();
void subm();
void trm();
void cir();
int main()
{
int c;
char option;
P("\n\t\t\t\t\t\t--------------------\t\t\t\t-----------------");
P("\n\t\t\t\t\t\tUSEFUL C PROGRAMMING\t\t\t\t (SHUBHAM SAGAR) ");
P("\n\t\t\t\t\t\t--------------------\t\t\t\t-----------------");
do {

P("\n\t\t\t\t\t               MENU             \n");
P("_________________________________________________________________________________________________________________\n");
P("_________________________________________________________________________________________________________________\n");
P("\n|1.Addition\t\t\t2.Subtration\t\t\t3.Multiplication                                |\n");
P("\n|4.Division\t\t\t5.Prime Number\t\t\t6.Factorial                                     |");
P("\n\n|7.Even/Odd Number\t\t8.Sum of Digit\t\t\t9.Reverse a Number                              |");
P("\n\n|10.Q.Equation\t\t\t11.Leap Year\t\t\t12.LCM                                          |");
P("\n\n|13.HCF\t\t\t\t14.AP\t\t\t\t15.Fibonacci series                             |");
P("\n\n|16.Neon Number\t\t\t17.Armstrong Number\t\t18.Simple Star Pattern                          |");
P("\n\n|19.Sum of Matrix\t\t20.Subtration of Matrix\t\t21.Transpose of a matrix                        |");
P("\n\n|22.Area and Circumference of circle\t23.About Us\t\t24.All Codes\t\t\t25.Exit         |\n");
P("________________________________________________________________________________________________________________\n");

P("_________________________________________________________________________________________________________________\n");
P("Enter Your Choice :");
S("%d",&c);



switch(c)
{
case 1:
add();

break;

case 2:
sub();

break;

case 3:
mul();

break;

case 4:
div();

break;

case 5:
prime();

break;


case 6:
fac();

break;

case 7:
even();

break;

case 8:
sumofdigit();

break;

case 9:
reverse();

break;


case 10:
QE();

break;

case 11:
leap();

break;

case 12:
lcm();

break;

case 13:
hcf();

break;

case 14:
ap();
break;

case 15:
fib();
break;

case 16:
neon();
break;

case 17:
arm();
break;

case 18:
starpattern();
break;

case 19:
summ();
break;

case 20:
subm();
break;

case 21:
trm();
break;

case 22:
cir();
break;

case 23:
P("\nABOUT :");
P("\n\nAll the above programs are Written  by -");
P("\n\nSHUBHAM SAGAR\t\tCSE(B.Tech)");
P("\n\nFor any query mail us at :\tshubhamsagar@live.com");
P("\n\nAbove Programs are written on TURBO C++ and DEV-C++");
P("\n\nThank You.");

break;
case 24:
	P("\n Contact at   :- shubhamagar@live.com");
	P("\n Phone Number :- +91-7079767777");
	
	break;
case 25:exit(0);

break;

default:
printf("\nSorry Wrong Choice Entered please try again...");



}
P("\nDo you want to run the above program again :- Y/N\n");
option=getche();
}while(option=='Y');
getch();
}

void add()
{
	
long a,b=0,c,j,i;
printf("\nTITLE : ADDITION OF (N) NUMBERS");
printf("\nEnter the total number of term whant to add : ");
scanf("%ld",&j);
for(i=1;i<=j;i++)
{ printf("\nEnter the Number : ");
scanf("%ld",&a);
b=b+a; }
printf("\n Sum is : %ld",b);
}



void sub()
{
long a,b=0,c,j=2,i;
printf("\nTITLE : SUBTRATION");
for(i=1;i<=j;i++)
{ printf("\nEnter the Number : ");
scanf("%ld",&a);
b=-b+a; }
printf("\n Subtration is : %ld",-b);
}

void mul()
{
long a,b=1,c,j,i;
printf("\nTITLE : Multiplication OF (N) NUMBERS");
printf("\nEnter the total number of term whant to Multiply : ");
scanf("%ld",&j);
for(i=1;i<=j;i++)
{ printf("\nEnter the Number : ");
scanf("%ld",&a);
b=b*a; }
printf("\n Multiplication is : %ld",b);
}



void div()
{
float a,b=1.00,c,j,i;
printf("\nTITLE : Division OF (N) NUMBERS");
printf("\nEnter the total number of term whant to Divide : ");
scanf("%f",&j);
for(i=1;i<=j;i++)
{ printf("\nEnter the Number : ");
scanf("%f",&a);
b=b/a; }
printf("\n Division is : %f",b);
}

void prime()
{
int n,i;
printf("\nPRIME NUMBER CALCULATOR");
printf("\nEnter the Number :");
scanf("%d",&n);
for(i=2;i<=n-1;i++)
if(n%i==0)
break;
if(i==n)
printf("\nThe Number %d is A PRIME NUMBER",n);
else
printf("\nThe Number %d is NOT A PRIME NUMBER",n);
}

void fac()
{
long num,i,factorial=1;
printf("\nTITLE : FACTORIAL CALCULATOR");
printf("\nEnter the number : ");
scanf("%ld",&num);
if(num<0)
printf("\n******FACTORIAL CAN'T BE DETERMINED OF A NEGATIVE NUMBER********");
else
{
for(i=1;i<=num;i++)
factorial=factorial*i;
}
printf("\nFactorial of %ld is %ld",num,factorial);
}

void even()
{
int num;
printf("\nEnter the Number :");
scanf("%d",&num);
if(num/2==0)
printf("\nNumber %d is a Even Number",num);
else if(num==0)
printf("\n%d is neither odd nor even",num);
else
printf("\nNumber %d is odd number",num);
}

void sumofdigit()
{
int num, sum=0;
printf("\nTITLE  Sum of the DIGITS of entered Number");
printf("\nEnter the Number ");
scanf("%d",&num);

while(num!=0)
{sum=sum+num%10;
num=num/10;
}
printf("\nSUM ofDIGIT of entered Number is %d",sum);

}

void reverse()
{
long num,r;
printf("\nTITLE : REVERSE OF THE NUMBER ");
printf("\nEnter the number : ");
scanf("%ld",&num);
printf("\nReverse of the number : ");
while(num!=0)
{
r=num%10;
printf("%ld",r);
num=num/10;
}

}

void QE()
{
float a,b,c,d,x1,x2;
printf("\nTITLE:Q.Equation");
printf("\nEnter the value of a=");
scanf("%f",&a);
printf("\nEnter the value of b=");
scanf("%f",&b);
printf("\nEnter the value of c=");
scanf("%f",&c);
d=((b*b)-(4*a*c));
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
if(a==0 && b==0)
printf("\nNo SOLUTION");
else
 if(a==0)
{
printf("\nThere is only ONE ROOT EXIST and which is");
printf("%f",x1);
}
else if(d<0)
printf("\nNO ROOT EXIST");
else
{
printf("\n Two Roots EXIST which are:");
printf("%f%f",x1,x2);
}

}

void leap()
{
int year;
printf("\nTITLE:Leap Year");
printf("\nEnter Year:");
scanf("%d",&year);
if(year%4==0 && year/100!=0)
printf("\nYear %d is a LEAP YEAR",year);
else
printf("\nYear%d is not a LEAP YEAR",year);

}

void lcm()
{
int num1,num2,LCM;
printf("\nTITLE : LCM");
printf("\nEnter your first number: ");
scanf("%d",&num1);
printf("\nEnter your second number :");
scanf("%d",&num2);
for(LCM=num1>num2?num1:num2;LCM<=num1*num2;LCM++)
if(LCM%num1==0 && LCM%num2==0)
break;
printf("\nLCM of %d and %d is : %d",num1,num2,LCM);

}

void hcf()
{
int num1,num2,HCF;
printf("\Enter your first number: ");
scanf("%d",&num1);
printf("\nEnter your second number :");
scanf("%d",&num2);
for(HCF=num1<num2?num1:num2; HCF>=1;HCF--)
if(num1%HCF==0 && num2%HCF==0)
break;
printf("\nHCF of %d and %d is : %d",num1,num2,HCF);

}

void ap()
{
int n,a,d,l,choice,x,y,z,yy,zz;
float sum;
P("\nAP CALCULATOR");
P("\n\nNOTATONS : \n1.a=First tearm\n2.d=Common Differnce\n3.l=Last term\n4.n=Number of term");
P("\n\n1.If First Term (a),Number ofterm (n) and Last Term (l) is known");
P("\n\n2.If Number of term (n),First term (a) and Common difference (d) is known");
P("\n\n3.Exit");
P("\n\nEnter the choice : ");
S("%d",&choice);
switch(choice)
{
case 2:
P("\nEnter the value of n : ");
S("%d",&n);
P("\nEnter the value of First Term of this series (a) : " );
S("%d",&a);
P("\nEnter the value of Common difference (d) :");
S("%d",&d);
x=a*n;
yy=n*d;
y=yy/2;
zz=n-1;
z=y*zz;
sum=x+z;
P("Sum of the Above series is : %f",sum);
break;
case 1:
P("\nEnter the value of n : ");
S("%d",&n);
P("\nEnter the value of First Term of this series (a) : " );
S("%d",&a);
P("\nEnter the value of last term (l) :");
S("%d",&l);
sum=(n*(a+l))/2;
P("Sum of the Above series is : %f",sum);
break;
case 3:exit(0);
break;
default:
printf("\nSorry Wrong Choice Entered please try again...");
break;
}

}

void fib()
{


int i,n,c=0;
printf("\nFIBONACCI SERIES");
printf("\nEnter the number uoto which pattern will be printed :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
int fabb(int c);

printf("%d\t",fabb(c));
c++;
}
}

int fabb(int z)
{
if(z==1)
return 1;
else if(z==0)
return 0;
else
return(fabb(z-1)+fabb(z-2));
}


void neon()
{


int sf,sq,n;

P("\nNEON NUMBER IN A GIVEN RANGE");
P("\nEnter the Number : ");
S("%d",&n);
{
sq=n*n;
sf=sum(sq);
if(sf==n)
P("%d is A NEON NUMBER",n);
else
P("\n%d is NOT A NEON NUMBER",n);
}
}

int sum(int x)
{
int sum=0;
while(x!=0)
{
sum=sum+(x%10);
x=x/10;
}
return(sum);
}


void arm()
{
long i,b,num,num1,num2,num3,a;
printf("\nTITLE : ARMSTRONG NUMBER ");
printf("\nEnter the number upto which armstrong number to be obtained : ");
scanf("%ld",&num);
printf("\nARMSTRONG NUMBERS : ");
while(num!=0)
{
num1=num/100;
b=num/10;
num2=b-(num1*10);
num3=num-(b*10);
a=pow(num1,3)+pow(num2,3)+pow(num3,3);
{
if(a==num)
printf("\n%ld",a);
else
printf("");
}
num--;
}

}

void starpattern()
{
    int i,j,n;
    printf("Enter the Row :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}

void summ()
{
int m,n,c,d,first[10][10],second[10][10],sum[10][10];
 
   printf("Enter the number of rows of matrix\n");
   scanf("%d",&m);
   printf("Enter the number of columns of matrix\n");
   scanf("%d",&n);
   printf("Enter the elements of first matrix\n");
 
   for (c=0;c<m;c++)
      for (d=0;d<n;d++)
         scanf("%d",&first[c][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c=0;c<m;c++)
      for (d=0;d<n;d++)
            scanf("%d", &second[c][d]);
 
   printf("Sum of entered matrices:-\n");
 
   for (c=0;c<m;c++) 
   {
      for (d=0;d<n;d++) 
	  {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
}

}
void subm()
{
int m,n,c,d,first[10][10],second[10][10],sub[10][10];
 
   printf("Enter the number of rows of matrix\n");
   scanf("%d",&m);
   printf("Enter the number of columns of matrix\n");
   scanf("%d",&n);
   printf("Enter the elements of first matrix\n");
 
   for (c=0;c<m;c++)
      for (d=0;d<n;d++)
         scanf("%d",&first[c][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c=0;c<m;c++)
      for (d=0;d<n;d++)
            scanf("%d", &second[c][d]);
 
   printf("Subtration of entered matrices:-\n");
 
   for (c=0;c<m;c++) 
   {
      for (d=0;d<n;d++) 
	  {
         sub[c][d] = first[c][d]-second[c][d];
         printf("%d\t", sub[c][d]);
      }
      printf("\n");
}
}
void trm()
{
int array[10][10],i,j,m,n;
    
printf("Enter the order of the matrix (mXn)\n");
printf("Value of m :");
scanf("%d",&m);
printf("Value of n :");
scanf("%d",&n);
printf("Enter the Elements of the matrix\n");
for (i=0;i<m;++i)
    {
        for (j=0;j<n;++j)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("The given matrix is \n");
    for (i=0;i<m;++i)
    {
        for (j=0;j<n;++j)
        {
            printf("%d",array[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix is \n");
    for (j=0;j<n;++j)
    {
        for (i=0;i<m;++i)
        {
            printf("%d",array[i][j]);
        }
        printf("\n");
    }
}


void cir()
{
float radius,area,circumference;
printf("\nTITLE:Area and Circumference of a circle");
printf("\nEnter the value of radius (R) ");
scanf("%f",&radius);
      area=(3.14*(radius)*(radius));
      circumference=(6.28*(radius));
      printf("\nA*rea of the circle is is %f",area);
printf("\nCircumference of the circle is %f",circumference);

}
