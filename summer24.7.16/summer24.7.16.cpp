// 杭州电子科技大学 -1200

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int line;
	string s;
	while (cin >> line && line != 0)
	{
		cin >> s;
		for (int i = 0; i < line; i++)
		{
			int out = i;
			for (int j = 1; out < s.length() && j <= s.length() / line; j++)
			{
				cout << s[out];
				if (j % 2)out += 2 * line - 1 - (2 * i);
				else out += 1 + (2 * i);
			}
		}
		cout << endl;
	}
}
