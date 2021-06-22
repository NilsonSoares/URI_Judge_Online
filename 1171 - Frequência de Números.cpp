#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <int, int> nums;
    map <int, int>::iterator it;
    int n, aux;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> aux;
        nums[aux]++;
    }
    for(it = nums.begin(); it != nums.end(); it++)
    {
        cout << it->first << " aparece " << it->second << " vez(es)" << endl;
    }
    return 0;
}

