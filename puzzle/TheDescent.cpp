#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    // game loop
    while (1) {
        int index = 0;
        int currentHighest = 0;
        for (int i = 0; i < 8; i++) {
            int mountainH; // represents the height of one mountain, from 9 to 0.
            cin >> mountainH; cin.ignore();
            if(mountainH > currentHighest){
                index = i;
                currentHighest = mountainH;
            }
        }

        cout << index << endl; // The number of the mountain to fire on.
    }
}
