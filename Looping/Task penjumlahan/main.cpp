#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for(int i = 1; i <= 30; i++){
            cout << i << endl;
            sum += i;
    }
    cout << "sum=" << sum << endl;
    return 0;
}
