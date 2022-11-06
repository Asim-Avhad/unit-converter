#include<stdio.h>
#include<math.h>
int speed();
int Mass();
int pressure();
int area();
int lenght();
int angle();
int digistore();
int temp();
int volume();
int main(){
    int s;
   
    
    printf("\n\tWELCOME TO KK. WAGH ENGINEERING EDUCATIONAL AND RESEARCH\n ");
    printf("\n\t\tMICRO  PROJECT : UNIT CONVERTER \n\t\t COMPUTER SCIENCE AND DESIGN\n\n");
    printf("\t\t\t\t\tCODED BY: \n\t\t\t\t\t\t1] Shaunak More \n\t\t\t\t\t\t2] Asim Avhad \n\t\t\t\t\t\t3] Jatin Gade\n\t\t\t\t\t\t4] Kaustubh More");
   printf("\n\n\n-----------WELCOME TO UNIT CONVERTER------------ \n");
  
    char choice;   
   do{
   printf("CONVERT:\n1]LENGHT UNITS\n2]MASS UNITS\n3]ANGLE UNITS\n4]SPEED UNITS\n5]TEMPERATURE UNITS\n6]VOLUME UNITS\n7]PRESSURE UNITS\n8]AREA UNITS\n9]MEMORY STORAGE UNITS\n");
    printf("CHOOSE YOUR OPERATION:\n");
   scanf("%d",&s);


   switch(s){
    case 1:do{
        lenght(); printf("\nDo you want to START again!  (Y/N)\n");
    scanf("%s",&choice);}
    while(choice =='Y');
        break;
    case 2:
        do{Mass(); printf("\nDo you want to START again!  (Y/N)\n");
    scanf("%s",&choice);
    }while(choice =='Y');
        break;
    case 3:
        do{angle(); printf("\nDo you want to START again!  (Y/N)\n");
    scanf("%s",&choice);
    }while(choice =='Y');
        break;
    case 4:do{
        speed(); printf("\nDo you want to START again!  (Y/N)\n");
    scanf("%s",&choice);
    }while(choice =='Y');
        break;
    case 5:
       do{ temp(); printf("\nDo you want to START again!  (Y/N)\n");
    scanf("%s",&choice);
    }while(choice =='Y');
        break;
    case 6:
        do{volume(); printf("\nDo you want to START again!  (Y/N)\n");
    scanf("%s",&choice);
    }while(choice =='Y');
        break;
    case 7:
        do{pressure(); printf("\nDo you want to START again!  (Y/N)\n");
    scanf("%s",&choice);
    }while(choice =='Y');
        break;
    case 8:do{
        area();  printf("\nDo you want to START again!  (Y/N)\n");
    scanf("%s",&choice);
    }while(choice =='Y');
        break;
    case 9:
       do{ digistore(); printf("\nDo you want to START again!  (Y/N)\n");
    scanf("%s",&choice);
    }while(choice =='Y');
        break;
    default:
        printf("!!!!WRONG CHOICE!!!!\n");
        break;
        

    }
    printf("\nDo you want to return to CONVERT menu ? (Y/N)\n");
    scanf("%s",&choice);
    }while(choice =='Y');
    printf("THANKYOU FOR USING UNIT CONVERTER \n");
        
    return 0;
        }

   //FUNCTIONS
   //ASEEM  
    int Mass(){
    printf("\n-----------SELECTED MASS UNIT CONVERTER-----------\n");
    int ch;
    char choice;
    float gm,kg,mg,pounds,quintal,ton,acres,sqft,hectare,msq;
        printf("Select the unit that you want to convert from\n");
        printf("1.Press 1 for Gram coverter\n2.Press 2 for Kilogram Converter\n3.Press 3 for Miligram converter\n4.Press 4 for Quintal Converter\n5.Press 5 for Pound Converter\n6.Press 6 for Ton Converter\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("----------Welcome to Grams conversion------------\n");
            printf("1.Press 1 for Gram to Kilogram Conversion\n2.Press 2 for Gram to Miligram Conversion\n3.Press 3 for Gram to Quintal conversion\n4.Press 4 for Gram to Pound Conversion\n");
            scanf("%d",&ch);
            switch (ch)
            {
                        case 1:
            			    printf("----------Grams into Kilograms------------\n");
            			    printf("Enter the value of mass which you want to convert to Kilograms:\n");
            			    scanf("%f",&gm);
            			    kg=gm/1000;
            		    	printf("Mass conversion from Grams to kilograms is: %f kg\n",kg);
            		    	break;
            		    case 2:
            			    printf("----------Grams into Miligrams------------\n");
            			    printf("Enter the value of mass which you want to convert to Miligrams:\n");
            			    scanf("%f",&gm);
            			    mg=gm*1000;
                        	printf("Mass conversion from Grams to Miligrams is: %f mg",mg);
                        	break;
            
                    	case 3:
                        	printf("----------Grams into Quintal------------\n");
                        	printf("Enter the value of mass in Grams which you want to convert to Quintal:\n");
                        	scanf("%f",&gm);
                        	quintal=gm/100000;
                        	printf("Mass conversion from Grams to Quintal is: %f Quintal\n",quintal);
                        	break;
                    	case 4:
            			    printf("----------Grams into Ton------------\n");
            			    printf("Enter the value of mass in Grams which you want to convert to Ton:\n");
            			    scanf("%f",&gm);
            
            			    ton=gm/907185.8188;
            			    printf("Mass conversion from Grams to Quintal is: %f Tons\n",ton);
            			    break;
                    	case 5:
                        	printf("----------Grams into Pounds------------\n");
                        	printf("Enter the value of mass in Grams which you want to convert to Pounds:\n");
                        	scanf("%f",&gm);
            
                        	pounds=gm/453.6;
            
                        	printf("Mass conversion from Grams to Pounds is: %f Pounds\n",ton);
                        	break;
                        default:
                            printf("!!!WRONG CHOICE!!!");
                            break;
            
			}
		break;
        case 2:
            printf("----------Welcome to Kilogram converter------------\n");
            printf("1.Press 1 for Kiloram to Gram Conversion\n2.Press 2 for Kiloram to Miligram Conversion\n3.Press 3 for Kilogram to Quintal conversion\n4.Press 4 for Kilogram to Pound Conversion\n5.Press 5 for Kilogram to Ton conversion\n");
            scanf("%d",&ch);
            switch(ch)
            {
            			case 1:
							printf("----------Kilograms to Gram------------\n");
							printf("Enter the value of mass which you want to convert to Grams:\n");
							scanf("%f",&kg);
							gm=kg*1000;
							printf("Mass conversion from Kilograms to Grams is: %f Grams\n",gm);
							break;

						case 2:
							printf("----------Kilograms to Miligram------------\n");
							printf("Enter the value of mass which you want to convert to Miligrams:\n");
							scanf("%f",&kg);
							mg=kg*1000000;
							printf("Mass conversion from Kilograms to Miligrams is: %f Miligrams\n",mg);
							break;
						case 3:
							printf("----------Kilograms to Quintal------------\n");
							printf("Enter the value of mass which you want to convert to Quintal:\n");
							scanf("%f",&kg);
							quintal=kg/100;
							printf("Mass conversion from Kilograms to Quintal is: %f Quintal\n",quintal);
						case 4:
							printf("----------Kilograms to Pound------------\n");
							printf("Enter the value of mass which you want to convert to Pound:\n");
							scanf("%f",&kg);
							pounds=kg*2.205;
							printf("Mass conversion from Kilograms to Pound is: %f Pound\n",pounds);
							break;
						case 5:
							printf("----------Kilograms to Ton------------\n");
							printf("Enter the value of mass which you want to convert to Ton:\n");
							scanf("%f",&kg);
							ton=kg*1000;
							printf("Mass conversion from Kilograms to Ton is: %f Tons\n",ton);
							break;
                        default:
                            printf("!!!WRONG CHOICE!!!");
                            break;
            }
		break;
		case 3:
			printf("----------Welcome to Miligram converter------------\n");
            printf("1.Press 1 for Miligram to Gram Conversion\n2.Press 2 for Miligram to Kilogram Conversion\n3.Press 3 for Miligram to Quintal conversion\n4.Press 4 for Miligram to Pound Conversion\n5.Press 5 for Miligram to Ton conversion\n");
            scanf("%d",&ch);
            switch(ch)
			{
						case 1:
							printf("----------Miligram to Gram------------\n");
							printf("Enter the value of mass which you want to convert to Grams:\n");
							scanf("%f",&mg);
							gm=mg/1000;
							printf("Mass conversion from Miligrams to Grams is: %f Grams\n",gm);
							break;
						case 2:
							printf("----------Miligram to Kilogram------------\n");
							printf("Enter the value of mass which you want to convert to Kilograms:\n");
							scanf("%f",&mg);
							kg=mg/1000000;
							printf("Mass conversion from Miligrams to Kilograms is: %f Kilograms\n",kg);
							break;
						case 3:
							printf("----------Miligram to Quintal------------\n");
							printf("Enter the value of mass which you want to convert to Quintal:\n");
							scanf("%f",&mg);
							quintal=mg*0.00000001;
							printf("Mass conversion from Miligrams to Quintal is: %f Quintal\n",quintal);
							break;
						case 4:
							printf("----------Miligram to Pounds------------\n");
							printf("Enter the value of mass which you want to convert to Pounds:\n");
							scanf("%f",&mg);
							pounds=mg/453600;
							printf("Mass conversion from Miligrams to Pounds is: %f Pounds\n",pounds);
							break;
						case 5:
							printf("----------Miligram to Ton------------\n");
							printf("Enter the value of mass which you want to convert to Tons:\n");
							scanf("%f",&mg);
							ton=mg/1000000000;
							printf("Mass conversion from Miligrams to Tons is: %f Tons\n",ton);
							break;
                        default:
                            printf("!!!WRONG CHOICE!!!");
                            break;
			}
		break;
		case 4:
			printf("----------Welcome to Quintal converter------------\n");
            printf("1.Press 1 for Quintal to Gram Conversion\n2.Press 2 for Quintal to Kilogram Conversion\n3.Press 3 for Quintal to Miligram conversion\n4.Press 4 for Quintal to Pound Conversion\n5.Press 5 for Quintal to Ton conversion\n");
            scanf("%d",&ch);
            switch(ch)
			{
						case 1:
							printf("----------Quintal to Gram------------\n");
							printf("Enter the value of mass which you want to convert to Grams:\n");
							scanf("%f",&quintal);
							gm=quintal*100000;
							printf("Mass conversion from Quintal to Grams is: %f Grams\n",gm);
							break;
						case 2:
							printf("----------Quintal to Kilogram------------\n");
							printf("Enter the value of mass which you want to convert to Kilograms:\n");
							scanf("%f",&quintal);
							kg=quintal*100;
							printf("Mass conversion from Quintal to Kilograms is: %f Kilograms\n",kg);
							break;
						case 3:
							printf("----------Quintal to Miligram------------\n");
							printf("Enter the value of mass which you want to convert to Miligram:\n");
							scanf("%f",&quintal);
							mg=quintal*100000000;
							printf("Mass conversion from Quintal to Miligrams is: %f Miligrams\n",mg);
							break;
						case 4:
							printf("----------Quintal to Pounds------------\n");
							printf("Enter the value of mass which you want to convert to Pounds:\n");
							scanf("%f",&quintal);
							pounds=quintal*220.5;
							printf("Mass conversion from Quintal to Pounds is: %f Pounds\n",pounds);
							break;
						case 5:
							printf("----------Quintal to Ton------------\n");
							printf("Enter the value of mass which you want to convert to Tons:\n");
							scanf("%f",&quintal);
							ton=quintal/10;
							printf("Mass conversion from Quintal to Tons is: %f Tons\n",ton);
							break;
                        default:
                            printf("!!!WRONG CHOICE!!!");
                            break;
			}
		break;
		case 5:
			printf("----------Welcome to Pound converter------------\n");
            printf("1.Press 1 for Pound to Gram Conversion\n2.Press 2 for Pound to Kilogram Conversion\n3.Press 3 for Pound to Miligram conversion\n4.Press 4 for Pound to Quintal Conversion\n5.Press 5 for Pound to Ton conversion\n");
            scanf("%d",&ch);
            switch(ch)
			{
						case 1:
							printf("----------Pounds to Gram------------\n");
							printf("Enter the value of mass which you want to convert to Grams:\n");
							scanf("%f",&pounds);
							gm=pounds*453.6;
							printf("Mass conversion from Pounds to Grams is: %f Grams\n",gm);
							break;
						case 2:
							printf("----------Pounds to Kilogram------------\n");
							printf("Enter the value of mass which you want to convert to Kilograms:\n");
							scanf("%f",&pounds);
							kg=pounds/2.205;
							printf("Mass conversion from Pounds to Kilograms is: %f Kilograms\n",kg);
							break;
						case 3:
							printf("----------Pounds to Miligram------------\n");
							printf("Enter the value of mass which you want to convert to Miligrams:\n");
							scanf("%f",&pounds);
							kg=pounds*453600;
							printf("Mass conversion from Pounds to Miligrams is: %f Miligrams\n",mg);
							break;
						case 4:
							printf("----------Pounds to Quintal------------\n");
							printf("Enter the value of mass which you want to convert to Quintal:\n");
							scanf("%f",&pounds);
							quintal=pounds/220.462;
							printf("Mass conversion from Pounds to Quintal is: %f Quintal\n",quintal);
							break;
						case 5:
							printf("----------Pounds to Ton------------\n");
							printf("Enter the value of mass which you want to convert to Tons:\n");
							scanf("%f",&pounds);
							ton=pounds/2204.62;
							printf("Mass conversion from Pounds to Tons is: %f Tons\n",ton);
							break;
                        default:
                            printf("!!!WRONG CHOICE!!!");
                            break;
			}
		break;
		case 6:
			printf("----------Welcome to Ton converter------------\n");
            printf("1.Press 1 for Ton to Gram Conversion\n2.Press 2 for Ton to Kilogram Conversion\n3.Press 3 for Ton to Miligram conversion\n4.Press 4 for Ton to Quintal Conversion\n5.Press 5 for Ton to Pound conversion\n");
            scanf("%d",&ch);
            switch(ch)
			{
						case 1:
							printf("----------Ton to Gram------------\n");
							printf("Enter the value of mass which you want to convert to Grams:\n");
							scanf("%f",&ton);
							gm=ton*1000000;
							printf("Mass conversion from Ton to Grams is: %f Grams\n",gm);
							break;
						case 2:
							printf("----------Ton to Kilogram------------\n");
							printf("Enter the value of mass which you want to convert to Kilograms:\n");
							scanf("%f",&ton);
							kg=ton*1000;
							printf("Mass conversion from Ton to Kilograms is: %f Kilograms\n",kg);
							break;
						case 3:
							printf("----------Ton to Miligram------------\n");
							printf("Enter the value of mass which you want to convert to Miligrams:\n");
							scanf("%f",&ton);
							mg=ton*1000000000;
							printf("Mass conversion from Tons to Miligrams is: %f Miligrams\n",mg);
							break;
						case 4:
							printf("----------Ton to Quintal------------\n");
							printf("Enter the value of mass which you want to convert to Quintal:\n");
							scanf("%f",&ton);
							quintal=ton*10;
							printf("Mass conversion from Tons to Quintal is: %f Quintal\n",quintal);
							break;
						case 5:
							printf("----------Ton to Pounds------------\n");
							printf("Enter the value of mass which you want to convert to Pounds:\n");
							scanf("%f",&ton);
							pounds=ton*2204.62;
							printf("Mass conversion from Tons to Pounds is: %f Tons\n",pounds);
							break;
                        default:
                            printf("!!!WRONG CHOICE!!!");
                            break;
            }

         default:
                            printf("!!!WRONG CHOICE!!!");
                            break;
        }
    return 0;
    }

