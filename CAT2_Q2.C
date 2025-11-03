/*
NAME:KUTAYI JANET AYOTI
REG NO:PA106/G/28769/25
DESCRIPTION:A C program that prompts the user to enter hors worked in a week
            and hourly wages then it returns the gross pay,taxes and net pay.
*/

#include<stdio.h>

int main(){
    float Hours_Worked_Weekly,Hourly_Wages;
	float Gross_Pay =0, Tax = 0, Net_Pay;
	
	//prompt the user toenter the following
	printf("Enter the hours worked in a week:");	
	scanf("%f",&Hours_Worked_Weekly);
	printf("Enter the paid Hourly Wage:");
	scanf("%f",&Hourly_Wages);
	
	//GrossPay Calculation
	if(Hours_Worked_Weekly>40){
		Gross_Pay = (40*Hourly_Wages)+((Hours_Worked_Weekly-40)*Hourly_Wages*1.5);
    }else{
		Gross_Pay=Hours_Worked_Weekly*Hourly_Wages;
	}
	
	//Tax calculation
	if(Gross_Pay<=600){
		Tax=Gross_Pay*0.15;
	}else{
		Tax=(600*0.15)+((Gross_Pay-600)*0.20);
	}
	
	//Net_Pay calculation
	Net_Pay=Gross_Pay-Tax;
	
	//Display results
	printf("Taxes:%.2f\n",Tax);
	printf("Net Pay:%.2f\n",Net_Pay);
	printf("Gross Pay:%.2f\n",Gross_Pay);
	
	return 0;
}