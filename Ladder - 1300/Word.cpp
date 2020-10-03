#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;
int
main(int argc, char* argv[]) {
    string strbuff;
    cin >> strbuff;

    int uppercnt = 0, lowercnt = 0;
    for(char ch : strbuff)
        if(isupper(ch)) uppercnt ++;
        else lowercnt ++;

    if(uppercnt <= lowercnt)  {
        for(int idx = 0 ; idx < strbuff.length(); idx++)
            strbuff[idx] = tolower(strbuff[idx]);
    }
        
    else 
        for(int idx = 0 ; idx < strbuff.length() ; idx++)
            strbuff[idx] = toupper(strbuff[idx]);
    cout << strbuff ;
    return 0;
}