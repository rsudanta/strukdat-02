/*
*Author:M Risqullah Sudanta G
*NPM: 140810180066
*Deskripsi: Digunakan untuk menampilkan theater film
*Tahun: 2019
*/
#include<iostream>
#include<string.h>

using namespace std;

struct Theater{
	int room;
	char seat[3];
	char movieTitle[30];
};

int main(){
	Theater theater;
	cout<<"Room : ";cin>>theater.room;cin.ignore();
	cout<<"Seat : ";cin.getline(theater.seat, 3);
	cout<<"Judul : ";cin.getline(theater.movieTitle, 30);cout<<endl;
	
	cout<<"Room : "<<theater.room<<endl;
	cout<<"Seat : "<<theater.seat<<endl;
	cout<<"Judul : "<<theater.movieTitle;
}
