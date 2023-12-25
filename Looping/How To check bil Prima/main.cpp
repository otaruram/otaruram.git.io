#include <iostream>

using namespace std;

int main()


{
    int n = 7;
    int faktor = 0;
    for(int i = 1; i <= n; i++){
            if ( n % i == 0)
                faktor++;
    }
    if( faktor == 2)
        cout << "Bil n prima"<< endl;
    else
    cout << "Bil n tidak prima" << endl;
    return 0;
}
