// Project //
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
	printf("\n\n              VINCE CAFE             \n\n");
	int i;
	char name[100];
	int pref;
	int pref1,ord;
	int total_prod=0;
	int qty[100];
	float price[100];
	char product_name[100][50];
	int str1;
	int str2;
	int rev;
	
	

	
	printf("\nWhat's your name ? ");
	scanf("%[^\n]s",&name);
	
	while (1)
	{
	
		printf("\n     HERE IS OUR MENU     \n");
		printf("\n    1    : Milkshake ");
		printf("\n    2    : Pizza ");
		printf("\n    3    : Sandwich ");
		printf("\n    4    : Waffles ");
		printf("\n    5    : Pasta ");
		printf("\nWhat would you like to order %s? ",name);
		scanf("%d",&pref);
		
		
		switch(pref)
		{
			case 1 : printf("\nMILKSHAKE");
						printf("\nWhich flavour would you like to order ? ");
						printf("\n 1 : Strawberry - 135 RS");
						printf("\n 2 : Chocolate - 150 RS");
						printf("\n 3 : BlueBerry - 170 RS");
						printf("\n 4 : Pink Chocolate - 250 RS");
						printf("\n 5 : Nutella - 150 RS");
						
						printf("\nWhich flavour would you like to order ? ");
						scanf("%d",&pref1);
						switch(pref1)
						{
							case 1 : printf("\nStrawberry Milkshake 135 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=135*qty[total_prod];
									strcpy(product_name[total_prod++],"Strawberry Milkshake");
									break;
									
							case 2 : printf("\nChocolate Milkshake 150 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=150*qty[total_prod];
									strcpy(product_name[total_prod++],"Chocolate Milkshake");
								
									break;
									
							case 3 : printf("\nBlueBerry Milkshake 170 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=170*qty[total_prod];
									strcpy(product_name[total_prod++],"BlueBerry Milkshake");
								
									break;
									
							case 4 : printf("\nPink Chocolate Milkshake 250 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=250*qty[total_prod];
									strcpy(product_name[total_prod++],"Pink Chocolate Milkshake");
									
									break;
									
							case 5 : printf("\nNutella Milkshake 150 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=150*qty[total_prod];
									strcpy(product_name[total_prod++],"Nutella Milkshake");
									
									break;
									
									default : {
										printf("\nInvalid choice please enter your flavour again");
										break;
									}					
						}break;
			case 2 : printf("\nPIZZA");
						
						printf("\n 1 : Margerita Pizza - 100 RS");
						printf("\n 2 : Cheesy Pizza - 140 RS");
						printf("\n 3 : Cheesy 7 Pizza - 150 RS");
						printf("\n 4 : Flame and Hot Pizza - 135 RS");
						printf("\n 5 : Sweet Corn Pizza - 170 RS");
						
						printf("\nWhich pizza would you like to order ? ");
						scanf("%d",&pref1);
						switch(pref1)
						{
							case 1 : printf("\nMargerita Pizza 100 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=100*qty[total_prod];
									strcpy(product_name[total_prod++],"Margerita Pizza");
									
									break;
							case 2 : printf("\nCheesy Pizza 140 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=140*qty[total_prod];
									strcpy(product_name[total_prod++],"Cheesy Pizza");
									
									break;
							case 3 : printf("\nCheesy 7 Pizza 150 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=150*qty[total_prod];
									strcpy(product_name[total_prod++],"Cheesy 7 Pizza");
									
									break;
							case 4 : printf("\nFlame and Hot Pizza 135 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=135*qty[total_prod];
									strcpy(product_name[total_prod++],"Flame and Hot Pizza");
							
								
									break;
							case 5 : printf("\nSweet Corn Pizza 170 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=170*qty[total_prod];
									strcpy(product_name[total_prod++],"Sweet Corn Pizza");
									
									break;
									
									default : {
										printf("\nInvalid choice please enter your pizza again");
										break;
									}
									break;					
						}break;
			case 3 : printf("\nSANDWICH");
						
						printf("\n 1 : Regular Sandwich - 65 Rs");
						printf("\n 2 : Cheesy Sandwich - 70 Rs");
						printf("\n 3 : Spicy Sandwich - 95 RS");
						printf("\n 4 : Paneer Sandwich - 100 RS");
						printf("\n 5 : Mexican Sandwich - 125 RS");
						
						printf("\nWhich sandwich would you like to order ? ");
						scanf("%d",&pref1);
						switch(pref1)
						{
							case 1 : printf("\nRegular Sandwich 65 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=65*qty[total_prod];
									strcpy(product_name[total_prod++],"Regular Sandwich");
									break;
							case 2 : printf("\nCheesy Sandwich 70 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=70*qty[total_prod];
									strcpy(product_name[total_prod++],"Cheesy Sandwich");
									
									break;
							case 3 : printf("\nSpicy Sandwich 95 RS ");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=95*qty[total_prod];
									strcpy(product_name[total_prod++],"Spicy Sandwich");
									
									break;
							case 4 : printf("\nPaneer Sandwich 100 RS ");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=100*qty[total_prod];
									strcpy(product_name[total_prod++],"Paneer Sandwich");
									
									break;
							case 5 : printf("\nMexican Sandwich 125 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=125*qty[total_prod];
									strcpy(product_name[total_prod++],"Mexican Sandwich");
									
									break;
									
									default : {
										printf("\nInvalid choice please enter your sandwich again");
										break;
									}					
						}break;
			case 4 : printf("\nWaffles");
						
						printf("\n 1 : Nutella Waffles - 115 RS");
						printf("\n 2 : BlueBerry Waffle - 120 RS");
						printf("\n 3 : Oreo Waffle - 130 RS");
						printf("\n 4 : Kitkat Waffle - 140 RS");
						printf("\n 5 : Lotus Biscoff Waffle - 170 RS ");
						
						printf("\nWhich waffles would you like to order ? ");
						scanf("%d",&pref1);
						switch(pref1)
						{
							case 1 : printf("\nNutella Waffle 115 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=115*qty[total_prod];
									strcpy(product_name[total_prod++],"Nutella Waffle");
							
									break;
							case 2 : printf("\nBlueBerry Waffle 120 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=120*qty[total_prod];
									strcpy(product_name[total_prod++],"Blueberry Waffle");
							
									break;
							case 3 : printf("\nOreo Waffle  130 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=130*qty[total_prod];
									strcpy(product_name[total_prod++],"Oreo Waffle");
							
									break;
							case 4 : printf("\nKitkat Waffle 140 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=140*qty[total_prod];
									strcpy(product_name[total_prod++],"Kitkat Waffle");
							
									break;
							case 5 : printf("\nLotus Biscoff Waffle 170 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=170*qty[total_prod];
									strcpy(product_name[total_prod++],"Lotus Biscoff Waffle");
									break;
									
									
									default : {
										printf("\nInvalid choice please enter your waffles again");
										break;
									}					
						}break;
			case 5 : printf("\nPasta");
						
						printf("\n 1 : Regular Pasta - 65 RS");
						printf("\n 2 : Cheesy Pasta - 70 RS");
						printf("\n 3 : American Pasta - 85 RS ");
						printf("\n 4 : Chatpata Pasta  - 95 Rs");
						printf("\n 5 : Macroni Pasta - 100 RS");
						
						printf("\nWhich pasta would you like to order ? ");
						scanf("%d",&pref1);
						switch(pref1)
						{
							case 1 : printf("\nRegular 65 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=65*qty[total_prod];
									strcpy(product_name[total_prod++],"Regular Pasta");
							
									break;
							case 2 : printf("\nCheesy Pasta 70 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=70*qty[total_prod];
									strcpy(product_name[total_prod++],"Cheesy Pasta");
							
									break;
							case 3 : printf("\nAmerican Pasta 85 RS  ");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=85*qty[total_prod];
									strcpy(product_name[total_prod++],"American Pasta");
							
									break;
							case 4 : printf("\nChatpata Pasta 95 RS ");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=95*qty[total_prod];
									strcpy(product_name[total_prod++],"Chatpata Pasta");
							
									break;
							case 5 : printf("\nMacroni Pasta  100 RS");
									printf("\nEnter Qty : ");
									scanf("%d",&qty[total_prod]);
									price[total_prod]=100*qty[total_prod];
									strcpy(product_name[total_prod++],"Macroni Pasta");
							
									break;
																	
									
									default : {
										printf("\nInvalid choice please enter your pasta again");
										break;
									}					
						}break;
			default : printf("\nInvalid choice please enter again");
					   break;
		}
		
		
				
		printf("\nHave you finished your order %s ?",name);
		printf("\n 1 : YES\n");
		printf("\n 2 : NO\n");
		scanf("%d",&ord);
		if(ord==1)
		{
			break;
		}
	

	}
	float sum=0;
	float tax=0;
	float tax1=0;
		
		for(i=0;i<total_prod;i++)
		{
			sum=sum+price[i]*qty[i];
			printf("\n %s  \t%d  \t%0.2f ",product_name[i],qty[i],price[i]);
		}
				printf("\n Total without tax = %0.2f",sum);
			printf("\n-Tax (SGST) \t \t 2.5 %%");
			tax=sum*0.025;
			sum=tax+sum;
			printf("\n Your Bill including SGST : %0.2f",sum);
			tax1=sum*0.025;
			sum=tax1+sum;
			printf("\n-Tax (CGST) \t \t 2.5 %%");
			
			
			
			printf("\n\t\t Your Bill including CGST : %0.2f\t\t\n\n\n\n\n\n",sum);
			
			
			
			printf("\nWe request you to give your honest review about us :\n \t ");
			scanf("%d",&rev);
			
			printf("\n********************************************************************************");
			
			
			printf("\n                                  THANK YOU                                      ");
		
			
		
}
