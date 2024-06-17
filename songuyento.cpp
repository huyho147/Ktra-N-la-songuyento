#include <iostream>
using namespace std;
int main()
{
	int n;
	bool SNT = true;
	cout << "Kiem tra N la so nguyen to!!!\n";
	cout << "Nhap n: ";
	cin >> n;
	if (n < 2)
		SNT = false;
	else for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			SNT = false;
		break;
	}
	if (SNT)
		cout << n << " la so nguyen to";
	else cout << n << " ko la so nguyen to";
	
	
	
}