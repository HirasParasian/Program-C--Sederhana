#include <iostream> 

using namespace std; 

int main()
{
	 int angka,satuan,puluhan;
    string A,B,C;
    
    cout << " Konversi Angka Menjadi Sepatah dua patah kata"<<endl;
    cout << " Input Angka 1 - 99 = " ;
    cin >> angka;
    satuan = angka % 10;
    puluhan = angka / 10;
    
    if (satuan==1)  B="Satu"  ; 
    if (satuan==2)  B="dua"  ; 
    if (satuan==3)  B="tiga"  ; 
    if (satuan==4)  B="empat"  ; 
    if (satuan==5)  B="lima"  ; 
    if (satuan==6)  B="enam"  ; 
    if (satuan==7)  B="tujuh"  ; 
    if (satuan==8)  B="delapan"  ; 
    if (satuan==9)  B="sembilan"  ; 
    if (puluhan==1)
	if (satuan==0)  B="sepuluh"  ; 
    if (puluhan==1)
	if (satuan==1)  B="sebelas"  ; 
    else if (puluhan==1)
	if(satuan<10)
	if(satuan>1) A="Belas";
    if (puluhan==2) {C="dua Puluh";
     cout<<C<<" ";}
    else if 
    	(puluhan==3){
	    	
	 C="tiga Puluh";
     cout<<C<<" ";}
    else if (puluhan==4){
    	
    C="empat Puluh";
     cout<<C<<" ";}
	else if (puluhan==5) {C="lima Puluh";
     cout<<C<<" ";}
	else if (puluhan==6) {C="enam Puluh";
	cout<<C<<" ";}
	else if (puluhan==7) {C="tujuh Puluh";
	cout<<C<<" ";}
	else if (puluhan==8) {C="delapan Puluh";
	cout<<C<<" ";}
	else if (puluhan==9) {C="sembilan Puluh";
	cout<<C<<" ";}
	
	cout<<B<<" "<<A<<endl;
	if (angka>99){
	cout <<"_ ett dah dibilang 1-99 aja _  "<<endl;
	cout <<" coba lagi "<<endl;
	}
}