//ASEEM
int area(){
    printf("\n-----------SELECTED AREA UNIT CONVERTER-----------\n");
    int ch;
    float sqft,hectare,msq,acres;
    
        printf("Select the unit that you want to convert from\n");
		printf("1.Press 1 for Meter square Converter\n2.Press 2 for Acre Converter\n3.Press 3 for Square Feet Converter\n4.Press 4 for Hectare Converter\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
        printf("----------Welcome to Square Meter conversion------------\n");
        printf("1.Press 1 for Square Meter to Acre Conversion\n2.Press 2 for Square Meter to Hectare Conversion\n3.Press 3 for Square Meter to Square Feet conversion\n");
        scanf("%d",&ch);
		switch(ch)
		{
						case 1:
							printf("------------Square Meter to Acre Conversion------------\n");
							printf("Enter the value of area which you want to convert to Acre:\n");
							scanf("%f",&msq);
							acres=msq/4047;
							printf("Area conversion from Square Meter to Acres is: %f Acre\n",acres);
							break;
						case 2:
							printf("------------Square Meter to Hectare Conversion------------\n");
							printf("Enter the value of area which you want to convert to Hectare:\n");
							scanf("%f",&msq);
							hectare=msq/10000;
							printf("Area conversion from Square Meter to Hectare is: %f Hectare\n",acres);
							break;
						case 3:
							printf("------------Square Meter to Square Feet Conversion------------\n");
							printf("Enter the value of area which you want to convert to Square Feet:\n");
							scanf("%f",&msq);
							sqft=msq*10.764;
							printf("Area conversion from Square Meter to Square Feet is: %f Square Feet\n",sqft);
							break;
                        default:
                            printf("!!!WRONG CHOICE!!!");
                            break;
		}
		
		break;
		case 2:
		printf("------------Welcome to Acre conversion------------\n");
        printf("1.Press 1 for Acre to Square Meter Conversion\n2.Press 2 for Acre to Hectare Conversion\n3.Press 3 for Acre to Square Feet conversion\n");
        scanf("%d",&ch);
		switch(ch)
		{
						case 1:
							printf("------------Acre to Square Meter Conversion------------\n");
							printf("Enter the value of area which you want to convert to Square Meter:\n");
							scanf("%f",&acres);
							msq=acres*4047;
							printf("Area conversion from Acre to Square Meter is: %f Square Meter\n",msq);
							break;
						case 2:
							printf("------------Acre to Hectare Conversion------------\n");
							printf("Enter the value of area which you want to convert to Hectare:\n");
							scanf("%f",&acres);
							hectare=acres/2.47105;
							printf("Area conversion from Acre to Hectare is: %f Hectare\n",hectare);
							break;
						case 3:
							printf("------------Acre to Square Feet Conversion------------\n");
							printf("Enter the value of area which you want to convert to Square Feet:\n");
							scanf("%f",&acres);
							sqft=acres*10.764;
							printf("Area conversion from Acre to Square Feet is: %f Square Feet\n",sqft);
							break;
                        default:
                            printf("!!!WRONG CHOICE!!!");
                            break;
		}
		break;
		case 3:
		printf("------------Welcome to Square Feet conversion------------\n");
        printf("1.Press 1 for Square Feet to Square Meter Conversion\n2.Press 2 for Square Feet to Hectare Conversion\n3.Press 3 for Square Feet to Acre conversion\n");
        scanf("%d",&ch);
		switch(ch)
		{
		
						case 1:
							printf("------------Square Feet to Square Meter Conversion------------\n");
							printf("Enter the value of area which you want to convert to Square Meter:\n");
							scanf("%f",&sqft);
							msq=sqft/10.7639;
							printf("Area conversion from Square Feet to Square Meter is: %f Square Meter\n",msq);
							break;
						case 2:
							printf("------------Square Feet to Hectare Conversion------------\n");
							printf("Enter the value of area which you want to convert to Hectare:\n");
							scanf("%f",&sqft);
							hectare=sqft/107639;
							printf("Area conversion from Square Feet to Hectare is: %f Hectare\n",hectare);
							break;
						case 3:
							printf("------------Square Feet to Acre Conversion------------\n");
							printf("Enter the value of area which you want to convert to Square Feet:\n");
							scanf("%f",&sqft);
							acres=sqft/43560;
							printf("Area conversion from Square Feet to Acres is: %f Acres\n",acres);
							break;
                        default:
                            printf("!!!WRONG CHOICE!!!");
                            break;
		}
		break;
		case 4:
		printf("------------Welcome to Hectare conversion------------\n");
        printf("1.Press 1 for Hectare to Square Meter Conversion\n2.Press 2 for Hectare to Square Feet Conversion\n3.Press 3 for Hectare to Acre conversion\n");
        scanf("%d",&ch);
		switch(ch)
		{
						case 1:
							printf("------------Hectare to Square Meter Conversion------------\n");
							printf("Enter the value of area which you want to convert to Square Meter:\n");
							scanf("%f",&hectare);
							msq=hectare*10000;
							printf("Area conversion from Hectare to Square Meter is: %f Square Meter\n",msq);
							break;
						case 2:
							printf("------------Hectare to Square Feet Conversion------------\n");
							printf("Enter the value of area which you want to convert to Square Feet:\n");
							scanf("%f",&hectare);
							sqft=hectare*107639;
							printf("Area conversion from Hectare to Square Feet is: %f Square Feet\n",sqft);
							break;
						case 3:
							printf("------------Hectare to Acre Conversion------------\n");
							printf("Enter the value of area which you want to convert to Square Feet:\n");
							scanf("%f",&hectare);
							acres=hectare*2.471;
							printf("Area conversion from Hectare to Acres is: %f Acres\n",acres);
							break;
                        default:
                            printf("!!!WRONG CHOICE!!!");

		}
        default:
            printf("!!!WRONG CHOICE!!!");
            break;
    }
    
        
return 0;
}
//JATIN
int speed (){
    int pi;
    float z;
printf("\n-----------SELECTED SPEED UNIT CONVERTER-----------\n");
    
    printf("CHOOSE YOUR OPERATION:\n1]Km/Hr\n2]Metre/Sec\n3]Mile /Hr\n");
    scanf("%d",&pi);

        switch(pi){
            case 1:
                printf("CHOOSE YOUR OPERATION:\n1]Km/Hr-Metre/Sec\n2]Km/Hr-Mile/Hr\n");
                scanf("%d",&pi);
                switch(pi){
                case 1:
                printf("-----------Km/Hr TO Metre/Sec-----------\n");
                printf("Enter your speed in km/hr: ");
                scanf("%f",&z);
                printf("speed in Metre/Sec is :%f m/s\n",z*1000/3600);
                break;
                case 2:
                printf("-----------Km/Hr-Mile/Hr-----------\n");
                printf("Enter your speed in km/hr: ");
                scanf("%f",&z);
                printf("speed in Mile/hR is :%f mile/hr\n",z*0.6213);
                break;
                default:
                printf("WRONG CHOICE!!!");
                break;}
            case 2:
                printf("CHOOSE YOUR OPERATION:\n1]Metre/Sec-Km/Hr\n2]Metre/Sec-Mile/Hr\n");
                scanf("%d",&pi);
                switch(pi){
                case 1:
                printf("----------- Metre/Sec TO Km/Hr -----------\n");
                printf("enter your speed in Metre/Sec: ");
                scanf("%f",&z);
                printf("speed in Km/Hr is :%f km/hr\n",z*3.6);
                break;
                case 2:
                printf("----------- Metre/Sec TO Mile/Hr -----------\n");
                printf("enter your speed in Metre/Sec: ");
                scanf("%f",&z);
                printf("speed in Mile/Hr is :%f mile/hr\n",z*2.236936);
                break;
                default:
                printf("WRONG CHOICE!!!");
                break;
                }

            case 3:
            printf("CHOOSE YOUR OPERATION:\n1]Mile/Hr-Metre/Sec\n2]Mile/Hr-Km/Hr\n");
                scanf("%d",&pi);
                switch(pi){
                case 1:
                printf("----------- Mile/Hr-Metre/Sec -----------\n");
                printf("enter your speed in Mile/Hr: ");
                scanf("%f",&z);
                printf("speed in metre/sec is :%f m/s\n",z*0.44704005836555);
                break;
                case 2:
                printf("----------- Mile/Hr-Km/Hr -----------\n");
                printf("enter your speed in Mile/Hr: ");
                scanf("%f",&z);
                printf("speed in Km/Hr is :%f Km/Hr\n",z*1.60934421011598);
                break;
                default:
                printf("WRONG CHOICE!!!");
                break;}
            default:
                printf("WRONG CHOICE!!!");
                break;


         }
return 0;
}

