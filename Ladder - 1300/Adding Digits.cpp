#include <iostream>
#include <string>

using namespace std;
int 
main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    // TAKING INPUT FROM CONSOLE
    int a, b, n;
    cin >> a >> b >> n;
    string strbuff = to_string(a);

    // PROCESSING OUTPUT
    while(n--) {
        string prev = strbuff;
        // IF ALREADY A MULTIPLE OF B, JUST APPENDING 0
        if(a % b == 0)
            strbuff.push_back('0');
        else 
        for(int iter = 0 ; iter <= 9 ; iter ++) {
            int val = a*10 + iter;
            if(val % b == 0) {
                a = val;
                strbuff = to_string(a);
                break;
            }
        }

        // IF NO SOLUTION EXISTS
        if(strbuff == prev) {
            cout << -1 << endl;
            return 0;
        }
    }
    // DISPLAYING OUTPU
    cout << strbuff << endl;
    return 0;
}