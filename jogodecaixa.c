#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "");
	char resposta = 's';
	srand(time(NULL));
	while(resposta == 's')
	{
		int reward = rand() % 6 + 1;

		printf("\nboom\n");
		
		if(reward == 1)
		{
			printf("Moedas -100P \n");
		}
		else if(reward == 2)
		{
			printf("Poção mágica -50p \n");
		}
		else if(reward == 3)
		{
			printf("Armadilha - -50P \n");
		}
		else if(reward == 4)
		{
			printf("Monstro - -100P\n");
		}
		else if(reward == 5)
		{
			printf("Nada lol \n");
		}
		else
		{
			printf("Diamante - 200P\n");
		}
		printf("Deseja abrir novamente? (s/n): ");
		scanf_s(" %c", &resposta, 1);
     
	}


}