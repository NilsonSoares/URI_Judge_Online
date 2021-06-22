#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n = 3.14159;
    double raio;
    cin >> raio;
    double A = n*raio*raio;;
    cout << "A=" << setiosflags(ios::fixed)<< setprecision(4) << A << endl;
    return 0;
}
