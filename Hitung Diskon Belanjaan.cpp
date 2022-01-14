#include <iostream>
#include <iomanip.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main()
{
	
	float a,b,c,d,x,y,z,m,n,o,total,X,Y,Z,V,XX,XX2,XX3;
	char e[30],f[30],g[30];
	double hasil,W;
	cout<<"input nama barang 1"<<setw(3)<<endl;cin>>e ;
	cout<<"input jumlah barang"<<setw(3)<<"=";cin>> x;
	cout<<"input harga satuan "<<setw(3)<<"=";cin>> a;
	m=a*x;
	cout<<"Total Harga Barang1"<<setw(3)<<"="<< m <<endl;
	
	cout<<"input nama barang 2"<<setw(3)<<"= ";cin>>f ;
	cout<<"input jumlah barang"<<setw(3)<<"=";cin>> y;
	cout<<"input harga        "<<setw(3)<<"=";cin>> b;
	n=b*y;
	cout<<"total harga barang2"<<setw(3)<<"="<<n<<endl;;
	
	cout<<"input nama barang 3"<<setw(3)<<"= ";cin>>g ;
	cout<<"input jumlah barang"<<setw(3)<<"=";cin>> z;
	cout<<"input harga        "<<setw(3)<<"=";cin>> c;
	o=c*z;
	cout<<"total harga barang "<<setw(3)<<"="<<o<<endl;
	getch();
	d=m+n+o;
	cout<< "Total Harga" <<setw(3)<<"="<<d<<endl;
	W = total = d>120000? d*2/10 : X ;
	W = X = ((d>100000)&&(d<120000))? d*1/10 : Y ;
	W = Y = ((d>50000)&&(d<100000))? d*5/100 : Z ;
	W = Z = d<50000? 0 : Y ; 
    
	

	cout<<"total diskon = "<<W<<endl;
	hasil=d-W;
	cout<<"hasil akhir harga = "<<hasil<<endl;
	
	
	return 0;
}