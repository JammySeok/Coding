#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int len, extraCandies;
    cin >> len;
    vector<int> candies(len);
    
    for(int i = 0; i < len; i++) {
        cin >> candies[i];
    }
    cin >> extraCandies;
    

    vector<bool> result(candies.size(), false);
    int size = candies.size(); 

    int max = candies[0];
    for (int i = 0; i < size-1; i++) {
        if(max < candies[i+1])
            max = candies[i+1];
    }
    
    for(int i = 0; i < size; i++) {
        if(candies[i] + extraCandies >= max)
            result[i] = true;
        else 
            result[i] = false;
    }
    
    for(int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
