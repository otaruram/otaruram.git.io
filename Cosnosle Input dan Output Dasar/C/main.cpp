#include <iostream>

using namespace std;

int main()
{
    //nilai
    /*
    85 - 100 : A
    70 - 84 : B
    60 - 69 : C
    < 60 : D
    */
    int nilai = 85;
    if( nilai >= 85 && nilai <= 100)
        cout << "A" << endl;
    else if ( nilai >= 70 && nilai <= 84)
        cout << "B" << endl;
    else if ( nilai >= 60 && nilai <= 69)
            cout << "C" << endl;
    else
        cout << "D" << endl;

    return 0;
}
