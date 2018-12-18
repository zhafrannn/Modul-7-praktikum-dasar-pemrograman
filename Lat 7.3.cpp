#include<iostream>
using namespace std;
int main()
{
	int i,j,nilai[5][5],n;
	cout<< "Input nilai Mahasiswa\n";
	cout<< "---------------------\n";
	cout<< "Masukan banyak mahasiswa : ";
	cin>> n;
	for(i=0;i<n;i++){
		cout<< "Mahasiswa ke-"<<(i+1)<< " : \n";
		for(j=0;j<3;j++){
			cout<< "Nilai ke-"<<(j+1)<< " : ";
			cin>> nilai[i][j];
		}
	}
	cout<< "--------------------------\n";
	cout<< "Data nilai mahasisiwa\n";
	cout<< "--------------------------\n";
	cout<< "Nilai ke | 1	2	3	\n";
	for(i=0; i<3; i++){
		cout << "Mhs ke-" << (i+1) << " : "; 
		for(j=0; j<3; j++){
			cout << nilai[i][j] << " "; cout << endl;
		}
	}
}
