#include <iostream>
using namespace std;

int main ()
{
    int n[3][4];
    int r,c, search, occur = 0;

    cout << "Enter 12 numbers (feel free to repeat): ";
    for (r=0;r<3;r++)
    {
        for (c=0;c<4;c++)
        {
            cin >> n[r][c];
        }
    }
    cout << "Enter a number to search: ";
    cin >> search;

    for (r=0;r<3;r++)
    {
        for (c=0;c<4;c++)
        {
            if (search == n[r][c])
            occur++;
        }
    }

    cout << "Occurences: " << occur << endl;
}