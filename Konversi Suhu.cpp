#include <iostream>
using namespace std;
int main()
{
    float celcius , f , r ;
    cout << " masukan suhu dalam celcius " <<endl;
    cin>> celcius ;
    
    f = (celcius*9/5)+32;
    r = celcius*4/5;
    cout<< " suhu dalam fahrenheit = " << f <<endl;
    cout<< " suhu dalam reamur = " << r <<endl;
    
    return 0; 

}
