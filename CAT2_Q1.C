/*
NAME:KUTAYI JANET AYOTI
REG NO:PA106/G/28769/25
DESCRIPTION:2D Array
*/

#include <stdio.h>

int main(){
	//1st 2D Array
	int score[2][2] = {
	{65,92},
	{84,72}
};
    //2nd 2D Array
    int scores[2][2] = {	
    {35,70},
	{59,67}	
};
	
   int x,y;
     printf("THE FIRST ARRAY:\n");
     for(x=0;x<2;x++){
		 for(y =0;y<2;y++){
			 printf("%d\n",scores[x][y]);
		 }
		 printf("\n");
	 }
	
	printf("THE SECOND ARRAY");
	for(x=0;x<2;x++){
		 for(y =0;y<2;y++){
			 printf("%d\n",scores[x][y]);
		 }
		 printf("\n");
	 }
	return 0;
}