#include <iostream>

using namespace std;

void wave_print(int arr[][4])
{
    int j = 0;
    cout << "the wave matrix print is ";
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << arr[j][i] << " ";
        }

        j = 0;
    }
}

int main()
{
    int arr[4][4] = {1,2,4,5,3,6,8,10,11,12,13,15,16,14,9,7};

    wave_print(arr);
}