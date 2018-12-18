#include<iostream>
using namespace std;
int main()
{
	float rata, x=0, n=0;
	int i,j,bil[10];
	cout<< "Masukan 5 buah bilangan\n";
	cout<< "-----------------------\n";
	for(i=0;i<5;i++){
		cout<< "bilangan ke-"<< (i+1)<< " : ";
		cin>> bil[i];
		n=n+ bil[i];
		x=x+1;
	}
	cout<< "Bilangan yang diinputkan : \n";
	for(j=0;j<5;j++){
		cout<< bil[j]<< " ";
	}
	rata = n/i;
	cout<< "Rata-ratanya adalah : " << rata; 
}
