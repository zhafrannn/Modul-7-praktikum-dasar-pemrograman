#include<iostream>
using namespace std;
int main()
{
	int i, j, nilai[5][5];
	cout << "Inputkan Nilai Mahasiswa\n"; cout << "------------------------\n";
	for(i=0; i<3; i++)
	{
		cout<<"Mahasiswa ke-"<<(i+1)<< ": \n";
		for(j=0; j<3; j++){
			cout<<"Nilai ke-"<<(j+1)<< " : "; 
			cin >> nilai[i][j];
		}
}

		cout << "--------------------------\n";
		cout << " Data Nilai Mahasiswa \n"; 
		cout << "--------------------------\n";
		cout << "Nilai ke | 1\t2\t3 \n";
		cout << "=======================\n";
		for(i=0; i<3; i++){
			cout << "Mhs ke-" << (i+1) << " : "; 
			for(j=0; j<3; j++){
				cout << nilai[i][j] << "\t"; 
			}
			cout << endl;
		}
	
}
