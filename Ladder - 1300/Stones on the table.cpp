#include <iostream>
#include <vector>

using namespace std;
int 
main(int argc, char* argv[]) {
    // DISABLING SYNC WITH C-STDIN/ STDOUT
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string strbuff;
    cin >> strbuff;

    // PROCESSING OUTPUT
    int i = 0, j = 1, cnt = 0;
    while(j < strbuff.size()) {
        if(strbuff[i] == strbuff[j]) {
            cnt += 1 ;
            j += 1 ;
        }
        else {
            i = j;
            j += 1;
        }
    }

    // DISPLAYING OUTPUT
    cout << cnt << endl;
    return 0;
}