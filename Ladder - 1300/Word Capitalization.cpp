#include <iostream>
#include <cctype>

using namespace std;
int 
main(int argc, char* argv[]) {
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    string strbuff;
    cin >> strbuff;

    if(strbuff.size() > 0)
    strbuff[0] = toupper(strbuff[0]);
    cout << strbuff << endl;
    return 0;
}