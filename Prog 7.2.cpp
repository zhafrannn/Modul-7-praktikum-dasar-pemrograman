#include<iostream>
using namespace std;
int main()
{
	int i,j,bil[10];
	cout<< "Masukan 5 buah bilangan\n";
	cout<< "-----------------------\n";
	for(i=0;i<5;i++){
		cout<< "bilangan ke-"<< (i+1)<< " : ";
		cin>> bil[i];
	}
	cout<< "Bilangan yang diinputkan : \n";
	for(j=0;j<5;j++){
		cout<< bil[j]<< " ";
	}
}
