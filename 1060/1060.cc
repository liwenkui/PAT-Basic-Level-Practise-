#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int day;
    vector<int> dis;
    cin >> day;
    int i;
    while ((cin >> i) && (i >= 0))
        dis.push_back(i);
    sort(dis.begin(), dis.end());
    int max = day;
    for (auto it = dis.rbegin(); it != dis.rend(); ++it)
    {
        auto back = it - dis.rbegin() + 1;
        if ((back >= *it))
        {
            max = back - 1;
            break;
        }
    }
    cout << max;
    return 0;
}