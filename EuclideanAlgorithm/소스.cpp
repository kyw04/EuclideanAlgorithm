#include <iostream>
#include <algorithm>
using namespace std;

// 유클리드 호제법 
int get_gcd(int u, int v)
{
	//if (u < v)
	//	swap(u, v);
	if (v <= 0)
		return u;
	//return get_gcd(u - v, u);
	return get_gcd(v, u % v);
}

int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	cout << get_gcd(n1, n2);

	return 0;
}