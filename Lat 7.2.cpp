#include<iostream>
using namespace std;
int main()
{
	int jumlah,terbesar,terkecil;
	float rata, x=0, n=0;
	int i,j,bil[10];
	cout<< "Masukan 5 buah bilangan\n";
	cout<< "-----------------------\n";
	for(i=0;i<5;i++){
		cout<< "bilangan ke-"<< (i+1)<< " : ";
		cin>> bil[i];
		n=n+ bil[i];
		x=x+1;
		
		 if(i==0){
   			terbesar=bil[i];
   			terkecil=bil[i];
  		}
  
  		else if(terkecil>bil[i])
  			terkecil=bil[i];
  
  		else if (terbesar<bil[i])
  			terbesar=bil[i];
  
  		else { } 
	}
	cout<< "Bilangan yang diinputkan : \n";
	for(j=0;j<5;j++){
		cout<< bil[j]<< " ";
	}
	rata = n/i;
	cout<< "Rata-ratanya adalah : " << rata; 
	cout<<"\nBilangan Terbesar = "<<terbesar;
 cout<<"\nBilangan Terkecil = "<<terkecil;
}
