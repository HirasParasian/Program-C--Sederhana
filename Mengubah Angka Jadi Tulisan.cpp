#include <iostream>
using namespace std;
void satuan (int X)
{
	//Satuan
if (X==1) {cout<<" Satu ";}
else if (X==2) {cout<<" Dua ";}
else if (X==3) {cout<<" Tiga ";}
else if (X==4) {cout<<" Empat ";}
else if (X==5) {cout<<" Lima ";}
else if (X==6) {cout<<" Enam ";}
else if (X==7) {cout<<" Tujuh ";}
else if (X==8) {cout<<" Delapan ";}
else if (X==9) {cout<<" Sembilan ";}
else if (X==10) {cout<<" Sepuluh ";}
else if (X==11) {cout<<" Sebelas ";}
}
void ubah (long long  Y)
//Belasan
{if (Y<=11) {satuan(Y);} else if ((Y>11) && (Y<=19))
{ubah(Y%10); cout<<"Belas ";}   
//Puluhan
else if ((Y>=20)&&(Y<=99)){ubah(Y/10); cout<<"Puluh "; ubah(Y%10);} 
//Ratusan 
else if ((Y>=100)&&(Y<=199)){cout<<"Seratus "; ubah(Y%100);} 
else if ((Y>=200)&&(Y<=999)){ubah(Y/100); cout<<"Ratus "; ubah(Y%100);}   
//Ribuan
else if ((Y>=1000)&&(Y<=1999)) {cout<<"Seribu "; ubah(Y%1000);} 
else if ((Y>=2000)&&(Y<=9999)) {ubah(Y/1000); cout<<"Ribu "; ubah(Y%1000);} 
//Puluh Ribuan
else if ((Y>=10000)&&(Y<=99999)) {ubah(Y/1000); cout<<"Ribu "; ubah(Y%1000);} 
//Ratus Ribuan
else if ((Y>=100000)&&(Y<=999999)) { ubah(Y/1000); cout<<"Ribu "; ubah(Y%1000);} 
//Jutaan
else if ((Y>=1000000)&&(Y<=10000000)) { ubah (Y/1000000); cout<<"Juta "; ubah (Y%1000000);} 
else if (Y>=10000000)
cout<<"1 sampai 10juta aja ya inputnya";
}

main()
{
long double nilai;
cout<<"PROGRAM KONVERSI ANGKA KE HURUF 1 sampai 10 juta"<<endl;
cout<<"Masukkan Angka: ";cin>>nilai;
cout<<endl;
cout<<"Hasil Ubah ke sepatah dua patah kata: "<<endl;
ubah(nilai);
cout<<endl<<endl;
} 
