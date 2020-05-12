#include <iostream>
#include <string>
using namespace std;

string benda [16] = {
"", "Resistor (mix)", "Dioda Zener", "Kapasitor (mix)", "Transistor TIP", "IC NE555", "PCB\t", "Solder\t", "Ferryclorid", "Timah\t", "Desolder", "Speaker\t", "Kabel Serabut", "Isolasi\t", "Thinner\t", "Avometer"};
int harga [16] = {
0, 10, 5, 50, 7, 5, 15, 25, 15, 15, 8, 35, 6, 15, 25, 90};
int stok [16] = {
0, 100, 40, 50, 100, 100, 50, 50, 50, 20, 35, 86, 0, 50, 90, 10};
int jumlah, total, jml;
void listbenda (string benda [], int harga [], int stok []){
	cout << "---------------------------------------------------------\n";
	cout << "|                   Toko Supersonic\t\t\t|\n";
	cout << "|-------------------------------------------------------|\n";
	cout << "|No\tBarang\t\t\tHarga\t\tStok\t|\n";
	cout << "|-------------------------------------------------------|\n";
	
	for (int i = 1; i < 16; i++){
		cout << "|"<< i << "\t" << benda [i] << "\t\tRp. " << harga [i] << ".000\t" << stok [i] << "\t|" << endl;
	}
	cout << "---------------------------------------------------------\n" << endl;
}
int belian (){
	ulang :
		int no;
		char lagi;
		cout << "Input no barang\t\t\t : "; cin >> no;
		if (no [stok] == 0){
			cout << "\n Stok tidak tersedia\n";
			cout << "------------------------------------------------\n";
			
			goto ulang2;
		}
		else {
			cout << "Nama barang\t\t\t : " << benda [no] << endl;
			cout << "Harga barang\t\t\t : Rp. " << harga [no] << ".000" << endl;
			cout << "Stok barang\t\t\t : " << stok [no] << endl;
			cout << "Jumlah barang yang dibeli\t : "; cin >> jml;
			
			if (jml > no [stok]){
				cout << "\nMaaf pesanan melebihi stok\n";
				cout << "------------------------------------------------\n";
				
				goto ulang2;
			}
			total = jml * harga [no];
			jumlah = jumlah + total;
			cout << "\nTotal belanja\t\t\t : Rp. " << total << ".000" << endl;
			cout << "------------------------------------------------\n";
			
			ulang2 :
				cout << "Belanja lagi? (Y/T)\t\t : "; cin >> lagi;
				cout << endl;
		}
		if (lagi == 'Y' || lagi == 'y'){
			goto ulang;
		}
		else if (lagi == 'T' || lagi == 't'){
		}
}
void struk (){
	int i, n, b, k, k2, h [100], j[100], th[100];
	char a [100][30];
	cout << "------------------------------------------------\n";
	cout << "Input jumlah jenis barang\t : "; cin >> n;
	
	for (i = 1; i <= n; i++){
		cout << "Input nama barang ke- " << i << "\t\t : "; //tambahkan "_" jika suku kata > 1
		cin >> a [i];
		cout << "Input harga per barang (ribu)\t : Rp. "; cin >> h [i];
		cout << "Input jumlah barang\t\t : "; cin >> j[i];
		cout << endl;
	}
	for ( i = 1; i <= n; i++){
		th [i] = j [i] * h [i];
	}
	cout << "Total harga keseluruhan\t\t : Rp. " << jumlah << ".000\n";
	cout << "Input jumlah pembayaran (ribu)\t : Rp. "; cin >> b;
	
	k = b - jumlah;
	system ("cls");
	cout << "\t\tDaftar Belanjaan Anda\t\n";
	cout << "------------------------------------------------\n";
	
	for (i = 1; i <= n; i++){
		cout << j[i] << " buah " << a[i] << "\t--->\tharga : Rp. " << th [i] << ".000\n";
	}
	cout << "------------------------------------------------\n";
	
	if (b >= jumlah){
		cout << "Total harga\t\t\t : Rp. " << jumlah << ".000\n";
		cout << "Pembayaran\t\t\t : Rp. " << b << ".000\n";
		cout << "Kembalian\t\t\t : Rp. " << k << ".000\n";
	}
	else{
		k2 = -1 * k;
		cout << "Maaf uang anda tidak mencukupi..." << endl;
		cout << "Total harga\t\t\t : Rp. " << jumlah << ".000\n";
		cout << "Pembayaran\t\t\t : Rp. " << b << ".000\n";
		cout << "Kekurangan\t\t\t : Rp. " << k2 << ".000\n";
	}
	cout << "------------------------------------------------\n";
}
int main (){
	listbenda (benda, harga, stok);
	belian ();
	struk ();
}
