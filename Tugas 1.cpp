#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float rata, x=0, jml=0,s,n,m=0,d;
	int i,j,bil[10];
	cout<< "Masukan banyak bilangan : ";
	cin>> n;
	cout<< "-----------------------\n";
	for(i=0;i<n;i++){
		cout<< "bilangan ke-"<< (i+1)<< " : ";
		cin>> bil[i];
		jml=jml+ bil[i];
		x=x+1;
	}
	rata = jml/i;
	cout<< "Bilangan yang diinputkan : \n";
	for(j=0;j<n;j++){
		cout<< bil[j]<< " ";
		d=(bil[j]-rata)*(bil[j]-rata)/(n-1);
		m= m+d;
	}
		s= sqrt(m);
	cout<< "\nDeviasasinya adalah : " << s << endl;
	cout<< "Rata-ratanya adalah : " << rata; 
}
