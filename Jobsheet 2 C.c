#include<stdio.h>
using namespace std;
main(){
	printf ("Nama     : Ade Setian Kusuma Wijaya");
	printf ("\nNIM      : F1B019006");
	printf ("\nKelompok : 02\n\n");
	
	int nim [6];
	printf ("Input data 1 : "); scanf ("%i", &nim [0]);
	printf ("Input data 2 : "); scanf ("%i", &nim [1]);
	printf ("Input data 3 : "); scanf ("%i", &nim [2]);
	printf ("Input data 4 : "); scanf ("%i", &nim [3]);
	printf ("Input data 5 : "); scanf ("%i", &nim [4]);
	printf ("Input data 6 : "); scanf ("%i", &nim [5]);
	printf ("\n");
	
	printf ("Nilai ke 1 : %i\n", nim [0]);
	printf ("Nilai ke 2 : %i\n", nim [1]);
	printf ("Nilai ke 3 : %i\n", nim [2]);
	printf ("Nilai ke 4 : %i\n", nim [3]);
	printf ("Nilai ke 5 : %i\n", nim [4]);
	printf ("Nilai ke 6 : %i", nim [5]);
}
