#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int len, n;
    cin >> len;
    vector<int> flowerbed(len);

    for(int i = 0; i < len; i++) {
        cin >> flowerbed[i];
    }
    cin >> n;


    bool result;
    int size = flowerbed.size();

    for(int i = 0; i < size; i++) {
        if(flowerbed[i] == 1) continue;
        if(i < size-1 && flowerbed[i+1] == 1) continue;
        if(i != 0 && flowerbed[i-1] == 1) continue;

        flowerbed[i] = 1;
        n--;
    }

    if(n > 0) result = false;
    else result = true;
        
    for(int i = 0; i < size; i++) {
        cout << flowerbed[i];
    }
    cout << endl << n << endl;

    cout << result;

    return 0;
}