#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if(a < b && a >=0 && b >=3 && b <= 96)
        cout << "crescente" << endl;
    else if(a > b && a >= 0 && b <= 96 && b >= 3)
        cout << "minguante" << endl;
    else if((a >= 0 && b <=2 && b >=0))
        cout << "nova" << endl;
    else if((a >= 0 && b <= 100 && b >= 97))
        cout << "cheia" << endl;
    return 0;
}

