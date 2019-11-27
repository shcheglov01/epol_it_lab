#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n = 9, m = 0;
	string res(9, '0');
	string *mass1 = new string[n];
	cout << "Enter the first array: " << endl;
	for (int i = 0; i < n; i++)
		cin >> mass1[i];
	cout << "Enter the size of the second array: " << endl;
	cin >> m;
	string *mass2 = new string[m];
	cout << "Enter the second array: " << endl;
	for (int i = 0; i < m; i++)
		cin >> mass2[i];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (mass1[i] == mass2[j])
				res[i] = '1';
	cout << "Resulting string: " << res << endl;
	delete[]mass1;
	delete[]mass2;
	return 0;
}