#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter no. of rows and coloumn in array: ";
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Enter "<<i<<"th row "<<j<<"th column value :";
            cin >> a[i][j];
        }
    }

    int rowStart = 0, rowEnd = n - 1, colStart = 0, colEnd = m - 1;

    while (rowStart <= rowEnd && colStart <= colEnd)
    {
        // for row start
        for (int col = colStart; col <= colEnd; col++)
        {
            cout << a[rowStart][col]<<" ";
        }
        rowStart++;

        // for colounm End
        for (int row = rowStart; row <= rowEnd; row++)
        {
            cout << a[row][colEnd]<<" ";
        }
        colEnd--;


        // for row End
        for (int col = colEnd; col >= colStart; col--)
        {
            cout << a[rowEnd][col]<<" ";
        }
        rowEnd--;

        // for col start
        for (int row = rowEnd; row >=rowStart;row++)
        {
            cout << a[row][colStart]<<" ";
        }
        colStart++;



    }

    return 0;
}