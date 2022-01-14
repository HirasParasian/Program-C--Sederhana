#include<iostream>
using namespace std;
int main()
{

	cout<<"$               Nama     : Hiras Parasian Doloksaribu                     $"<<endl;
	cout<<"$               Jurrusan : TI                                             $"<<endl; 
	cout<<"$               NIM      : 1881011                                        $"<<endl; 

  int x,z=0;
  cout<<"masukan banyak bilangan yang akan di output 1 sampai ... = ";
  cin>>x;
  cout<<"  "<<endl;
  cout<<"Hasilnya Ada Dibawah ya .........."<<endl;
  
cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
  for(int i=1;i<x;i++)
  	{
      for(int y=1;y<=i;y++)
        {
           if(i%y==0){z++;}
        }
      if(z==2)
      cout<<i<<" ";
      z=0;
    }
    cout<<" "<<endl;
cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
    return 0;
}



