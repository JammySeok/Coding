#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() 
{
    string s;
    getline(cin, s);

    
    string result, temp;
    deque<string> dq;

    for(int i = 0; i <= s.length(); i++) {
        if(i == s.length() || s[i] == ' ') {
            if(!temp.empty()) {
                dq.push_front(temp);
                temp = "";
            }
        } else {
            temp += s[i];
        }
    }

    for(int i = 0; i < dq.size(); i++) {
        result += dq[i];
        if(i != dq.size() - 1) result += " "; 
    }
    
    cout << result;
    
    return 0;
}