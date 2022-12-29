#include <stdio.h>
#include <stdlib.h>



girisFonksiyonu();
hataFonksiyonu();
islemFonksiyonu();



int main() {
	
	
	
	girisFonksiyonu();
	
	
	islemFonksiyonu();
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}




girisFonksiyonu(){
	
	
	printf("                                     *****WELCOME TO ZODIAC SIGN CALCULATOR*****\n\n\n");
	
	
}


hataFonksiyonu(){
	
	
	printf("ERROR!\n");
	printf("Try Again\n\n");	
	
}


islemFonksiyonu(){
	
	int birthyear;
	int birthmonth;
	int birthday;
	
	
	
	dateG: 
	
	printf("Please enter your date of birthday \n\n");
	scanf("%d", &birthday);
	printf("\n\n");
		printf("Please enter your date of birthmounth \n\n");
	scanf("%d", &birthmonth);
	printf("\n\n");
		printf("Please enter your date of birthyear \n\n");
	scanf("%d", &birthyear);
	printf("\n\n");
	



if(birthday<1 || birthday>31 || birthmonth<1 || birthmonth>12 || birthyear<0){
	
	
	hataFonksiyonu();
	goto dateG;
	
}


	
	
	else if(birthmonth==3 && birthday>=21 && birthday<=31 || birthmonth==4 && birthday>=1 && birthday<=20){
		
		printf("You are ARIES");
		
	}
	
	else if(birthmonth==4 && birthday>=21 && birthday<=31 || birthmonth==5 && birthday>=1 && birthday<=20){
		
		printf("You are TAURUS");
		
	}

	else if(birthmonth==5 && birthday>=21 && birthday<=31 ||birthmonth==6 && birthday>=1 && birthday<=20){
		
		printf("You are GEMINI");
		
	}
	
	else if(birthmonth==6 && birthday>=21 && birthday<=31 ||birthmonth==7 && birthday>=1 && birthday<=22){
		
		printf("You are CANCER");
		
	}
	
	else if(birthmonth==7 && birthday>=23 && birthday<=31 ||birthmonth==8 && birthday>=1 && birthday<=22){
		
		printf("You are LEO");
		
	}
	
	else if(birthmonth==8 && birthday>=23 && birthday<=31 ||birthmonth==9 && birthday>=1 && birthday<=22){
		
		printf("You are VIRGO");
		
	}
	
	else if(birthmonth==9 && birthday>=23 && birthday<=31 ||birthmonth==10 && birthday>=1 && birthday<=22){
		
		printf("You are LIBRA");
		
	}
	
	else if(birthmonth==10 && birthday>=23 && birthday<=31 ||birthmonth==11 && birthday>=1 && birthday<=22){
		
		printf("You are SCORPIO");
		
	}
	
	else if(birthmonth==11 && birthday>=23 && birthday<=31 ||birthmonth==12 && birthday>=1 && birthday<=21){
		
		printf("You are SAGGITARIUS");
		
	}	
	
	else if(birthmonth==12 && birthday>=22 && birthday<=31 ||birthmonth==1 && birthday>=1 && birthday<=19){
		
		printf("You are CAPRICORN");
		
	}
	
	else if(birthmonth==1 && birthday>=20 && birthday<=31 ||birthmonth==2 && birthday>=1 && birthday<=18){
		
		printf("You are AQUARIUS");
		
	}
	
	else if(birthmonth==2 && birthday>=19 && birthday<=31 ||birthmonth==3 && birthday>=1 && birthday<=20){
		
		printf("You are PISCES");
		
	}
	
	
	else{
		
		
	}

}




























