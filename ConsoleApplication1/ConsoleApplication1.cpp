//杭州电子科技大学 -1250

//斐波那契+高精度加法问题
#include<iostream>
#include<vector>
#include<string>
using namespace std;

string addstring(const string& a, const string& b)//高精度加法
{
	string result;
	int a_len = a.length(), b_len = b.length();
	int carry = 0;
	int aa = a_len - 1, bb = b_len - 1;
	while (aa >= 0 || bb >= 0||carry)//a、b的长度不为0或有进位时就继续
	{
		int sum = carry;
		if (aa >= 0)sum += a[aa] - '0';
		if (bb >= 0)sum += b[bb] - '0';
		aa -= 1; bb -= 1;
		carry = sum / 10;//记录下进位
		result += (sum % 10) + '0';
	} 
	reverse(result.begin(), result.end());//翻转
	return result;
}
string fibo(int n)
{
	 if (n < 4) {}
	vector<string> f(n);
	f[0] = f[1] = f[2] = f[3] = "1";
	for (int i = 4; i < n; i++)
	{
		f[i] = addstring(f[i - 1], addstring(f[i - 2], addstring(f[i - 3], f[i - 4])));
	}
	return f[n - 1];
}
int  main()
{
	int n;
	while (cin >> n)cout << fibo(n) << endl;
}
