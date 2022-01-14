#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<stdio.h>
main()
{
int i;
char nama[5][20];
float skor1[5],skor2[5],hasil[5];

for(i=0;i<3;i++)
{
cout<<"Data Ke - "<<i+1<<endl;
cout<<"Nama Siswa : "; cin>>(nama [i]);
cout<<"Nilai MID   : "; cin>>skor1[i] ;
cout<<"Nilai FINAL : "; cin>>skor2[i] ;
hasil[i] = ((skor1[i]+skor2[i])/2);
cout<<endl;
}
system("cls");
cout<<"---------------------------------------------------------------------------------------"<<endl;
cout<<setiosflags(ios::left)<<setw(20)<<"nama";
cout<<" | "<<setw(8)<<"   MID"<<setw(5)<< " "<<setw(5)<<" | "<<setw(5)<<" FINAL"<<setw(5)<< " "<<setw(5)<<" | "<<setw(5)<<"Rata Rata"<<endl;
cout<<"---------------------------------------------------------------------------------------"<<endl;


for(i=0;i<3;i++)
{
cout<<setiosflags(ios::left)<<setw(20)<<nama[i];
cout<<setw(8)<<" | "<<setw(3)<<skor1[i]<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(3)<<skor2[i]<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(3)<<hasil[i]<<setw(5)<< " "<<endl;
cout<<"---------------------------------------------------------------------------------------"<<endl;
}


}