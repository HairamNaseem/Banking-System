#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<dos.h>
#include<windows.h>
typedef struct users
{
	int cnic1,cnic2,cnic3,pin,amount,loan_type,income;
	char fname[10],lname[10],type[10];
	float credit_amount,debit_amount;
	float loan_amount,loan_repay_time,repay,interest;
}users;
FILE *fp;

void gotoxy(int x,int y)
{
	COORD coord = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void welcome()
{
	getch();
	system("color 0A");
	int j=5;
	int i;
	for(i=1; i<=193; i++)
	{
		gotoxy(j,3);
		printf("*");
		j++;
	}
	int k=3;
	for(i=1; i<=30; i++)
	{
		gotoxy(j,k);
		printf("*");
		k++;
	}
	for(i=j; i>=5; i--)
	{
		gotoxy(j,k);
		printf("*");
		j--;
	}
	for(i=1; i<=30; i++)
	{
		gotoxy(5,k);
		printf("*");
		k--;
	}
	Sleep(20);
	
	gotoxy(7,5);  printf("FFFFFFFFFFFFFFFF    AAAAAAAAAAAAAAAAA     SSSSSSSSSSSSSSSSSSS   TTTTTTTTTTTTTTTTTT    BBBBBBBBBBBBBBBB         AAAAAAAAAAAAAAAAA    NNNNNNNN                        NNNN  KKKK           KKKK\n");
	sleep(0);
	gotoxy(7,7);  printf("FFFFFFFFFFFFFFFF  AAAAAAAAAAAAAAAAAAAAA   SSSSSSSSSSSSSSSSSSS           TT            BBBBBBBBBBBBBBBBBB     AAAAAAAAAAAAAAAAAAAAA  NNNNNNNNNN                      NNNN  KKKK         KKKK\n");
	sleep(0);
	gotoxy(7,9);  printf("FFFF              AAAA             AAAA   SSSS                          TT            BBBB             BBB   AAAA             AAAA  NNNN    NNNN                    NNNN  KKKK       KKKK\n");
	sleep(0);
	gotoxy(7,11); printf("FFFF              AAAA             AAAA   SSSS                          TT            BBBB             BBBB  AAAA             AAAA  NNNN      NNNN                  NNNN  KKKK     KKKK\n");
	sleep(0);
	gotoxy(7,13); printf("FFFF              AAAA             AAAA   SSSS                          TT            BBBB             BBBB  AAAA             AAAA  NNNN        NNNN                NNNN  KKKK   KKKK\n");
	sleep(0); 
	gotoxy(7,15); printf("FFFF              AAAA             AAAA   SSSS                          TT            BBBB             BB    AAAA             AAAA  NNNN          NNNN              NNNN  KKKK KKKK\n");
	sleep(0);
	gotoxy(7,17); printf("FFFFFFFFFFFFFFFF  AAAAAAAAAAAAAAAAAAAAA   SSSSSSSSSSSSSSSSSSS           TT            BBBBBBBBBBBBBBBBB      AAAAAAAAAAAAAAAAAAAAA  NNNN            NNNN            NNNN  KKKKKKKK\n");
	sleep(0);
	gotoxy(7,19); printf("FFFF              AAAA             AAAA                  SSSS           TT            BBBB             BB    AAAA             AAAA  NNNN              NNNN          NNNN  KKKK KKKK\n");
	sleep(0);
	gotoxy(7,21); printf("FFFF              AAAA             AAAA                  SSSS           TT            BBBB             BBBB  AAAA             AAAA  NNNN                NNNN        NNNN  KKKK   KKKK\n");
	sleep(0);
	gotoxy(7,23); printf("FFFF              AAAA             AAAA                  SSSS           TT            BBBB             BBBB  AAAA             AAAA  NNNN                  NNNN      NNNN  KKKK     KKKK\n");
	sleep(0);
	gotoxy(7,25); printf("FFFF              AAAA             AAAA                  SSSS           TT            BBBB             BBBB  AAAA             AAAA  NNNN                    NNNN    NNNN  KKKK       KKKK\n");
	sleep(0);
	gotoxy(7,27); printf("FFFF              AAAA             AAAA                  SSSS           TT            BBBB             BB    AAAA             AAAA  NNNN                      NNNN  NNNN  KKKK         KKKK\n");
	sleep(0);
	gotoxy(7,29); printf("FFFF              AAAA             AAAA   SSSSSSSSSSSSSSSSSSS           TT            BBBBBBBBBBBBBBBBB      AAAA             AAAA  NNNN                        NNNNNNNN  KKKK           KKKK\n");
	sleep(0);
	gotoxy(7,30); printf("FFFF              AAAA             AAAA   SSSSSSSSSSSSSSSSSSS           TT            BBBBBBBBBBBBBBBB       AAAA             AAAA  NNNN                         NNNNNNN  KKKK            KKKK\n");
	sleep(0);
	
	gotoxy(7,37); printf("LOADING PLEASE WAIT FOR A MOMENT......");
	int jj=7;
	for(i=1; i<=191; i++)
	{
		gotoxy(jj,39);
		printf("%c",223);
		if(i==50||i==170)
		    Sleep(10);
		    Sleep(5);
		    jj++;
	}
	sleep(0);
	system("cls");
}
int main(void)
{
    {
	    welcome();
    }
	system("COLOR 0A");
	int ans,i,temp=13;
	float interest;
	int pass,key=00000000;
	
	for(i=1;i<212;i++)
	{
		printf("*");
	}
	printf("\n\t\t\t\t\t\t\t\t\t\t\tWELCOME TO FAST BANK\n");
	for(i=1;i<212;i++)
	{
		printf("*");
	}
	printf("\n");
	while(temp!=0)
	{
	printf("\n\n\n");
	printf("\t\t\t\t PRESS 1: TO CREATE AN ACCOUNT");
	printf("\t\t\t\t\t\t\t PRESS 2: TO DISPLAY ALL CUSTOMERS INFORMATION\n\n\n\n");
	printf("\t\t\t\t PRESS 3: FOR YOUR ACCOUNT INFROMATION");
	printf("\t\t\t\t\t\t PRESS 4: TO CHECK BALANCE\n\n\n\n");
	printf("\t\t\t\t PRESS 5: FOR CREDIT");
	printf("\t\t\t\t\t\t\t\t PRESS 6: FOR DEBIT\n\n\n\n");
	printf("\t\t\t\t PRESS 7: FOR LOAN");
	printf("\t\t\t\t\t\t\t\t PRESS 0: TO EXIT\n\n\n\n");
	scanf("%d", &temp);
	
	
	if(temp==1)
	{
		int l;
	printf("\nWanna Create?\n\n1.SAVING ACCOUNT\n2.CURRENT CURRENT\n\n");
	printf("Enter your choice: ");
	scanf("%d", &l);
	users *s;
	printf("How many accounts? ");
	scanf("%d", &ans);
	fp = fopen("temp.txt", "a");
	s = (users*)calloc(ans, sizeof(users));
		for(i=0;i<ans;i++)
		{
			printf("Enter first 5 numbers of CNIC: ");
			scanf("%d",&s[i].cnic1);
            printf("Enter middle 7 numbers of CNIC: ");
			scanf("%d",&s[i].cnic2);
			printf("Enter last 1 number of CNIC: ");
			scanf("%d",&s[i].cnic3);
			if(s[i].cnic1>99999  || s[i].cnic2>9999999 || s[i].cnic3>9 || s[i].cnic1<10000 || s[i].cnic2<1000000 || s[i].cnic3<1)
			{	
			    printf("CNIC not valid!\n");
				exit(0);
			}
			printf("Enter your First name: ");
           	scanf(" %[^\n]*c",s[i].fname);
			printf("Enter your Last name: ");
           	scanf(" %[^\n]*c",s[i].lname);
			printf("Set a 4 digit pincode: ");
			scanf("%d",&s[i].pin);
			if(s[i].pin>9999)
			{
			    printf("PIN CODE not valid!\n");
			    exit(0);
			}
			else
			printf("\npincode **** set to %d\n",s[i].pin);
			printf("Enter a amount: ");
			scanf("%d", &s[i].amount);
			if(s[i].amount<1000)
			{
			    printf("Amount not enough to open account!\n");
			}
			else if(l==1)
			{
			    printf("\nAccount opened successfully with amount %d\n",s[i].amount);
			    interest = ((s[i].amount * 5 * 1)/100);
		        printf("Addition of Rs %.1f every year in account\n\n",interest);
			}
			else
			{
				printf("\nAccount opened successfully with amount %d\n",s[i].amount);
			}
			if(l==1)
			strcpy(s[i].type,"Saving Account\n");
			if(l==2)
			strcpy(s[i].type,"Current Account\n");			            
			fwrite(&s[i], sizeof(users), 1, fp);
		}
	fclose(fp);
	}
	if(temp==2)
	{
		printf("ONLY FOR AUTHORIZED PERSONEL\n\n");
	    printf("Enter 8 digit Admin key: ");
		scanf(" %d",&pass);
		if(pass!=key)
		{
			printf("Incorrect Password");
			exit(0);
		}
		else
		{
			fp = fopen("temp.txt", "r");
			users s1;
			while(fread(&s1, sizeof(users), 1, fp))
			printf("\n\nAccount Type: %s\nName: %s %s\nCNIC: %d-%d-%d\namount: %d\n",s1.type, s1.fname, s1.lname, s1.cnic1, s1.cnic2, s1.cnic3, s1.amount);
			fclose(fp);
		}
    }
	if(temp==3)
	{
		users s1;
		int check;
		printf("Enter your pin: ");
		scanf("%d", &check);
		if(check>9999||check<1000)
		{
			printf("Pin Not Valid!");
			exit(0);
		}
	    fp = fopen("temp.txt", "r");
	    while(fread(&s1, sizeof(users), 1, fp))
	    {
		    if(s1.pin==check)
		    {
		        printf("\n\nType: %s\nName: %s %s\nCNIC: %d-%d-%d\namount: %d\npin : %d", s1.type, s1.fname, s1.lname, s1.cnic1, s1.cnic2, s1.cnic3, s1.amount, s1.pin);
		        break;
		    }
	    }
	    fclose(fp);	
	}
	if(temp==4)
	{
		users s1;
		int check;
		printf("\nEnter the pin: ");
		scanf("%d", &check);
		if(check>9999||check<1000)
		{
			printf("Pin Not Valid!");
			exit(0);
		}
	fp = fopen("temp.txt", "r");
	while(fread(&s1, sizeof(users), 1, fp))
	{
		if(s1.pin==check)
		{
		    printf("Name = %s %s\nAmount in your Account = %d\n", s1.fname, s1.lname, s1.amount);
		    break;
		}
	}
	}
	if(temp==5)
	{
		FILE *fp1;
		users s1;
		int check;
		printf("\nEnter the pin: ");
		scanf("%d", &check);
		if(check>9999||check<1000)
		{
			printf("Pin Not Valid!");
			exit(0);
		}
	fp = fopen("temp.txt", "r");
	fp1 = fopen("ss.txt", "w");
	while(fread(&s1, sizeof(users), 1, fp))
	{
		if(s1.pin==check)
		{
		    printf("\nName = %s %s\n",s1.fname,s1.lname);
		    printf("\nCurrent amount in your account = %d\n\n",s1.amount);
		    printf("Enter amount which you want to add in your account: ");
			scanf("%f",&s1.credit_amount);
			s1.amount = s1.amount + s1.credit_amount;
			printf("\nAfter credited\n\nAmount = %d",s1.amount);
			break;
		}
	}
	fwrite(&s1, sizeof(users), 1, fp1);
		fclose(fp1);
		fclose(fp);
	fp = fopen("temp.txt", "a");
	fp1 = fopen("ss.txt", "r");
		while(fread(&s1, sizeof(users), 1, fp1))
		fwrite(&s1, sizeof(users), 1, fp);
	
	}
	if(temp==6)
	{
		users s1;
		int check;
		printf("\nEnter the pin: ");
		scanf("%d", &check);
		if(check>9999||check<1000)
		{
			printf("Pin Not Valid!");
			exit(0);
		}
	fp = fopen("temp.txt", "r");
	while(fread(&s1, sizeof(users), 1, fp))
	{
		if(s1.pin==check)
		{
		    printf("\nName = %s %s\n",s1.fname,s1.lname);
			printf("\nCurrent amount in your account = %d\n\n",s1.amount);
		    printf("How many amount you want to debit: ");
		    scanf("%f",&s1.debit_amount);
		    s1.amount = s1.amount - s1.debit_amount;
		    printf("\nAfter Debit\n\nAmount = %d",s1.amount);
		    break;
		}
	}
	}
	if(temp==7)
	{
		users s1;
		printf("TYPES OF LOAN:\n 1.house loan\n 2.car loan\n 3.bussiness loan\n\n");
		printf("\tLOAN INQUIRY TABLE\n\nIncome:\t\teligibility for loan type:\n\n");
		printf("5000-49999\tcar loan\n50000-99999\tcar loan/house loan\n>100000\t\tall kinds of loan\n\n");
		printf("Enter your monthly income: ");
		scanf("%d",&s1.income);
		if(s1.income<=50000&&s1.income>=5000)
		{
			printf("\nEligible for car loan only\n");
		}
		else if(s1.income>50000&&s1.income<=100000)
		{
			printf("\nEligible for car loan and house loan only\n");
		}
		else if(s1.income>100000)
		{
			printf("\nEligible for all kinds of loan\n");
		}
		else
		{
			printf("\nNot eligible for any loan");
			exit(0);
		}
		printf("\nEnter loan type (1, 2 or 3): ");
		scanf("%d",&s1.loan_type);
		if(s1.loan_type==1)
		{
			fp = fopen("Loan record.txt","a");
			printf("\nCONDITIONS:\n interest: 5 percent\n penalty if loan not repayed within time\n");
			printf("\nEnter required amount of loan: ");
			scanf("%f", &s1.loan_amount);
			printf("Enter loan repayment time in years: ");
			scanf("%f", &s1.loan_repay_time);
			s1.interest = ((s1.loan_amount * 5 * s1.loan_repay_time)/100);
			s1.repay=s1.interest+s1.loan_amount;
			printf("\nloan to be repayed = %.1f", s1.repay);
			fclose(fp);
			exit(0);
		}
		if(s1.loan_type==2)
		{
			fp = fopen("Loan record.txt","a");
			printf("\nCONDITIONS:\n interest: 5 percent\n penalty if loan not repayed within time\n");
			printf("\nEnter required amount of loan: ");
			scanf("%f", &s1.loan_amount);
			printf("Enter loan repayment time in years: ");
			scanf("%f", &s1.loan_repay_time);
			s1.interest = ((s1.loan_amount * 3 * s1.loan_repay_time)/100);
			s1.repay=s1.interest+s1.loan_amount;
			printf("\nloan to be repayed = %.1f", s1.repay);
			fclose(fp);
			exit(0);
		}
		if(s1.loan_type==3)
		{
			fp = fopen("Loan record.txt","a");
			printf("\nCONDITIONS:\n interest: 5 percent\n penalty if loan not repayed within time\n");
			printf("\nEnter required amount of loan: ");
			scanf("%f", &s1.loan_amount);
			printf("Enter loan repayment time in years: ");
			scanf("%f", &s1.loan_repay_time);
			s1.interest = ((s1.loan_amount * 6 * s1.loan_repay_time)/100);
			s1.repay=s1.interest+s1.loan_amount;
			printf("\nloan to be repayed = %.1f", s1.repay);
			fclose(fp);
			exit(0);
		}
	}
	if(temp==0)
	{
		printf("\nT H A N K S  F O R  V I S I T I N G !");
		exit(0);
	}
	printf("\n");
	system("PAUSE");
	system("CLS");
}
}
