#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<stdio.h>
using namespace std;
void garis() 
{
int i;
for(i=0;i<=100;i++)
{
cout << "-";
}
cout << endl;
}
float ratahitung (float p,float q){
    float ratarata;
    ratarata = (p+q)/2;
    return ratarata;
}
float penentuan (float p){
   if (p>60)cout<<"Lulus"<<endl;
else 
    cout<<"tidak lulus"<<endl;
}



main()
{
int i,x,max;
string pemenang,loser;
long double min;
char nama[9][20];
char akhir[9];
int skor1[9],skor2[9],hasil[9];
cout<<"masukan jumlah data yang akan di proses = ";
cin >>x;

for(i=0;i<x;i++)
{
cout<<"Data Mahasiswa KE - "<<i+1<<endl;
cout<<"Nama Siswa : "; cin>>(nama [i]);
cout<<"Perolehan nilai ujian 1   : "; cin>>skor1[i] ;
cout<<"Perolehan nilai ujian 2   : "; cin>>skor2[i] ;
hasil[i] = (skor1[i]+skor2[i])/2;

cout<<endl;
}
system("cls");
cout<< "TABEL PEROLEHAN NILAI"<<endl;
cout<< "UJIAN"<<endl;
cout<<endl;


garis();
{
cout<<"|  "<<setw(48)<<" Perolehan Nilai"<<endl;
garis();
cout<<"|  "<<setiosflags(ios::left)<<setw(20)<<"nama";
cout<<" | "<<setw(8)<<"  Ujian 1"<<setw(5)<<""<<setw(5)<<"|"<<setw(5)<<"Ujian 2"<<setw(4)<<""<<setw(5)<<"|"<<setw(5)<<"Rata Rata"<<""<<setw(5)<<"|"<<setw(5)<<"Hasil"<<endl;
}
garis();


for(i=0;i<x;i++)
{
cout<<"|  "<<setiosflags(ios::left)<<setw(20)<<nama[i];
cout<<setw(8)<<" | "<<setw(5)<<skor1[i]<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<skor2[i]<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<ratahitung(skor1[i],skor2[i])<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<penentuan(ratahitung(skor1[i],skor2[i]))<<setw(5)<< " ";
{
garis();
}
}
{
max=0;

 for (int i=0;i<x;i++)
        {
            if (hasil[i]>max){
            	
            max=hasil[i];
            pemenang = nama[i];
            
        }
        }
cout<<"nilai tertinggi = " <<max<<" Dengan Pemenang Ialah .. " <<pemenang<<endl;


}
{
min=999999999;
for (int i=0;i<x;i++)
	{
if (hasil[i]<min)
            min=hasil[i];
            loser=nama[i];
            
	}
	cout<<endl;
cout<<"nilai terendah = " <<min<<endl;

}
}

