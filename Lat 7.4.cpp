#include<iostream>
using namespace std;
int main()
{
	int a[2][2], b[2][2], c[2][2];
	cout<< "Masukan ordo A : \n";
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<< "masukan nilai array " <<i<<"."<<j << " : ";
			cin>> a[i][j];
	}
}
	cout<< "Masukan ordo B : \n";
	for(int x=0;x<2;x++){
		for(int y=0;y<2;y++){
			cout<< "masukan nilai array "<<x<<"."<<y << " : ";
			cin>> b[x][y];
	}
	}
	cout<< "Ordo A \n";
	for(int i=0; i<2;i++){
		for(int j=0; j<2;j++){
			cout<< " " << a[i][j] << " ";
		}
	cout<< endl;
	}
	cout<< "Ordo B \n";
	for(int x=0; x<2;x++){
		for(int y=0; y<2;y++){
			cout<< " " << b[x][y] << " ";
		}
	cout<< endl;
	}
	cout<< "Ordo A + Ordo B = \n"	;
	for(int i=0; i<2;i++){
		for(int j=0; j<2;j++){
			c[i][j]= a[i][j] + b[i][j];
			cout<< " " << c[i][j] << " ";
		}
	cout<< endl;
	}
}

