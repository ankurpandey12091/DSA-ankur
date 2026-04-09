#include<iostream>
using namespace std;

int main()
{
    int arr[]={0,1,0,0,0,0,0,1,1,1,1};
    
    int size=11;
    int numzero=0;
    int numone=0;

    for (int i=0; i<size; i++)
    {
        if (arr[i] == 0)
        {
            numzero++;   // count zero
        }
        else if (arr[i] == 1)
        {
            numone++;    // count one
        }
    }

    cout << "Number of zero: " << numzero << endl;
    cout << "Number of one: " << numone << endl;

    return 0;
}