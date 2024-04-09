#include<stdio.h>
main()
{
	//Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.
	
   char a[] = "admin@gmail.com";
   char b[] = "123456789";
   char c[50] , d[50];
	
	printf("enter the email = ");
	gets(c);
	
	printf("enter the password = ");
	gets(d);
	
    if(strcmp(a,c)==0 && strcmp(b,d)==0)
    {
    	printf("Login Successful...");
	}
	else
	{
		printf("Login Failed...");
	}
}