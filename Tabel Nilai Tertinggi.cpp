#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<stdio.h>
using namespace std;
main()
{
int i,x,max;
string pemenang,loser;
long double min;
char nama[5][20];
int skor1[5],skor2[5],hasil[5];
cout<<"masukan jumlah data yang akan di proses = ";
cin >>x;

for(i=0;i<x;i++)
{
cout<<"Data Calon Ketua BEM UNAI 2018 Nomor urut - "<<i+1<<endl;
cout<<"Nama Siswa : "; cin>>(nama [i]);
cout<<"Perolehan suara dari kaum Laki Laki   : "; cin>>skor1[i] ;
cout<<"Perolehan suara dari kaum Perempuan   : "; cin>>skor2[i] ;
hasil[i] = skor1[i]+skor2[i];
cout<<endl;
}
system("cls");
cout<< "TABEL PEROLEHAN SUARA"<<endl;
cout<< "CALON KUTUA BEM UNAI"<<endl;
cout<<endl;

cout<<"---------------------------------------------------------------------------------------"<<endl;
cout<<"|  "<<setw(48)<<" Perolehan Suara"<<endl;
cout<<"|  "<<setw(21)<<" "<<"-------------------------------------"<<endl;
cout<<"|  "<<setiosflags(ios::left)<<setw(20)<<"nama";
cout<<" | "<<setw(8)<<"  Laki Laki"<<setw(5)<<""<<setw(5)<<"|"<<setw(5)<<"Perempuan"<<setw(4)<<""<<setw(5)<<"|"<<setw(5)<<"Total"<<endl;
cout<<"---------------------------------------------------------------------------------------"<<endl;


for(i=0;i<x;i++)
{
cout<<"|  "<<setiosflags(ios::left)<<setw(20)<<nama[i];
cout<<setw(8)<<" | "<<setw(5)<<skor1[i]<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<skor2[i]<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<hasil[i]<<setw(5)<< " "<<endl;
cout<<"---------------------------------------------------------------------------------------"<<endl;
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
cout<<"skor tertinggi = " <<max<<" Dengan Pemenang Ialah .. " <<pemenang<<endl;


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
cout<<"skor terendah = " <<min<<endl;

}
}

