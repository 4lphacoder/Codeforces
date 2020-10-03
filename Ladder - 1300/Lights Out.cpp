#include <iostream>
#include <cstring>

using namespace std;
int 
main(int argc,char* argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // ATTACHING INPUT.TXT WITH STDIN
    // freopen("input.txt", "r", stdin);

    int mat[3][3];
    for(int i = 0 ; i < 3 ; i++) 
        for(int j = 0 ; j < 3 ; j++) {
            cin >> mat[i][j];
            mat[i][j] %= 2;
        }
    
    bool state[3][3];
    int dir[5][2] = { {-1, 0}, {0, 1}, {0, -1}, {1, 0}, {0, 0} };
    fill_n(&state[0][0], 9 , 1);
    
    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            if(mat[i][j] == 1) {
                mat[i][j] = 0;
                for(int idx = 0 ; idx < 5 ; idx++) {
                    int r = i + dir[idx][0];
                    int c = j + dir[idx][1];
                    if(r >= 0 && r < 3 && c >= 0 && c < 3) 
                        state[r][c] = !state[r][c];
                }
            }
        }
    }

    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 3 ; j++)
            cout << state[i][j];
        cout << "\n";
    }

    return 0;
}