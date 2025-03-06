#include <iostream>

using namespace std;

void wave_print(int arr[][4])
{
    int row = 4;
    int col = 4;
    int j = 0;
    int wave = 0;
    while (j < col)
    {
        if (wave == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j] << " ";
            }
            wave = 1;
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
            wave = 0;
        }
        j++;
        cout <<" "<<endl;
    }
}

int main()
{
    int arr[4][4] = {1, 2, 4, 5, 3, 6, 8, 10, 11, 12, 13, 15, 16, 14, 9, 7};

    wave_print(arr);
}