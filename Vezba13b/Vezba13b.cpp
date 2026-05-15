// Vezba13b.cpp : This file contains the 'main' function. Program execution begins and ends there.
// WHILE petlja - sa uslovom na vrhu
// korisnik unosi poene sve dok ne unese
// negativne poene
#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int poeni, max = -1;
	printf("Unesite poene: ");
	scanf("%d", &poeni);
	while (poeni >= 0)
	{
		// obrada poena
		if (poeni > max)
			max = poeni;
		// unos sledecih poena
		printf("Unesite poene: ");
		scanf("%d", &poeni);
	}
	printf("Najveci broj poena je: %d\n", max);
	// korisnik unosi ocene
	int ocena, zbir = 0, i = 0;
	char dalje = 'd';
	while (dalje == 'd')
	{
		// unos ocene
		printf("Unesite ocenu: ");
		scanf("%d", &ocena);
		// obrada ocene
		zbir += ocena;
		i++;
		// da li zeli dalje
		printf("Da li zelite dalje? (d/n)\n");
		scanf(" %c", &dalje);
	}
	printf("Prosek: %.2f\n", (float)zbir / i);
}
