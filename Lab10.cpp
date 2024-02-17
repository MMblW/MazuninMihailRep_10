#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, size = 10;
    string *arr = new string[size]; // arr = array
    string *barr = new string[size+1]; // barr = big array
    string alph[size] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
    for (int i = 0; i < size; i++)
    {
        arr[i] = alph[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cin >> n;
    for (int i = 0; i < size+1; i++)
    {
        if (i != size)
        {
            barr[i] = arr[i];
        }
        else
        {
            barr[i] = arr[n];
        }
    }
    for (int i = 0; i < size+1; i++)
    {
        cout << barr[i] << " ";
    }
    delete[] arr;
    return 0;
}
