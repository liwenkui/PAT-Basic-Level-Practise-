#include <vector>
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int line = 0;
    vector<string> pat;
    cin >> line;
    cin.clear();
    string in;
    while (line > 0)
    {
	cin >> in;
	pat.push_back(in);
	--line;
    }
    for (auto v : pat)
    {
	vector<int> cnt(3);
	int i = 0;
	bool flag = true;
	for (auto c : v)
	{
	    if (c == 'P' || c == 'A' || c == 'T')
	    {
		if (c == 'P')
		{
		    if (i == 0)
			++i;
		    else
			flag = false;
			break;
		}
		if (c == 'T')
		{
		    if (i == 1)
			++i;
		    else
			flag = false;
			break;
		}
		if (c == 'A')
		    ++cnt[i];
	    }
	    else
		flag = false;
		break;
	}
	if (flag == true && i == 2 && cnt[1] > 0 && cnt[0] * cnt[1] == cnt[2])
	    cout << "YES" << endl;
	else
	    cout << "NO" << endl;
    }
    return 0;
}
