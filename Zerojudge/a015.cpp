#include <iostream>
using namespace std;
int main()
{
    int square[100][100];
    int row, column;
    while (cin>>row>>column)
    {
        for (int i = 0; i < column; i++)
        {
            for (int j = 0; j < row; j++)
            {
                cin>>square[i][j];
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout<<square[i][j]<<" ";
                cout<<endl;
            }
        }
    }
}