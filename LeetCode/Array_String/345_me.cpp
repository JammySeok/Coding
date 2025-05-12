#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    vector<char> temp;

    for (int i = 0; i < s.length(); i++) { 
        for (int j = 0; j < vowels.size(); j++) {
            if (s[i] == vowels[j]) {
                temp.push_back(s[i]);
                break;
            }
        }
    }

    int k = temp.size() - 1;
    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < vowels.size(); j++) {
            if (s[i] == vowels[j]) {
                s[i] = temp[k--];
                if (k < 0) break;  
                break;
            }
        }
    }

    cout << s;

    return 0;
}
