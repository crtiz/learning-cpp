#include<iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    int numbers[3][4] = {
                        {0,1,2,3},
                        {4,5,6,7},
                        {8,9,10,11}
    };
    //cout << numbers[2][3];

    for (int row = 0; row < 3; row++) {
        for(int column = 0; column < 4; column++) {
            cout << numbers[row][column] << "  ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}