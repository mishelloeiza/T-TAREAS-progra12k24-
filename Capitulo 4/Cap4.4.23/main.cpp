#include <iostream>
// Mishel loeiza 9959-23-3457
// Problema de los if sueltos
using namespace std;

int main()
{
   const int x=11;
   const int y=9;
   /*
   if( x < 10 )
    {
    cout <<"*****"<<endl ;
    }
    else
    {
    cout <<"#####"<<endl ;
    cout <<"$$$$$"<<endl ;
    }
*/
    if( x < 10 )
    {
        if( y > 10 )
        {
        cout <<"*****"<<endl ;
        }
    }
    else
    {
    cout <<"#####"<<endl ;
    cout <<"$$$$$"<<endl ;
    }

}
