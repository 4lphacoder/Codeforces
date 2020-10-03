#include <iostream>
#include <string>

using namespace std;
int 
main(int argc, char* argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string strbuff;
    int cnt = 0;
    cin >> strbuff;
    for(char ch : strbuff )
        if(ch == '7' || ch == '4') 
            cnt ++ ;

    string strcnt = to_string(cnt);
    for(char ch : strcnt)
        if(ch != '4' && ch != '7') {
            cout << "NO" << endl;
            return 0;
        }
        
    cout << "YES" << endl;
    return 0;
}