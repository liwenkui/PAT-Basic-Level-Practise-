#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int day;
    vector<int> dis;
    vector<int> edton;
    cin >> day;
    int i;
    while ((cin >> i) && (i >= 0))
        dis.push_back(i);
    sort(dis.begin(), dis.end());
    int max = -1;
    auto beg = dis.begin();
    for (auto it = beg; it != dis.end(); ++it)
    {
        auto back = dis.end() - it;
        if (back >= *it)
            max = *it;
    }

    cout << max;
    return 0;
}