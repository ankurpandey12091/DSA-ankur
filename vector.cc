#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9};

    int size = arr.size();

    arr.push_back(10);   // ❌ removed 'int'
    int newsize = arr.size();

    arr.pop_back();      // ❌ removed 'int'

    cout << "size of array is: " << size << endl;
    cout << "new size of array is: " << newsize << endl;

    cout << "array after pop back is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}