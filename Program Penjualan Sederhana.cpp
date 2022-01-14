#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<stdio.h>

/*Nama = Hiras Parasian Doloksaribu
NIM = 1881011
Teknik Informatika
*/
using namespace std;

float total (float p,float q){
    float total;
    total = p*q;
    return total;
}
float diskon (float p){
    float diskon;
   if (p>50000)diskon = p*10/100;
   else  diskon =0;
   return diskon ;
}
float totalbyr (float p,float q){
    float totalbyr;
    totalbyr = p-q;
    return totalbyr;
}


 main()
{
int i,x=7,max;
string nama [7]={"buku","pulpen","pensil","mouse","keyboard","kertas","botol"};
float harga[7]={4000,5000,3000,40000,70000,3000,10000};
float jumlah[7]={4,6,8,9,1,5,7};

{
cout<<"|  "<<setw(48)<<" Tabel Belanjaan "<<endl;
cout<<"|  "<<setiosflags(ios::left)<<setw(20)<<"nama";
cout<<setw(8)<<" | "<<setw(5)<<"harga"<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<"jumlah"<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<"total"<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<"Diskon"<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<"total Bayar"<<setw(5)<< " "<<endl;
}

for(i=0;i<x;i++){
cout<<"|  "<<setiosflags(ios::left)<<setw(20)<<nama[i];
cout<<setw(8)<<" | "<<setw(5)<<harga[i]<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<jumlah[i]<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<total(harga[i],jumlah[i])<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<diskon(total(harga[i],jumlah[i]))<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<totalbyr(total(harga[i],jumlah[i]),diskon(total(harga[i],jumlah[i])))<<setw(5)<< " ";
cout<<endl;
}
cout<<endl;
cout<<endl;
cout << " Setelah Di Sorting ";
string swap1,swap2,swap3,swap4;
float tkr1,tkr2,tkr3,tkr4;
float sw1,sw2,sw3,sw4;
swap1 = nama[0];
nama [0] = nama [6];
nama[6]=swap1;
tkr1 = harga[0];
harga [0] = harga [6];
harga[6]=tkr1;
sw1 = jumlah[0];
jumlah [0] = jumlah [6];
jumlah[6]=sw1;


swap2 = nama[1];
nama[1]=nama[6];
nama[6]=swap2;
tkr2 = harga[1];
harga [1] = harga [6];
harga[6]=tkr2;
sw2 = jumlah[1];
jumlah[1]=jumlah[6];
jumlah[6]=sw2;

swap3 = nama[2];
nama[2]=nama[5];
nama[5]=swap3;
tkr3 = harga[2];
harga [2] = harga [5];
harga[5]=tkr3;
sw3 = jumlah[2];
jumlah[2]=jumlah[5];
jumlah[5]=sw3;

swap4 = nama [3];
nama[3]=nama[4];
nama[4]=swap4 ;
tkr4 = harga[3];
harga [3] = harga [4];
harga[4]=tkr4;
sw4 = jumlah [3];
jumlah[3]=jumlah[4];
jumlah[4]=sw4 ;
cout<<endl;
cout<<endl;
cout<<endl;
{
cout<<"|  "<<setw(48)<<" Tabel Belanjaan "<<endl;
cout<<"|  "<<setiosflags(ios::left)<<setw(20)<<"nama";
cout<<setw(8)<<" | "<<setw(5)<<"harga"<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<"jumlah"<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<"total"<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<"Diskon"<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<"total Bayar"<<setw(5)<< " "<<endl;
}
for(i=0;i<x;i++){
cout<<"|  "<<setiosflags(ios::left)<<setw(20)<<nama[i];
cout<<setw(8)<<" | "<<setw(5)<<harga[i]<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<jumlah[i]<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<total(harga[i],jumlah[i])<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<diskon(total(harga[i],jumlah[i]))<<setw(5)<< " ";
cout<<setw(8)<<" | "<<setw(5)<<totalbyr(total(harga[i],jumlah[i]),diskon(total(harga[i],jumlah[i])))<<setw(5)<< " ";
cout<<endl;
}
}

/*Nama = Hiras Parasian Doloksaribu
NIM = 1881011
Teknik Informatika
*/

