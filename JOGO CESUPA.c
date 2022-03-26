#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 void main()
 {
 	int n = 1;

 	
 	while (n != 0)
 	{ 	
 		//menu
		printf("\n\nSeja bem vindo ");
		printf("\nEscolha um jogo:");
		printf("\nQuiz = 1");
		printf("\nAdivinhe o numero = 2:");
		printf("\nOlho de cobra = 3");
		printf("\ndigite 0 para sair");
		
		
		printf("\nDigite o jogo : ");
 		scanf("%d", &n);
 		
 		switch(n)// switch de todos os jogos
 		{
 			case(1)://inicio do 1 jogo	
 				{
 					printf("Primeiro jogo");
 				
 	char resp;
	char cert='s';
	int certo, errado; 
	int jogo = 1;
	int certo_1=0,errado_1=0,contp_1=1,totp_1=1;
	int certo_2=0,errado_2=0,contp_2=1,totp_2=1;
	int certo_3=0,errado_3=0,contp_3=1,totp_3=1;
	
	system("cls");
	printf ("\nSEJA BEM VINDO \n");
	printf ("-------------------------------------------------------------------------------\n");
	printf ("Este e um jogo divertido de perguntas e respostas. O jogador devera escolher\n");
	printf ("dentre as 3 alternativas apenas uma e em seguida pressionar \"enter\".\n\n");
	 
 	switch(jogo) // switch do jogo 1
	{
		case 1 :
		{//primeira pergunta
			
			fflush(stdin);
			system("pause");
			system("cls");
			printf ("Pressione \"enter\" para continuar...");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d   |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("Qual o numero de pi ate a 3 casa decimal?\n");
			printf ("A) 3,14\n");
			printf ("B) 3,13\n");
			printf ("C) 3,16\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%c", &resp);
			if ((resp=='a')||(resp=='A'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"a\"\n");
				errado_1++;
			}
			//segunda pergunta
			fflush(stdin);
			system("pause");
			system("cls");
			printf ("Pressione \"enter\" para continuar...");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d   |\n",contp_2++);
			printf ("*--------------------------------*\n\n");
			printf ("Quantos estados o Brasil tem?\n");
			printf ("A) 27\n");
			printf ("B) 26\n");
			printf ("C) 20\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%c", &resp);
			if ((resp=='b')||(resp=='B'))
			{
				printf ("Resposta correta\n");
				certo_2++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"b\"\n");
				errado_2++;
			}	
			
			//terceira pergunta
			fflush(stdin);
			system("pause");
			system("cls");
			printf ("Pressione \"enter\" para continuar...");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d   |\n",contp_3++);
			printf ("*--------------------------------*\n\n");
			printf ("Qual o medico responsavel pelos olhos ?\n");
			printf ("A) oculista\n");
			printf ("B) oftalmologista\n");
			printf ("C) oncologista\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%c", &resp);
			if ((resp=='b')||(resp=='B'))
			{
				printf ("Resposta correta\n");
				certo_3++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"b\"\n");
				errado_3++;
			}
   }
}
system("pause");
				 }
				break;
				
				//fim do 1 jogo
			case(2):
				{//inicio do segundo jogo
 					fflush(stdin);
 					
					 printf("segundo jogo");	
					 	
					 int random_genNo=0,tentativa=0,num;
    				int stempo;
    				long ltempo;
 
				    //iniciando o codigo gera um numero aleatorio diferente pra cada vez que se inicia 
				    ltempo = time(NULL);
				    stempo = (unsigned) ltempo/2;
				    srand(stempo);
 
				    //Gerando um numero aleatorio < 1000
				    random_genNo=rand()%1000;
				 
				    //loop
				    while(1)
				    {
				        //tentativas
				        tentativa+=1;
 
			        //digitalizar pro usuario escolher um numero de 0 a 1000
			        printf("\n\nDigite Um Numero de (0 a 1000): ");
			        scanf("%d",&num);
			 
			        //Comparar o numero digitado pelo usuario com o numero gerado
			 
			        if(random_genNo==num){
			            printf("parabens, voce acertou.");
			            break;
			        }
			        else if(random_genNo<num){
			            printf("O numero gerado eh menor que o numero escolhido, Tente novamente...");
			        }
			        else if(random_genNo>num){
			            printf("O numero gerado eh maior que o numero escolhido ,Tente novamente...");
			        }
			 
			        if(tentativa==5){
			            printf("\n\n### Limite de tentativas excedido, TENTE OUTRA VEZ!!!\n");
			            break;
			        }
    				}
					 system("pause");			
					}//fim do 2 jogo
				
			       case(0):
				{//sair
					break;	
				}
				
				case(3)://inicio do terceiro jogo
				{
					fflush(stdin);
					//colocar o jogo 3
					
					
				}
				
		 }//fim do switch  
	 }//fim do while
	  
 }