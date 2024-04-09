#include<stdio.h>

main()
{
	//Write a Program to check if a given password is strong or not by satisfying the below criteria
	
	char password[100];
	int i, digit=0, word=0, special_symbol=0;
	
	printf("enter the password = \n");
	gets(password);
	
	for(i=0; password[i]!='\0'; i++)
	{
		if(password[i]>='0' && password[i]<='6')
		{
			digit=1;
		}
		else if((password[i]>='a' && password[i]<='z' || password[i]>='A' && password[i]<='Z'))
		{
			word=1;
		}
		else
		{
			special_symbol=1;
		}
	}
	if(password<6 || digit==0 || word==0 || special_symbol==0)
	{
		printf("Your password is Strong");
	}
	else
	{
		printf("Your password is not Strong");
	}
}