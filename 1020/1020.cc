#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;
struct mooncacke
{
    double storage = 0;
    double t_price = 0;
    double price = 0;
};

void fsort(vector<mooncacke> &vmc)
{
    bool sorted = false;
    auto beg = vmc.begin(), end = vmc.end();
    while (!sorted)
    {
        sorted = true;
        for (auto i = beg + 1; i < end; i++)
        {
            if (i->price > (i - 1)->price)
            {
                swap(*i, *(i - 1));
                sorted = false;
            }
        }
    }
}

int main()
{
    int sort, need;
    double revenue = 0.0;
    //input
    cin >> sort >> need;
    vector<mooncacke> vmc(sort);
    for (auto &mc : vmc)
        cin >> mc.storage;
    for (auto &mc : vmc)
        cin >> mc.t_price;
    for (auto &mc : vmc)
        if (mc.storage > 0E-6)
            mc.price = mc.t_price / mc.storage;

    if (!vmc.empty())
    {
        //sort
        fsort(vmc);
        int cur = 0, i = 0;
        while (cur < need)
        {
            if (i < sort && vmc[i].storage >= (need - cur))
            {
                revenue += vmc[i].price * (need - cur);
                cur = need;
            }
            else
            {
                if (i < sort)
                {
                    cur += vmc[i].storage;
                    revenue += vmc[i].t_price;
                    ++i;
                }
                else
                    break;
            }
        }
    }
    //output
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << revenue;
    return 0;
}