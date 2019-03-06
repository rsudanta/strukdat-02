/*
*Author:M Risqullah Sudanta G
*NPM: 140810180066
*Deskripsi: Digunakan untuk menampilkan identitas sederhana orang
*Tahun: 2019
*/

#include<iostream>
#include<string.h>

using namespace std;

struct Orang{
	int umur;
	char nama[30];
	char jk[1];
	char goldar[1];
};

int main(){
	
	Orang orang;
    cout<<"Umur :";cin>>orang.umur;
	cin.ignore();
    cout<<"Nama : ";cin.getline(orang.nama, 30);
    cout<<"Goldar : ";cin.getline(orang.goldar, 3);
    cout<<"Jenis kelamin : ";cin.getline(orang.jk, 2);
    
    cout<<orang.umur<<endl;
    cout<<orang.nama<<endl;
    cout<<orang.goldar<<endl;
    cout<<orang.jk<<endl;

}
