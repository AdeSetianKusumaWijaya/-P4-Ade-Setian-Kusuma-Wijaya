#include <iostream>
using namespace std;
main(){
	cout << "Nama     : Ade Setian Kusuma Wijaya"<<endl;
	cout << "NIM      : F1B019006"<<endl;
	cout << "Kelompok : 02"<<"\n\n";
	
	int a [10][10], b, c, baris, kolom;
	char cho;
	do{
		cout << "Jumlah baris : "; cin >> baris;
		cout << "Jumlah kolom : "; cin >> kolom;
		cout << endl;
		
		for (b = 0; b < baris; b++){
			for (c = 0; c < kolom; c++){
				cout << "Matriks ["<< b + 1 <<", "<< c + 1 <<"] : ";
				cin >> a [b][c];
			}
		}
		cout << endl;
		cout << "Matriks Pertama : " << endl;
		for (b = 0; b < baris; b++){
			for (c = 0; c < kolom; c++){
				cout << " " << a [b][c] << " ";
			}
			cout << endl;
		}
		cout << "Matriks Transphose : " << endl;
		for (b = 0; b < baris; b++){
			for (c = 0; c < kolom; c++){
				cout << " " << a [c][b] << " ";
			}
			cout << endl;
		}
		cout << "Ingin mengulang ? (y/n) : "; cin >> cho;
	}
	while (cho == 'y' || cho == 'Y');
}
