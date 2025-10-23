#include <iostream>
using namespace std;


int main ()
{
    int n[5];
    int low,a;


    cout <<"Enter five numbers: ";
    for (a=0; a<5; a++)
    {
        cin>>n[a];
    }
    low = n[0];
    for (a=0; a<5; a++)
    {
        if (low>n[a])
        low = n[a];
    }
    cout << "The lowest is: " << low;
    cout << endl;
    cout << "Their difference from the lowest are: " << endl;
    for (a=0; a<5; a++)
      {
        cout << n[a] <<" - " << low << " = " << (n[a]-low) << endl;
      }
}
