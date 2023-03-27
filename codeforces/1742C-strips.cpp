#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);

    int t;
    string s[8];
    cin >> t;
    bool found = false, rowsame = true;
    for (int q = 0; q < t; q++)
    {
        cout << "\n";
        for (int r = 0; r < 8; r++)
        {
            cin >> s[r];
        }
        for (int r = 0; r < 8; r++)
        {
            if (s[r][0] == s[r][1] && s[r][1] == s[r][2] && s[r][2] == s[r][3] && s[r][3] == s[r][4] && s[r][4] == s[r][5] && s[r][5] == s[r][6] && s[r][6] == s[r][7] && s[r][7] == s[r][8])
            {
                cout << s[r][0]<<"\n";
                break;
            }
        }
        for (int r = 0; r < 8; r++)
        {
            if (s[0][r] == s[1][r] && s[1][r] == s[2][r] && s[2][r] == s[3][r] && s[3][r] == s[4][r] && s[4][r] == s[5][r] && s[5][r] == s[6][r] && s[6][r] == s[7][r] && s[7][r] == s[8][r])
            {
                cout << s[0][r]<<"\n";
                break;
            }
        }
    }
    return 0;
}