//JATIN
int pressure (){
float z;
            int pi;
            printf("\n-----------SELECTED PRESSURE UNIT CONVERTER-----------\n");
            
            
            printf("CHOOSE UNIT YOU WOULD LIKE TO CONVERT :\n1]atm\n2]Millimeter of water\n3]bar \n4]Pound /square foot\n5]Millimetre of mercury\n6]Kilopascal\n");
            scanf("%d",&pi);
                switch(pi){
                    case 1:
                        printf("choose an operation:\n1]Atm-Millimetre of water\n2]Atm-Pounds/square foot\n3]Atm-Millimetre of mercury\n4]Atm-bar\n5]Atm-Kilopascal\n" );
                        scanf("%d",&pi);
                        switch(pi){
                        
                            case 1:
                                printf("---------- Atm-Millimetre of water-----------\n");
                                printf("Enter your  pressure in atm: ");
                                scanf("%f",&z);
                                printf("Pressure in Millimetre of water: %f mmH2O\n",z*10332.27);
                                break;
                            case 2:
                            printf("-----------Atm-Pounds/square foot-----------\n");
                                printf("Enter your  pressure in atm: ");
                                scanf("%f",&z);
                                printf("Pressure in Pounds/square foot : %f psf",z*2116.21);
                                break;
                            
                        
                            case 3:
                                printf("-----------Atm-Millimetre of mercury-----------\n");
                                printf("Enter your  pressure in atm: ");
                                scanf("%f",&z);
                                printf("Pressure in Millimetre of mercury : %f mmHg\n",z*760.000);
                                break;
                            case 4:
                                printf("-----------Atm-bar-----------\n");
                                printf("Enter your  pressure in atm: ");
                                scanf("%f",&z);
                                printf("Pressure in Bar : %f bar \n",z*1.013250273830886503);
                                break;
                            
                            
                            
                            
                            case 5:
                                printf("-----------Atm-Kilopascal----------\n");
                                printf("Enter your  pressure in atm: ");
                                scanf("%f",&z);
                                printf("Pressure in Kilopascal : %f kPa \n",z*101.3250273830886503);
                                break;
                        
                            
                            default:
                                    printf("WRONG CHOICE!!!");
                                    break;}
                                    break;
                    case 2:
                        printf("choose an operation:\n1]Millimetre of water-Atm\n2]Millimetre of water-Pounds/square foot\n3]Millimetre of water-Millimetre of mercury\n4]Millimetre of water-bar\n5]Millimetre of water-Kilopascal\n");
                        scanf("%d",&pi);
                            switch(pi){
                                case 1:
                                printf("----------Millimetre of water-Atm----------\n");
                                printf("Enter your  pressure in Millimetre of water: ");    
                                scanf("%f",&z); 
                                printf("Pressure in atm: %f atm \n",z*0.000096784);
                                break;        
                                case 2:
                                printf("---------Millimetre of water-Pounds/square foot-----------\n");
                                printf("Enter your  pressure in Millimetre of water: ");
                                scanf("%f",&z);
                                printf("Pressure in Pounds/square foot: %f psf\n",z*0.204);
                                break;    
                            
                                
                                case 3:
                                printf("----------Millimetre of water-Millimetre of mercury-----------\n");
                                printf("Enter your  pressure in Millimetre of water: ");
                                scanf("%f",&z);
                                printf("Pressure in Millimetre of mercury: %f mmHg\n",z*0.073555);
                                break;    
                                case 4:
                                printf("---------Millimetre of water-bar-----------\n");
                                printf("Enter your  pressure in Millimetre of water: ");
                                scanf("%f",&z);
                                printf("Pressure in bar: %f bar\n",z*10332.27);
                                break;    
                                
                            
                                case 5:
                                printf("----------Millimetre of water-Kilopascal-----------\n");
                                printf("Enter your  pressure in Millimetre of water: ");
                                scanf("%f",&z);
                                printf("Pressure in Kilopascal: %f kPa\n",z*10332.27);
                                break;   }break; 
                    case 3 :
                        printf("choose an operation:\n1]Bar-Atm\n2]Bar-Millimetre of water\n3]Bar-pound /square foot\n4]Bar-Millimetre of mercury\n5]Bar-Kilopascal\n" );
                        scanf("%d",&pi);
                            switch(pi){
                                case 1:
                                printf("----------Bar-Atm----------\n");
                                printf("Enter your  bar: ");
                                scanf("%f",&z);
                                printf("Pressure in atm: %f atm\n",z*0.986923);
                                break;        
                                case 2:
                                printf("---------Bar-Millimetre of water-----------\n");
                                printf("Enter your  pressure in bar: ");
                                scanf("%f",&z);
                                printf("Pressure in Millimetre of watert: %f mmH2O\n",z*10197.16);
                                break;    
                            
                                
                                case 3:
                                printf("----------Bar-pound /square foot-----------\n");
                                printf("Enter your  pressure in bar: ");
                                scanf("%f",&z);
                                printf("Pressure in pound /square foot: %f psf\n",z*2088.543512);
                                break;    
                                case 4:
                                printf("--------Bar-Millimetre of mercury----------\n");
                                printf("Enter your  pressure in bar: ");
                                scanf("%f",&z);
                                printf("Pressure in Millimetre of mercury: %f mmHg\n",z*750.0617);
                                break;    
                                
                            
                                case 5:
                                printf("----------Bar-Kilopascal-----------\n");
                                printf("Enter your  pressure in bar: ");
                                scanf("%f",&z);
                                printf("Pressure in Kilopascal: %f kPa\n",z*100);
                                break;   } break;
                    case 4:
                        printf("choose an operation:\n1]Pound /square foot-Atm\n2]Pound /square foot-Millimetre of water\n3]pound /square foot-bar\n4]Pound /square foot-Millimetre of mercury\n5]Pound /square foot-Kilopascal\n" );
                        scanf("%d",&pi);
                            switch(pi){ 
                                case 1:
                                printf("---------Pound /square foot-Atm----------\n");
                                printf("Enter your  Pound /square foot: ");
                                scanf("%f",&z);
                                printf("Pressure in atm: %f atm\n",z*0.000472541268271168615988);
                                break;        
                                case 2:
                                printf("---------Pound /square foot-Millimetre of water-----------\n");
                                printf("Enter your  pressure in Pound /square foot: ");
                                scanf("%f",&z);
                                printf("Pressure in Millimetre of watert: %f mmH2O\n",z*4.8824264093);
                                break;    
                            
                                
                                case 3:
                                printf("----------pound /square foot-bar-----------\n");
                                printf("Enter your  pressure in Pound /square foot ");
                                scanf("%f",&z);
                                printf("Pressure in bar: %f bar\n",z*0.000478802569472156);
                                break;    
                                case 4:
                                printf("--------Pound /square foot-Millimetre of mercury----------\n");
                                printf("Enter your  pressure in Pound /square foot: ");
                                scanf("%f",&z);
                                printf("Pressure in Millimetre of mercury: %f mmHg\n",z*0.3591314692226534320252);
                                break;    
                                
                            
                                case 5:
                                printf("----------Pound /square foot-Kilopascal-----------\n");
                                printf("Enter your  pressure in Pound /square foot: ");
                                scanf("%f",&z);
                                printf("Pressure in Kilopascal: %f kPa\n",z*0.0478802569472156);
                                break;   } 
                                
                    
                                break;
                    case 5:
                        printf("choose an operation:\n1]Millimetre of mercury-Atm\n2]Millimetre of mercury-Millimetre of water\n3]Millimetre of mercury-bar\n4]Millimetre of mercury-Pound /square foot\n5]Millimetre of mercury-Kilopascal\n" );
                        scanf("%d",&pi);
                            switch(pi){
                                case 1:
                                printf("---------Millimetre of mercury-Atm----------\n");
                                printf("Enter your  Millimetre of mercury: ");
                                scanf("%f",&z);
                                printf("Pressure in atm: %f atm\n",z*0.00131578908);
                                break;        
                                case 2:
                                printf("---------Millimetre of mercury-Millimetre of water-----------\n");
                                printf("Enter your  pressure in Millimetre of mercury: ");
                                scanf("%f",&z);
                                printf("Pressure in Millimetre of watert: %f mmH2O\n",z*13.59509491019205066756);
                                break;    
                            
                                
                                case 3:
                                printf("----------Millimetre of mercury-bar----------\n");
                                printf("Enter your  pressure in Millimetre of mercury: ");
                                scanf("%f",&z);
                                printf("Pressure in bar-: %f bar\n",z*0.001333223653467441);
                                break;    
                                case 4:
                                printf("--------Millimetre of mercury-Pound /square foot----------\n");
                                printf("Enter your  pressure in Millimetre of mercury: ");
                                scanf("%f",&z);
                                printf("Pressure in Pound /square foot: %f psf\n",z*2.7844956114943602079);
                                break;    
                                
                            
                                case 5:
                                printf("---------Millimetre of mercury-Kilopascal----------\n");
                                printf("Enter your  pressure in Millimetre of mercury: ");
                                scanf("%f",&z);
                                printf("Pressure in Kilopascal: %f kPa\n",z*0.1333223653467441);
                                break;   } 
                                break;
                    case 6:
                        printf("choose an operation:\n1]Kilopascal-Atm\n2]Kilopascal-Millimetre of water\n3]Kilopascal-bar\n4]Kilopascal-Pound /square foot\n5]Kilopascal-Millimetre of mercury\n" );
                        scanf("%d",&pi);
                            switch(pi){
                                case 1:
                                printf("---------Kilopascal-Atm----------\n");
                                printf("Enter your pressure in  Kilopascal: ");
                                scanf("%f",&z);
                                printf("Pressure in atm: %f atm\n",z*0.00131578908);
                                break;        
                                case 2:
                                printf("---------Kilopascal-Millimetre of water-----------\n");
                                printf("Enter your  pressure in Kilopascal: ");
                                scanf("%f",&z);
                                printf("Pressure in Millimetre of watert: %f mmH2O\n",z*13.59509491019205066756);
                                break;    
                            
                                
                                case 3:
                                printf("----------Kilopascal-bar----------\n");
                                printf("Enter your  pressure in Kilopascal: ");
                                scanf("%f",&z);
                                printf("Pressure in bar-: %f bar\n",z*0.001333223653467441);
                                break;    
                                case 4:
                                printf("--------Kilopascal-Pound /square foot----------\n");
                                printf("Enter your  pressure in Kilopascal: ");
                                scanf("%f",&z);
                                printf("Pressure in Pound /square foot: %f psf\n",z*2.7844956114943602079);
                                break;    
                                
                            
                                case 5:
                                printf("---------Kilopascal-Millimetre of mercury----------\n");
                                printf("Enter your  pressure in Kilopascal: ");
                                scanf("%f",&z);
                                printf("Pressure in Millimetre of mercury: %f mmHg\n",z*0.1333223653467441);
                                break;   }
                                break;
                                default :
                                printf("wrong choice !!!!"); 
                                break;
                        }
                


                
        return 0;
        }

