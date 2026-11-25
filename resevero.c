#include<stdio.h>

int main()
{
	char* nomes[5] = { "bobby" , "jattpromax" , "lavanya" ,"arish","singh" };
	int i;
	for (i = 4; i >= 0; i--)
	{
		printf("%s \n", nomes[i]);
	}

	return 0;
}
