// Given an unsorted array arr[] of size N, rotate it by D elements (counter clockwise).
#include<iostream>
using namespace std;

int main(void)
{
    int testcases, array_size, rotation_size;
    cin >> testcases;
    for(int i=0;i<testcases; i++)
    {
        cin >> array_size >> rotation_size;
        int array[array_size];
        for (int j = 0; j < array_size; j++)
            cin >> array[j];

        int rotated_array[array_size];
        for (int  j = 0; j < array_size; j++)
        {
            rotated_array[j] = array[(j + rotation_size) % array_size];
            cout<<rotated_array[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}