//SHAUNAK
int lenght (){
    printf("\n-----------SELECTED LENGTH UNIT CONVERTER -----------\n");
     int ch;
     float mm,cm,m,nm,km,inch,ft,deg,rad,min,sec;

      
    printf("Select the unit that you want to convert from\n");
    printf("Enter 1 for mm\nEnter 2 for cm\nEnter 3 for m\nEnter 4 for inch\nEnter 5 for km\nEnter 6 for ft\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("Choose the unit that you want to convert mm into\n");
            printf("Enter 1 for cm\nEnter 2 for m\nEnter 3 for inch\nEnter 4 for km\nEnter 5 for ft\n");
            scanf("%d",&ch);
            switch (ch)
            {
                case 1:
                    printf("------------mm to cm------------\n");
                    printf("Enter length in mm that is to be converted\n");
                    scanf("%f",&mm);
                    cm=mm/10;
                    printf("The length in cm is: %f cm",cm);
                    break;
                case 2:
                    printf("------------mm to m------------\n");
                    printf("Enter length in mm that is to be converted\n");
                    scanf("%f",&mm);
                    m=mm/1000;
                    printf("The length in m is: %f m",m);
                    break;
                case 3:
                    printf("------------mm to Inch------------\n");
                    printf("Enter length in mm that is to be converted\n");
                    scanf("%f",&mm);
                    inch=mm*0.0394;
                    printf("The length in inch is: %f inch",inch);
                    break; 
                case 4:
                    printf("------------mm to km------------\n");
                    printf("Enter length in mm that is to be converted\n");
                    scanf("%f",&mm);
                    km=mm/1000000;
                    printf("The length in km is: %f km",km);
                    break;  
                case 5:
                    printf("------------mm to ft------------\n");
                    printf("Enter length in mm that is to be converted\n");
                    scanf("%f",&mm);
                    ft=mm*0.00328;
                    printf("The length in ft is: %f ft",ft);
                    break;    
            }
        break;    
        case 2:  
            printf("Choose the unit that you want to convert cm into\n");
            printf("Enter 1 for mm\nEnter 2 for m\nEnter 3 for inch\nEnter 4 for km\nEnter 5 for ft\n");
            scanf("%d",&ch);
            switch (ch)
            {
                case 1:
                    printf("------------cm to mm------------\n");
                    printf("Enter length in cm that is to be converted\n");
                    scanf("%f",&cm);
                    mm=cm*10;
                    printf("The length in mm is: %f mm",mm);
                    break;
                case 2:
                    printf("------------cm to m------------\n");
                    printf("Enter length in cm that is to be converted\n");
                    scanf("%f",&cm);
                    m=cm/100;
                    printf("The length in m is: %f m",m);
                    break;
                case 3:
                    printf("------------cm to Inch------------\n");
                    printf("Enter length in cm that is to be converted\n");
                    scanf("%f",&cm);
                    inch=cm*0.394;
                    printf("The length in inch is: %f inch",inch);
                    break; 
                case 4:
                    printf("------------cm to km------------\n");
                    printf("Enter length in cm that is to be converted\n");
                    scanf("%f",&cm);
                    km=cm/100000;
                    printf("The length in km is: %f km",km);
                    break;
                case 5:
                    printf("------------cm to ft------------\n");
                    printf("Enter length in cm that is to be converted\n");
                    scanf("%f",&cm);
                    ft=cm*0.0328;
                    printf("The length in ft is: %f ft",ft);
                    break;            
            }
        break;    
        case 3:
            printf("Choose the unit that you want to convert m into\n");
            printf("Enter 1 for mm\nEnter 2 for cm\nEnter 3 for inch\nEnter 4 for km\nEnter 5 for ft\n");
            scanf("%d",&ch);
            switch (ch)
            {
                case 1:
                    printf("------------m to mm------------\n");
                    printf("Enter length in m that is to be converted\n");
                    scanf("%f",&m);
                    mm=m*1000;
                    printf("The length in mm is: %f mm",mm);
                    break;
                case 2:
                    printf("------------m to cm------------\n");
                    printf("Enter length in m that is to be converted\n");
                    scanf("%f",&m);
                    cm=m*100;
                    printf("The length in cm is: %f cm",cm);
                    break;
                case 3:
                    printf("------------m to Inch------------\n");
                    printf("Enter length in m that is to be converted\n");
                    scanf("%f",&m);
                    inch=m*39.37;
                    printf("The length in inch is: %f inch",inch);
                    break;  
                case 4:
                    printf("------------m to km------------\n");
                    printf("Enter length in m that is to be converted\n");
                    scanf("%f",&m);
                    km=m/1000;
                    printf("The length in km is: %f km",km);
                    break;
                case 5:
                    printf("------------m to ft------------\n");
                    printf("Enter length in m that is to be converted\n");
                    scanf("%f",&m);
                    ft=m*3.2808;
                    printf("The length in ft is: %f ft",ft);
                    break;           
            }
        break;    
        case 4:
            printf("Choose the unit that you want to convert inch into\n");
            printf("Enter 1 for mm\nEnter 2 for cm\nEnter 3 for m\nEnter 4 for km\nEnter 5 for ft\n");
            scanf("%d",&ch);
            switch (ch)
            {
                case 1:
                    printf("------------Inch to mm------------\n");
                    printf("Enter length in inch that is to be converted\n");
                    scanf("%f",&inch);
                    mm=m*1000;
                    printf("The length in mm is: %f mm",mm);
                    break;
                case 2:
                    printf("------------Inch to cm------------\n");
                    printf("Enter length in inch that is to be converted\n");
                    scanf("%f",&inch);
                    cm=inch*2.54;
                    printf("The length in cm is: %f cm",cm);
                    break;
                case 3:
                    printf("------------Inch to m------------\n");
                    printf("Enter length in inch that is to be converted\n");
                    scanf("%f",&inch);
                    m=inch*0.0254;
                    printf("The length in m is: %f m",m);
                    break;
                case 4:
                    printf("------------Inch to km------------\n");
                    printf("Enter length in inch that is to be converted\n");
                    scanf("%f",&inch);
                    km=inch*0.0000254;
                    printf("The length in km is: %f km",km);
                    break;
                case 5:
                    printf("------------Inch to ft------------\n");
                    printf("Enter length in inch that is to be converted\n");
                    scanf("%f",&inch);
                    ft=inch*0.0833;
                    printf("The length in ft is: %f ft",ft);
                    break;        
            }
        break;
        case 5:
            printf("Choose the unit that you want to convert km into\n");
            printf("Enter 1 for cm\nEnter 2 for mm\nEnter 3 for inch\nEnter 4 for m\nEnter 5 for ft\n");
            scanf("%d",&ch);
            switch (ch)
            {
                case 1:
                    printf("------------Km to cm------------\n");
                    printf("Enter length in km that is to be converted\n");
                    scanf("%f",&km);
                    cm=km*100000;
                    printf("The length in cm is: %f cm",cm);
                    break;
                case 2:
                    printf("------------Km to mm------------\n");
                    printf("Enter length in km that is to be converted\n");
                    scanf("%f",&km);
                    mm=km*1000000;
                    printf("The length in mm is: %f mm",mm);
                    break;
                case 3:
                    printf("------------Km to Inch------------\n");
                    printf("Enter length in km that is to be converted\n");
                    scanf("%f",&km);
                    inch=km*39370.0787;
                    printf("The length in inch is: %f inch",inch);
                    break; 
                case 4:
                    printf("------------Km to m------------\n");
                    printf("Enter length in km that is to be converted\n");
                    scanf("%f",&km);
                    m=km*1000;
                    printf("The length in m is: %f km",km);
                    break;  
                case 5:
                    printf("------------Km to ft------------\n");
                    printf("Enter length in km that is to be converted\n");
                    scanf("%f",&km);
                    ft=km*3280.8399;
                    printf("The length in ft is: %f ft",ft);
                    break; 
            }
        case 6:
            printf("Choose the unit that you want to convert ft into\n");
            printf("Enter 1 for cm\nEnter 2 for mm\nEnter 3 for inch\nEnter 4 for m\nEnter 5 for km\n");
            scanf("%d",&ch);
            switch (ch)
            {
                case 1:
                    printf("------------Feet to cm------------\n");
                    printf("Enter length in ft that is to be converted\n");
                    scanf("%f",&ft);
                    cm=ft*30.48;
                    printf("The length in cm is: %f cm",cm);
                    break;
                case 2:
                    printf("------------Feet to mm------------\n");
                    printf("Enter length in ft that is to be converted\n");
                    scanf("%f",&ft);
                    mm=ft*304.8;
                    printf("The length in mm is: %f mm",mm);
                    break;
                case 3:
                    printf("------------Feet to Inch------------\n");
                    printf("Enter length in ft that is to be converted\n");
                    scanf("%f",&ft);
                    inch=ft*12;
                    printf("The length in inch is: %f inch",inch);
                    break; 
                case 4:
                    printf("------------Feet to m------------\n");
                    printf("Enter length in ft that is to be converted\n");
                    scanf("%f",&ft);
                    m=ft*0.305;
                    printf("The length in m is: %f km",km);
                    break;  
                case 5:
                    printf("------------Feet to km------------\n");
                    printf("Enter length in ft that is to be converted\n");
                    scanf("%f",&ft);
                    km=ft*0.000305;
                    printf("The length in km is: %f km",km);
                    break;               
            }
        
    }
return 0;
}

