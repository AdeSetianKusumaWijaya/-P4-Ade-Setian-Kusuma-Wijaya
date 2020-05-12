#include <iostream>
using namespace std;
main(){
	cout << "Nama     : Ade Setian Kusuma Wijaya"<<endl;
	cout << "NIM      : F1B019006"<<endl;
	cout << "Kelompok : 02"<<"\n\n";
	
	int matriks1 [5][5], matriks2 [6][6], i, j;
	cout << "NIM 1\n";
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++){
			cout << "Elemen [" << i << "]" << "[" << j << "] : ";
			cin >> matriks1 [i][j];
		}
	}
	
	cout << "\nNIM 2\n";
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++){
			cout << "Elemen [" << i << "]" << "[" << j << "] : ";
			cin >> matriks2 [i][j];
		}
	}
	cout << "\nHasil Penjumlahan\n";
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++)
		cout << "\t" << matriks1 [i][j] + matriks2 [i][j];
		cout << "\n";
	}
}
