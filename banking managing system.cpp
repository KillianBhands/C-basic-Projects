#include<stdio.h>
#include<string.h>
int main(){
	int Account_Balance;
	int Deposit;
	int Withdrawal;
	int Action;
	char Name[100];
	char Login[100];
	char Password[100];
	char Saved[100];
	char Login_name[100];
	int Check_Password;
	int Check_Username;
	int Money;
	
	
	
	
	

	
	printf("Register \n");
	printf("Enter your Name:");
	scanf("%s",&Name);
	printf("Enter your Password:");
	scanf("%s",&Login);
	printf("Enter the amount of deposit:");
	scanf("%d",&Money);
	
	
	do{
		printf("Login: \n");
		printf("Enter your username:");
		scanf("%s",&Login_name);
		printf("Enter your Password:");
		scanf("%s",Password);
		Check_Username =strcmp(Login_name,Name);
		Check_Password =strcmp(Password,Login);
		if( Check_Password != 0 || Check_Username !=0 ){	
			printf("Invalid Login Information\n");
		}
	}while(Check_Password !=0 || Check_Username !=0);
	
	
	do{
		FILE *pf = fopen("history.txt","a");
		
		printf("Options:	1.Withdraw 2.Deposit 3.Check Account Balance 4.Transaction History 5.Exit ");
		scanf("%d",&Action);
		
		switch(Action){
			case 1:
				do{
				printf("Enter the amount of money that you want to withdraw: ");
				scanf("%d",&Withdrawal);
				if(Withdrawal > Money){
						printf("Invalid amount of money\n");
						printf("\n");
					}
				}while(Withdrawal > Money);
				Money = Money - Withdrawal;
				printf("Account balance: %d \n",Money);
				printf("\n");
				fprintf(pf,"You withdrew: -%d \n",Withdrawal);
				
				fclose(pf); 				
			break;
			
			case 2:
				do{
					printf("Enter the amount of money that you want to deposit: ");
					scanf("%d",&Deposit);
					if(Deposit <= 0){
						printf("Invalid amount of money\n");
						printf("\n");
					}
				}while(Deposit <= 0);
				Money = Money + Deposit;
				printf("Account balance: %d\n",Money);
				fprintf(pf,"You deposited: +%d \n",Deposit);
				fclose(pf);
			break;
			
			case 3:
				printf("Account balance: %d\n",Money);
				printf("\n");
			break;
			
			
			case 4:
				FILE *pr=fopen("history.txt","r");
				char buffer[255];
				
				while(fgets(buffer,255,pr)!=NULL){
					printf("%s",buffer);
				}
				fclose(pr);
			break;
		
		}	
	}while(Action !=5);
	
		printf("Account Balance: %d ",Money);
		
		
		
	
	

		
}
