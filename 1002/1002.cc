#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string nl = "0123456789";
    string in;
    cin >> in;
    vector<string> pinyin{"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    vector<int> ntotal;
    int total = 0;
    for (auto c : in)
    {
        auto beg = nl.begin();
        for (auto it = beg; it < nl.end(); it++)
        {
            if (c == *it)
                total += (it - beg);
        }
    }
    //output
    while (total != 0)
    {
        ntotal.insert(ntotal.begin(), (total % 10));
        total /= 10;
    }
    for (auto it = ntotal.begin(); it != ntotal.end(); it++)
    {
        cout << pinyin[*it];
        if (it != ntotal.end() - 1)
            cout << " ";
    }
    return 0;
}