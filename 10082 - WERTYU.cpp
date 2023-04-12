#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string convert = "/`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,.";
    string str, ans;
    while(getline(cin, str)){
        if(str == "0") break;
        for(size_t i = 0; i < str.size(); i++){
            if(str.at(i) == ' ') ans.push_back(' ');
            else
                ans.push_back(toupper(convert.at(keyboard.find(tolower(str.at(i))))));
        }
        cout << ans << '\n';
        ans.clear();
    }
    return 0;
}