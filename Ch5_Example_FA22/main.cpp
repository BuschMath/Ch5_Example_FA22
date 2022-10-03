#include <iostream>

using namespace std;

int main()
{
	bool x, y;
	int m, n;

	x = true;
	y = false;
	n = 1;

	cout << "Enter 1 if you want the statement to be true: ";
	cin >> m;
	cout << endl;

	if ((x && y) || (m == n))
	{
		cout << "The statement is true.\n";
		cout << "Next line.\n";
	}
	else
		cout << "The statement is false.\n";

	return 0;
}