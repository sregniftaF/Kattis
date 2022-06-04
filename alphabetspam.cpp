/*Note to self (Learning pt)
obstacles faced 
- converting the string into char format
- how c++ reads the char in ASCII format

learning pt
- can call out the char's ACSII number using int(char)
- can compare lowercase/ uppercase just by >='a' && <='z' 
*/
// output= _:lower:upper:symbol
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int wh=0,low=0,up=0,sym=0;
    float total;
    string s;
    cin >> s;
   total = s.size();
    for (char i: s){
        if ( int(i) == 95)
            wh++;
        else{
            if ( int(i)>=97 && int (i)<=122 )
            low++;
            else if ( 90>=int(i) && int(i)>=65)
            up++;
            else
            sym++;
        }
    }
    //cout<<wh<<endl<<low <<endl <<up <<endl<<sym<<endl;
    cout<< wh/total << endl << low/total << endl << up/total << endl <<sym/total << endl;
   // cout << total<<" " <<wh+up+low+sym;
}