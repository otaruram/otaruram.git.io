#include <iostream>

using namespace std;

int main()
{
    int umur = 27;
    if( umur < 17)
        cout << "anak-anak" << endl;
    else if ( umur < 27)
        cout << "remaja" << endl;
    else
        cout << "dewasa" << endl;
    return 0;
}