//SHAUNAK
int angle(){
    printf("\n-----------SELECTED ANGLE UNIT CONVERTER-----------\n");
     int ch;
     float deg,rad,min;
            printf("Welcome to Angle converter!\n");
            printf("Select the unit that you want to convert from\n");
            printf ("1.Press 1 for Degree Conversion\n2.Press 2 for Radian Conversion\n3.Press 3 for Minute Conversion\n");
            scanf("%d",&ch);
            switch(ch)
            {
            case 1:
            printf("----------Welcome To Degree Conversion------------\n");
            printf("1.Press 1 for Degree to Radian 2.Press 2 for Degree to Minute\n");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                    printf("------------Degree to Radian------------\n");
                    printf("Enter the value of Angle in Degree that is to be converted to Radian:\n");
                    scanf("%f",&deg);
                    rad=deg*0.0174533;
                    printf("The value of the angle entered in Radians is: %f rad",rad);
                    break;
                case 2:
                    printf("----------Degree to Minutes------------\n");
                    printf("Enter the value of Angle in Degrees that is to be converted to Minutes :\n");
                    scanf("%f",&deg);
                    min=deg*60;
                    printf("The value of the angle entered in Minutes is: %f min",min);
                    break;
                default:
                    printf("WRONG CHOICE!!!");
                    break;
            }
            case 2:
            printf("----------Welcome To Radian Conversion------------\n");
            printf("1.Press 1 for Radian to Degree 2.Press 2 for Radian to Minute\n");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                    printf("------------Radian to Degree------------\n");
                    printf("Enter the value of Angle in Radian that is to be converted to Degrees:\n");
                    scanf("%f",&rad);
                    deg=rad*57.3248407643;
                    printf("The value of the angle entered in Degrees is: %f deg",deg);
                    break;
                case 2:
                    printf("----------Radian to Minutes------------\n");
                    printf("Enter the value of Angle in Radian that is to be converted to Minutes :\n");
                    scanf("%f",&rad);
                    min=rad*3437.746;
                    printf("The value of the angle entered in Minutes is: %f min",min);
                    break;  
                default:
                    printf("WRONG CHOICE!!!");
                    break;
            }
            case 3:
            printf("----------Welcome To Minute Conversion------------\n");
            printf("1.Press 1 for Minute to Degree 2.Press 2 for Minute to Radian\n");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                    printf("------------Minute to Degree------------\n");
                    printf("Enter the value of Angle in minute that is to be converted to Degrees:\n");
                    scanf("%f",&min);
                    deg=min/60;
                    printf("The value of the angle entered in Degrees is: %f deg",deg);
                    break;
                case 2:
                    printf("------------Minute to Radian------------\n");
                    printf("Enter the value of Angle in Minute that is to be converted to Radian:\n");
                    scanf("%f",&min);
                    rad=min*0.0002908882;
                    printf("The value of the angle entered in Radians is: %f rad",rad);
                    break;
                default:
                    printf("WRONG CHOICE!!!");
                    break;       
            }
    
            }
