/*	cout<< Masukkan Panjang data
*Author:M Risqullah Sudanta G
*NPM: 140810180066
*Kelas : B
*Tanggal :6/3/2019
*/
#include<iostream>
using namespace std;

void moveZeroToFront(int arr[],int n){
	int x=0;
	for(int i=0;i<n;i++)
    if (arr[i] != 0)
    swap(arr[x++], arr[i]);
}
void input(int arr[],int& n){
    cout<<"Masukkan Panjang Data : ";
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<"Masukkan Data "<<i<<" ";cin>>arr[i];
    }
}

void output(int arr[],int n){
    cout<<"Hasil  : ";
    for(int i = 0;i<n;i++)
    cout<< arr[i] << " ";
}


int main(){
	int arr[100];
	int n;
	input(arr,n);
	moveZeroToFront(arr,n);
	output(arr,n);
}


