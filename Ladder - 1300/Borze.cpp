#include <iostream>

using namespace std;
int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string strbuff;
    cin >> strbuff;

    unsigned int pos = 0;
    string ans;
    while(pos < strbuff.size()) {
        if(strbuff.at(pos) == '.') { 
            ans.push_back('0');
            pos += 1;
        }
        else if(pos + 1 < strbuff.length() && strbuff.substr(pos, 2) == "-." ) {
            ans.push_back('1');
            pos += 2;
        }
        else {
            ans.push_back('2');
            pos += 2;
        }
    }

    cout << ans;
    return 0;
}