return 0;
}

//KAUSTUBH
int digistore(){
    printf("\n-----------SELECTED DIGITAL STORAGE CONVERTER-----------\n");
    int ch;
    float byt,kb,mb,gb,tb,cel,kel,fah;
    printf("Select the unit that you want to convert from\n");
        printf("1.Press 1 for Bytes converter\n2.Press 2 for Kilobytes converter\n3.Press 3 for Megabytes converter\n4.Press 4 for Gigabytes converter\n5.Press 5 for Terabytes converter\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("------------Welcome to Bytes conversion------------\n");
            printf("1.Press 1 for Byte to Kilobytes Conversion\n2.Press 2 for Bytes to Megabytes Conversion\n3.Press 3 for Bytes to Gigabytes conversion\n4.Press 4 for Bytes to Terabytes Conversion\n");
            scanf("%d",&ch);
            switch (ch)
            {
                        case 1:
            			    printf("------------Bytes to Kilobytes Conversion------------\n");
            			    printf("Enter the value which you want to convert to Kilobytes:\n");
            			    scanf("%f",&byt);
            			    kb=byt*0.001;
            		    	printf("Mass conversion from Bytes to Kilobytess is: %fKB\n",kb);
            		    	break;
            		    case 2:
            			    printf("------------Bytes to Megabytes Conversion------------\n");
            			    printf("Enter the value which you want to convert to Megabytes:\n");
            			    scanf("%f",&byt);
            			    mb=byt*0.000001;
                        	printf("Conversion from Bytes to Megabytes is: %fMB\n",mb);
                        	break;
            
                    	case 3:
                        	printf("------------Bytes to Gigabytes Conversion------------\n");
                        	printf("Enter the value which you want to convert to Gigabytes:\n");
                        	scanf("%f",&byt);
                        	gb=byt*0.000000001;
                        	printf("Conversion from Bytes to Gigabytes is: %fGB \n",gb);
                        	break;
                    	case 4:
            			    printf("------------Bytes to Terabytes Conversion------------\n");
            			    printf("Enter the value which you want to convert to Terabytes:\n");
            			    scanf("%f",&byt);
            
            			    tb=byt*0.000000000001;
            			    printf("Conversion from Bytes to Terabytes is: %fTB\n",tb);
            			    break;
			default:
				printf("!!!WRONG CHOICE!!!");
				break;
			}
		break;
        case 2:
            printf("------------Welcome to Kilobytes converter------------\n");
            printf("1.Press 1 for Kilobytes to Bytes Conversion\n2.Press 2 for Kilobytes to Megabytes Conversion\n3.Press 3 for Kilobytes to Gigabytes conversion\n4.Press 4 for Kilobytes to Terabytes Conversion\n5");
            scanf("%d",&ch);
            switch(ch)
            {
            			case 1:
							printf("------------Kilobytes to Bytes Conversion------------\n");
							printf("Enter the value which you want to convert to Bytes:\n");
							scanf("%f",&kb);
							byt=kb*1000;
							printf("Conversion from Kilobytes to Bytes is: %fbytes\n",byt);
							break;

						case 2:
							printf("------------Kilobytes to Megabytes Conversion------------\n");
							printf("Enter the value which you want to convert to Megabytes:\n");
							scanf("%f",&kb);
							mb=kb*0.001;
							printf("Conversion from Kilobytes to Megabytes is: %f MB\n",mb);
							break;
						case 3:
							printf("------------Kilobytes to Gigabytes Conversion------------\n");
							printf("Enter the value which you want to convert to Gigabytes:\n");
							scanf("%f",&kb);
							gb=kb*0.000001;
							printf("Conversion from Kilobytes to Gigabytes is: %f Gigabytes\n",gb);
							break;
						case 4:
							printf("------------Kilobytes to Terabytes Conversion------------\n");
							printf("Enter the value which you want to convert to Terabytes:\n");
							scanf("%f",&kb);
							tb=kb*0.000000001;
							printf("Conversion from Kilobytes to Terabytes is: %f Terabytes\n",tb);
							break;
						default:
						printf("!!!WRONG CHOICE!!!");
						break;
						
            }
		break;
		case 3:
			printf("------------Welcome to Megabytes converter------------\n");
            printf("1.Press 1 for Megabytes to Bytes Conversion\n2.Press 2 for Megabytes to Kilobytes Conversion\n3.Press 3 for Megabytes to Gigabytes conversion\n4.Press 4 for Megabytes to Terabytes Conversion\n");
            scanf("%d",&ch);
            switch(ch)
			{
						case 1:
							printf("------------Megabytes to Bytes Conversion------------\n");
							printf("Enter the value which you want to convert to Bytes:\n");
							scanf("%f",&mb);
							byt=mb*1000000;
							printf("Conversion from Megabytes to Bytess is: %f Bytes\n",byt);
							break;
						case 2:
							printf("------------Megabytes to Kilobytes Conversion------------\n");
							printf("Enter the value which you want to convert to Kilobytes:\n");
							scanf("%f",&mb);
							kb=mb*1000;
							printf("Conversion from Megabytes to Kilobytes is: %f Kilobytes\n",kb);
							break;
						case 3:
							printf("------------Megabytes to Gigabytes Conversion------------\n");
							printf("Enter the value which you want to convert to Gigabytes:\n");
							scanf("%f",&mb);
							gb=mb*0.001;
							printf("Conversion from Megabytess to Gigabytes is: %f Gigabytes\n",gb);
							break;
						case 4:
							printf("------------Megabytes to Terabytess Conversion------------\n");
							printf("Enter the value which you want to convert to Terabytess:\n");
							scanf("%f",&mb);
							tb=mb*0.000001;
							printf("Conversion from Megabytes to Terabytes is: %f Terabytess\n",tb);
							break;
						default:
						printf("!!!WRONG CHOICE!!!");
						break;
						
			}
		break;
		case 4:
			printf("------------Welcome to Gigabytes converter------------\n");
            printf("1.Press 1 for Gigabytes to Bytes Conversion\n2.Press 2 for Gigabytes to Kilobytes Conversion\n3.Press 3 for Gigabytes to Megabytes conversion\n4.Press 4 for Gigabytes to Terabytes Conversion\n");
            scanf("%d",&ch);
            switch(ch)
			{
						case 1:
							printf("------------Gigabytes to Bytes Conversion------------\n");
							printf("Enter the value which you want to convert to Bytess:\n");
							scanf("%f",&gb);
							byt=gb*1000000000;
							printf("Conversion from Gigabytes to Bytes is: %f Bytes\n",byt);
							break;
						case 2:
							printf("------------Gigabytes to Kilobytes Conversion------------\n");
							printf("Enter the value which you want to convert to Kilobytes:\n");
							scanf("%f",&gb);
							kb=gb*1000000;
							printf("Conversion from Gigabytes to Kilobytess is: %f Kilobytes\n",kb);
							break;
						case 3:
							printf("------------Gigabytes to Megabytes Conversion------------\n");
							printf("Enter the value which you want to convert to Megabytes:\n");
							scanf("%f",&gb);
							mb=gb*1000;
							printf("Conversion from Gigabytes to Megabytess is: %f Megabytes\n",mb);
							break;
						case 4:
							printf("------------Gigabytes to Terabytess Conversion------------\n");
							printf("Enter the value which you want to convert to Terabytes:\n");
							scanf("%f",&gb);
							tb=gb*0.001;
							printf("Conversion from Gigabytes to Terabytess is: %f Terabytes\n",tb);
							break;
						default:
							printf("!!!WRONG CHOICE!!!");
							break;
						
			}
		break;
		case 5:
			printf("------------Welcome to Terabytes converter------------\n");
            printf("1.Press 1 for Terabytes to Bytes Conversion\n2.Press 2 for Terabytes to Kilobytes Conversion\n3.Press 3 for Terabytes to Megabytes conversion\n4.Press 4 for Terabytes to Gigabytes Conversion\n");
            scanf("%d",&ch);
            switch(ch)
			{
						case 1:
							printf("------------Terabytess to Bytes Conversion------------\n");
							printf("Enter the value which you want to convert to Bytess:\n");
							scanf("%f",&tb);
							byt=tb*1000000000000;
							printf("Conversion from Terabytess to Bytess is: %f Bytess\n",byt);
							break;
						case 2:
							printf("------------Terabytess to Kilobytes Conversion------------\n");
							printf("Enter the value which you want to convert to Kilobytess:\n");
							scanf("%f",&tb);
							kb=tb*1000000000;
							printf("Conversion from Terabytess to Kilobytess is: %f Kilobytess\n",kb);
							break;
						case 3:
							printf("------------Terabytess to Megabytes Conversion------------\n");
							printf("Enter the value which you want to convert to Megabytess:\n");
							scanf("%f",&tb);
							mb=tb*1000000;
							printf("Conversion from Terabytes to Megabytess is: %f Megabytess\n",mb);
							break;
						case 4:
							printf("------------Terabytess to Gigabytes Conversion------------\n");
							printf("Enter the value which you want to convert to Gigabytes:\n");
							scanf("%f",&tb);
							gb=tb*1000;
							printf("Conversion from Terabytes to Gigabytes is: %f Gigabytes\n",gb);
							break;
						default:
							printf("!!!WRONG CHOICE!!!");
							break;
			}

}
}

