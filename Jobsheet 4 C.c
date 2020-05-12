#include<stdio.h>
using namespace std;
main(){
	printf ("Nama     : Ade Setian Kusuma Wijaya");
	printf ("\nNIM      : F1B019006");
	printf ("\nKelompok : 02\n\n");
	
	int matriks1 [5][5], matriks2 [6][6], i, j;
	printf ("NIM 1\n");
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++){
			printf ("Elemen [%d][%d] : ", i, j);
			scanf ("%d", &matriks1 [i][j]);
		}
	}
	
	printf ("\nNIM 2\n");
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++){
			printf ("Elemen [%d][%d] : ", i, j);
			scanf ("%d", &matriks2 [i][j]);
		}
	}
	
	printf ("\nHasil Pengurangan\n");
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++)
		printf ("%d\t", matriks1 [i][j] - matriks2 [i][j]);
		printf ("\n");
	}
}
