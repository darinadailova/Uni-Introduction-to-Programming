#include <iostream>
using namespace std;

int main()
{
    int arr[23];
    int sum = 0;
    int count = 0;
    
    for (int i = 0; i < 23; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < 23; i++) {
        
        if (arr[i] > 0) {
            sum += arr[i];
        }
        else if (arr[i] < 0) {
            count += 1;
        }
    }

    cout << sum << endl;
    cout << count << endl;

    return 0;
}