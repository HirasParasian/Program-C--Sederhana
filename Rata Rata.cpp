	#include <iostream>
	using namespace std;
	int main()
	{
		int x=1;
		int y;
		int jum=0; 
		float hasil,z;
		
		cout<<"Banyak bilangan yang akan dicari rata ratanya";
		cin>>y;
		do 
		{
			cout<<"Masukkan bilangan ke - "<<x<<endl;
			cin>>z;
			jum+=z;
				
			x++;
			
		}while(x<=y);
    cout<<"jumlah="<<jum<<endl;
	hasil = jum/y;
	cout<<" Rata Rata= " << hasil <<endl;;
	
	return 0;
	}