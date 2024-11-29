#include <stdio.h>
#include <stdlib.h> 
	int a,b;
    char op;

/******************************************************/

int scan() {
   int nombre;
   while(scanf("%d", &nombre) != 1) {
      printf("Erreur : veuillez entrer un nombre entier valide.\n");
      while(getchar() != '\n'); 
      printf("Entrez un nombre entier : ");
   }
   return (nombre);
}
/******************************************************/

void dec2bin(int n)
{
	int i,tab[10];

	for(i=0;n>0;i++)  
  {  
    tab[i] = n%2;  
    n= n/2;  
  } 

printf("\n Le nombre binaire est :   ");

 
  for(i=i-1; i >= 0; i--)  
  {  
    printf("%d",tab[i]);  
  }  
	
}	
/*******************************************************/
void operation()
{

printf("\n\t ________________________________________");
printf("\n\t|                                        |");
printf("\n\t|  VEUILLEZ ENTREZ LE NUMERO D'OPERATION |");
printf("\n\t|________________________________________|");

printf("\n\t           1)Entrez 1 pour AND           ");

printf("\n\t           2)Entrez 2 pour OR            ");

printf("\n\t           3)Entrez 3 pour XOR           ");

printf("\n");
scanf("%s",&op);
         switch(op){
	            case '1':printf("a&b=%d", a&b);break;
                case '2':printf("a|b= %d", a|b);break;
	            case '3':printf("a^b= %d", a^b);break;
            	default: printf("Choix invalide. \n"); }

}

/**************************************************/
int repeat(){
int n;
        do{
                	operation(a,b,op);
                	printf("\ntaper 1 si vous voullez repeter ou taper n'importe quel chiffre pour s'arreter : \n");
                	printf("==> ");
                	scanf("%d",&n);
                
                }
        while(n==1);

}
/**************************************************/

void main()
{
		system("COLOR B");

printf("                             _________________  \n");	
printf("                            |                 | \n");
printf("                            |     BITWISE     | \n");
printf("                            |_________________| \n");


printf("\n\t ____________________________");
printf("\n\t|                            |");
printf("\n\t|  entrer un entier positif: |");
printf("\n\t|____________________________|");
    printf("\n");
	a=scan();
	
     	if(a<0){
	        	a=a*(-1);
				}
				
    dec2bin(a);
    
printf("\n\t __________________________________");
printf("\n\t|                                  |");
printf("\n\t|  entrer un autre entier positif: |");
printf("\n\t|__________________________________|");
    printf("\n");
	b=scan();
	
		if(b<0){
	        	b=b*(-1);
            	}
            	     	
    dec2bin(b);
    repeat();
    
printf("\n          #######  ###  #     #      ######   #     #      ######   ######   #######   #####   ######      #     #     #  #     #  ####### ");
printf("\n          #         #   ##    #      #     #  #     #      #     #  #     #  #     #  #     #  #     #    # #    ##   ##  ##   ##  #       ");
printf("\n          #         #   # #   #      #     #  #     #      #     #  #     #  #     #  #        #     #   #   #   # # # #  # # # #  #       ");
printf("\n          #####     #   #  #  #      #     #  #     #      ######   ######   #     #  #  ####  ######   #     #  #  #  #  #  #  #  #####   ");
printf("\n          #         #   #   # #      #     #  #     #      #        #   #    #     #  #     #  #   #    #######  #     #  #     #  #       ");
printf("\n          #         #   #    ##      #     #  #     #      #        #    #   #     #  #     #  #    #   #     #  #     #  #     #  #       ");
printf("\n          #        ###  #     #      ######    #####       #        #     #  #######   #####   #     #  #     #  #     #  #     #  ####### ");
}
