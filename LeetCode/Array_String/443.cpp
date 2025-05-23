#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    int len;
    cin >> len;

    vector<char> chars;
    for(int i = 0; i < len; i++) {
        char c;
        cin >> c;
        chars.push_back(c);
    }

    
    int n = chars.size();
    int write = 0;
    int left = 0;   

    for (int read = 0; read < n; ++read) {
        if (read == n - 1 || chars[read] != chars[read + 1]) {
            chars[write++] = chars[left]; 
            int count = read - left + 1;
            if (count > 1) {
                string cntStr = to_string(count);
                for (char c : cntStr) {
                    chars[write++] = c;
                }
            }
            left = read + 1;
        }
    }

    for(int i = 0; i < write; i++) {
        cout << chars[i];
    }

    return 0;
}