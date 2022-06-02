#include <iostream>
using namespace std;

int main()
{
    int cases, inp;
    cin>> cases;
 for (int i=0; i<cases; i++)
    {
        cin>>inp;
        if (inp%2==0)
        {
            cout<< inp<< " is even"<< endl;
        }
        else 
        { 
            cout<< inp << " is odd" << endl;
        }
    }
}