//KAUSTUBH
int temp(){
    int ch;
    float cel,kel,fah;
    printf("Select the unit that you want to convert from\n");
		printf("1.Press 1 for Celsius Converter\n2.Press 2 for Kelvin Converter\n3.Press 3 for Fahrenheit Converter\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
        printf("------------Welcome to Celsius conversion------------\n");
        printf("1.Press 1 for Celsius to Kelvin Conversion\n2.Press 2 for Celsius to Fahrenheit Conversion\n");
        scanf("%d",&ch);
		switch(ch)
		{
						case 1:
							printf("------------Celsius to Kelvin Conversion------------\n");
							printf("Enter the value which you want to convert to Kelvin:\n");
							scanf("%f",&cel);
							kel=cel+273.15;
							printf("Temprature conversion from Celsius to Kelvin is: %f Kelvin\n",kel);
							break;
						case 2:
							printf("------------Celsius to Fahrenheit Conversion------------\n");
							printf("Enter the value which you want to convert to Fahrenheit:\n");
							scanf("%f",&cel);
							fah=(cel*9/5)+32;
							printf("Temprature conversion from Celsius to Fahrenheit is: %f Fahrenheit\n",fah);
							break;
						default:
							printf("!!!WRONG CHOICE!!!");
							break;
						
		}
		
		break;
		case 2:
		printf("------------Welcome to Kelvin conversion------------\n");
        printf("1.Press 1 for Kelvin to Celsius Conversion\n2.Press 2 for Kelvin to Fahrenheit Conversion\n");
        scanf("%d",&ch);
		switch(ch)
		{
						case 1:
							printf("------------Kelvin to Celsius Conversion------------\n");
							printf("Enter the value which you want to convert to Celsius:\n");
							scanf("%f",&kel);
							cel=kel-273.15;
							printf("Temprature conversion from Kelvin to Celsius is: %f Celsius\n",cel);
							break;
						case 2:
							printf("------------Kelvin to Fahrenheit Conversion------------\n");
							printf("Enter the value which you want to convert to Fahrenheit:\n");
							scanf("%f",&kel);
							fah=((kel-273.15)*9/5)+32;
							printf("Temprature conversion from Kelvin to Fahrenheit is: %f Fahrenheit\n",fah);
							break;
						default:
							printf("!!!WRONG CHOICE!!!");
							break;
					
		}
		break;
		case 3:
		printf("Welcome to Fahrenheit conversion\n");
        printf("1.Press 1 for Fahrenheit to Celsius Conversion\n2.Press 2 for Fahrenheit to Kelvin conversion\n");
        scanf("%d",&ch);
		switch(ch)
		{
						case 1:
							printf("------------Fahrenheit to Celsius Conversion------------\n");
							printf("Enter the value which you want to convert to Celsius:\n");
							scanf("%f",&fah);
							cel=(fah-32)*5/9;
							printf("Temprature conversion from Fahrenheit to Celsius is: %f Celsius\n",cel);
							break;
						case 2:
							printf("------------Fahrenheit to Kelvin Conversion------------\n");
							printf("Enter the value of area which you want to convert to Square Feet:\n");
							scanf("%f",&fah);
							kel=(fah+459.67)*5/9;
							printf("Temprature conversion from Fahrenheit to Kelvins is: %f Kelvins\n",kel);
							break;
						default:
							printf("!!!WRONG CHOICE!!!");
							break;
		}		
		}
		return 0;
}
//ASEEM
int volume(){
    int ch;
    float lit,ml,cubm,usgallon;
     printf("Select the unit that you want to convert from\n");
		printf("1.Press 1 for Liter Converter\n2.Press 2 for Mililiter Converter\n3.Press 3 for Cube Meter Converter\n4.Press 4 for US Gallon Converter\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
        printf("------------Welcome to Liter conversion------------\n");
        printf("1.Press 1 for Liter to Mililiter Conversion\n2.Press 2 for Liter to Cube Meter Conversion\n3.Press 3 for Liter to US gallon Conversion\n");
        scanf("%d",&ch);
		switch(ch)
		{
						case 1:
							printf("------------Liter to Mililiter Conversion------------\n");
							printf("Enter the value which you want to convert to Mililiter:\n");
							scanf("%f",&lit);
							ml=lit*1000;
							printf("Volume conversion from Liter to Mililiter is: %f ml\n",ml);
							break;
						case 2:
							printf("------------Liter to Cube Meter Conversion------------\n");
							printf("Enter the value which you want to convert to Cubic Meter:\n");
							scanf("%f",&lit);
							cubm=lit/1000;
							printf("Volume conversion from Liter to Cube Meter is: %f Cubic Meter\n",cubm);
							break;
                        case 3:
                            printf("------------Liter to US Gallon Conversion------------\n");
							printf("Enter the value which you want to convert to US Gallon:\n");
							scanf("%f",&lit);
							usgallon=lit/3.785;
							printf("Volume conversion from Liter to US Gallon is: %f Gallon\n",usgallon);
							break;
						default:
							printf("!!!WRONG CHOICE!!!");
							break;
						
		}
		
		break;
		case 2:
		printf("------------Welcome to Mililiter conversion------------\n");
        printf("1.Press 1 for Mililiter to Liter Conversion\n2.Press 2 for Mililiter to Cubic Meter Conversion\n3.Press 3 for Mililiter to US gallon Conversion\n");
        scanf("%d",&ch);
		switch(ch)
		{
						case 1:
							printf("------------Mililiter to Liter Conversion------------\n");
							printf("Enter the value which you want to convert to Liter:\n");
							scanf("%f",&ml);
							lit=ml/1000;
							printf("Volume conversion from Mililiter to Liter is: %f Liter\n",lit);
							break;
						case 2:
							printf("------------Mililiter to Cube Meter Conversion------------\n");
							printf("Enter the value which you want to convert to Cubic Meter:\n");
							scanf("%f",&ml);
							cubm=ml*0.000001;
							printf("Volume conversion from MiliLiter to Cube Meter is: %f Cubic Meter\n",cubm);
							break;
                        case 3:
                            printf("------------MiliLiter to US Gallon Conversion------------\n");
							printf("Enter the value which you want to convert to US Gallon:\n");
							scanf("%f",&ml);
							usgallon=ml/3785;
							printf("Volume conversion from MiliLiter to US Gallon is: %f Gallon\n",usgallon);
							break;
						default:
							printf("!!!WRONG CHOICE!!!");
							break;
					
		}
        break;
        case 3:
        printf("------------Welcome to Cubic Meter Conversion------------\n");
        printf("1.Press 1 for Cubic Meter to Liter Conversion\n2.Press 2 for Cubic Meter to Mililiter Conversion\n3.Press 3 for Cubic Meter to US gallon Conversion\n");
        scanf("%d",&ch);
		switch(ch)
        {
            case 1:
				printf("------------Cubic Meter to Liter Conversion------------\n");
				printf("Enter the value which you want to convert to Liter:\n");
				scanf("%f",&cubm);
				lit=cubm*1000;
				printf("Volume conversion from Cubic Meter to Liter is: %f Liter\n",lit);
				break;
            case 2:
				printf("------------Cubic Meter to MiliLiter Conversion------------\n");
				printf("Enter the value which you want to convert to MiliLiter:\n");
				scanf("%f",&cubm);
				ml=cubm*1000000;
				printf("Volume conversion from Cubic Meter to Mililiter is: %f MiliLiter\n",ml);
				break;
            case 3:
                printf("------------Cubic Meter to US Gallon Conversion------------\n");
				printf("Enter the value which you want to convert to US Gallon:\n");
				scanf("%f",&cubm);
				usgallon=cubm*264.2;
				printf("Volume conversion from Cubic Meter to US Gallon is: %f Gallon\n",usgallon);
				break;
			default:
				printf("!!!WRONG CHOICE!!!");
				break;
        }
        break;
        case 4:
        printf("------------Welcome to US Gallon Conversion------------\n");
        printf("1.Press 1 for US Gallon to Liter Conversion\n2.Press 2 for US Gallon to Mililiter Conversion\n3.Press 3 for US Gallon to Cubic Meter Conversion\n");
        scanf("%d",&ch);
		switch(ch)
        {
            case 1:
				printf("------------US Gallon to Liter Conversion------------\n");
				printf("Enter the value which you want to convert to Liter:\n");
				scanf("%f",&usgallon);
				lit=usgallon*3.785;
				printf("Volume conversion from US Gallon to Liter is: %f Liter\n",lit);
				break;
            case 2:
                printf("------------US Gallon to MiliLiter Conversion------------\n");
				printf("Enter the value which you want to convert to MiliLiter:\n");
				scanf("%f",&usgallon);
				ml=usgallon*3785;
				printf("Volume conversion from US Gallon to Mililiter is: %f MiliLiter\n",ml);
				break;
            case 3:
				printf("------------US Gallon to Cube Meter Conversion------------\n");
				printf("Enter the value which you want to convert to Cubic Meter:\n");
				scanf("%f",&usgallon);
				cubm=usgallon/264.2;
				printf("Volume conversion from US Gallon to Cube Meter is: %f Cubic Meter\n",cubm);
				break;
            default:
                printf("!!!WRONG CHOICE!!!");
                break;
        }
    return 0;
}
}
//END