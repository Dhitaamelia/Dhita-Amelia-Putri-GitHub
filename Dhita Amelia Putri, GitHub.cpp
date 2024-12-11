// Dhita Amelia Putri, GitHub.cpp : This file contains the 'main' function. Program execution begin
#include <iostream>
#define PI 3.14
using namespace std;


// Luas & Keliling Persegi
void persegi (double sisi) {
	cout << "Luas Persegi : " << (sisi * sisi) << endl;
	cout << "Keliling Persegi : " << (4 * sisi) << endl;

}
// Luas Keliling Persegi Panjang 
void persegipanjang(double lebar, double panjang) {
	cout << " Luas Pesegi Panjang : " << (panjang * lebar) << endl;
	cout << "Keliling Persegi Panjang: " << (2 * (panjang + lebar)) << endl;

}
// Luas Segitiga Siku-Siku
void segitigasiku_siku(double alas, double tinggi) {
	cout << "Luas Segitiga Siku-Siku: " << (0.5 * alas * tinggi) << endl;
	cout << "Keliling Segitiga Siku-Siku: "
		<< (alas + tinggi + (alas * alas + tinggi * tinggi) / (alas + tinggi)) << endl;
}
	
// Luas & Keliling lingkaran
void lingkaran(double jarijari) {
	cout << "Luas Lingkaran : " << (PI * jarijari * jarijari) << endl;
	cout << "Keliling Lingkaran : " << (2 * PI * jarijari) << endl;
}

int main() {
	int Pilihan;
	do {
		cout << "\nPilih Bangun Datar Yang Akan Dihitung : ";
		cout << "1. Persegi" << endl;
		cout << "2. Persegi Panjang" << endl;
		cout << "3. Segitiga Siku-siku" << endl;
		cout << "4. Lingkaran" << endl;
		cout << "5. Keluar" << endl;
		cout << "Masukkan Pilihan ";
		cin >> Pilihan;

		switch (Pilihan) {
		case 1: {
			double sisi;
			cout << "Masukkan Sisi : ";
			cin >> sisi;
			persegi(sisi);
			break;

		}
		case 2: {
			double panjang, lebar;
			cout << "Masukkan Sisi : ";
			cin >> panjang;
			cout << "Masukkan Lebar : ";
			cin >> lebar;
			persegipanjang(panjang, lebar);
			break;
		}
		case 3: {
			double alas, tinggi;
			cout << "Masukkan Alas : ";
			cin >> alas;
			cout << "Masukkan Tinggi : ";
			cin >> tinggi;
			segitigasiku_siku(alas, tinggi);
			break;
		}
		case 4: {
			double jarijari;
			cout << "Masukkan Jari-Jari lingkaran : ";
			cin >> jarijari;
			lingkaran(jarijari);
			break;
		}
		case 5: {
			cout << "Keluar dari Program." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Coba lagi." << endl;
		}

		} 
	}	while (Pilihan != 5);

		return 0;
}