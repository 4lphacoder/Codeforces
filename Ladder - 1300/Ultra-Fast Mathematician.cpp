#include <iostream>

using namespace std;
int 
main(int argc, char* argv[]) {
    // OPTIMISING THE INPUT-OUTPUT OPERATIONS
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // TAKING INPUT FROM CONSOLE
    string a, b,c ;
    cin >> a >> b;

    for(int idx = 0 ; idx < a.length() ; idx++)
        if(a.at(idx) == b.at(idx))
            c.push_back('0');
        else
            c.push_back('1');

    // DISPLAYING OUTPUT
    cout << c << endl;
    return 0;
}