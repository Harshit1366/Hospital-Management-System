//menu based system for Hospital management system...
#include<stdio.h>
#include<string.h>
struct registers
{
char name,gender,email;
int age,phone,add,pas;
};
struct registers reg;
void registerr();
void login();
void details();
void make_appoint();
void pay_fees();

main()
{
int a,b;
printf("                     ESCORTS HOSPITAL                     \n");
printf("    *****WELCOME TO THE HOSPITAL MANAGEMENT SYSTEM*****\n");
printf("\n\nClick 1 to register otherwise login to your account\n");
scanf("%d",&a);
switch (a)
{
case 1 :
registerr();
break;
default :
login();
}
printf("\n\n 1. Fill the details of your disease \n");
printf("2. Make an appointment \n");
printf("3. Pay the fees \n");
printf("Choose any one of (1/2/3) options to continue : ");
scanf("%d",&b);
}

registerr()
{
struct registers
{
char name,gender,email;
int age,phone,pas,add;
};
struct registers reg;
int d;
char c;
printf("\nEnter your name : ");
scanf("%s",&reg.name);
printf("\nEnter your gender (m/f) : ");
scanf("%c",&reg.gender);
printf("\nEnter your age : ");
scanf("%d",&reg.age);
printf("\nEnter your contact number : ");
scanf("%d",&reg.phone);
printf("\nEnter your email address : ");
scanf("%s",&reg.email);
printf("\nEnter your address : ");
scanf("%d",&reg.add);
printf("\nCreate a password with digits only : ");
scanf("%d",&reg.pas);
printf("\nEnter the password again to confirm : ");
scanf("%d",&d);
{
if(d==reg.pas)
{
printf("Password is confirmed.!");
}
else
{
printf("Enter the password again to confirm : ");
scanf("%d",&d);
}
printf("Do you wish to submit the details (y/n) : ");
scanf("%c",&c);
{
if(c=='y')
{
printf("You have successfully created your account");
printf("Your account details are as follows : \n");
printf("Name : %s",reg.name);
printf("Gender : ");
{
if(reg.gender == 'm')
{
printf("MALE");
}
else
{
printf("FEMALE");
}
}
printf("Age : %d",reg.age);
printf("Contact Number : %d",reg.phone);
printf("Address : %d",reg.add);
printf("Email ID : %s",reg.email);
}
else
{
return registerr();
}
}
}

login()
{
char e;
int f;
printf("\nEnter your name : ");
scanf("%s",&e);
printf("\nEnter your password : ");
scanf("%d",&f);
{
if(e==reg.name && f==reg.pas)
{
printf("You have succesfully logged in to your account");
}
else
{
return login();
} 
}

details()
{
char g;
printf("Describe about your disease : ");
scanf("%s",&g);
printf("Dr. Rajat Sharma is available for your disease\n"); 
printf("TIMINGS : 10:00 A.M. TO 08:00 P.M.\n");
printf("DAYS : MONDAY TO FRIDAY\n");
printf("CONTACT NO. : 9958825034");
printf("THANKLYOU...!");
}

make_appoint()
{
char h,j,i,j;
int i;
printf("Enter the name of the doctor with whom you want to make an appointment : ");
scanf("%s",&h);
if(h=="rajat sharma")
{
printf("\nEnter the day : ");
scanf("%s",&j);
printf("\nEnter the time : ");
scanf("%d%c",&i);
printf("\nFees to be paid : Rs.500/-");
printf("\nDo you wish to pay the fees (y/n) : ");
scanf("%c",&j);
{
if (j=='y')
{
pay_fees();
}
else
{
printf("THANKYOU FOR ACCESSING OUR WEBSITE\n");
}
}

pay_fees()
{
int k,l;
printf("Amount of fees : 500\n");
printf("Please add money to your account\n");
printf("Amount which you want to add : Rs.%d/-\n");
scanf("%d",&k);
printf("Rs.%d/- is added to your account\n",k);
printf("Please enter the amount of fees : \n");
scanf("%d",&l);
printf("Your Account Balance is : %d\n",k-l);
printf("Your appointment is created successfully!!!\n");
printf("*** THANKYOU ! ***");
}

return 0;
}
