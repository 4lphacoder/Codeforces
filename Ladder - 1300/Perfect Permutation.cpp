#include <iostream>

using namespace std;
int 
main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // TAKING INPUT FROM CONSOLE
    int n;
    cin >> n;
    // PROCESSING OUTPUT
    if( n % 2 == 0 ) 
        for(int iter = n ; iter >= 1; iter --)
            cout << iter << " ";
    else 
    cout << -1 << endl;
    return 0;
}