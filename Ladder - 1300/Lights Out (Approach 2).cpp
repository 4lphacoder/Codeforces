#include <iostream>

using namespace std;
int 
main(int argc, char* argv[]) {
    // TAKING INPUT FROM CONSOLE
    int m = 3, n = 3;
    int mat[m][n];
    for(int i = 0 ; i < m ; i++)
        for(int j = 0 ; j < n ; j++)
            cin >> mat[i][j];

    // CREATING STATE MATRIX, THAT HOLDS WHETHER LIGHTS ARE ON/OFF
    bool state[m][n];
    int dir[5][2] = { {0, 0}, {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
    fill_n(&state[0][0], m*n , 1);

    // FOR ODD VALUES IN MAT WE TOGGLE THE CORRESPONDING ELEMENT AND NEIGHBOURING ELEMENT
    // IN STATE MATRIX
    for(int i = 0 ; i < m ; i++)
        for(int j = 0 ; j < n ; j++) 
            if(mat[i][j] % 2 != 0)
            for(int idx = 0 ; idx < 5 ; idx++) {
                int r = i + dir[idx][0];
                int c = j + dir[idx][1];

                if(r >=0 && r < m && c >=0 && c < n)
                    state[r][c] = !state[r][c];
            }

    for(int i = 0 ; i < m ; i++) {
        for(int j = 0 ; j < n ; j++)
            cout << state[i][j];
        cout << endl;
    }
    return 0;
}