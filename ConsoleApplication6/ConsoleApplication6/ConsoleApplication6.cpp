#include <iostream>

using namespace std;
int d = 0;
int n, P[21], H[21], R[41], L[41];
void queen(int k) 
{
	int i, j;
	for (i = 1;i <= n;i++)
		if (H[i] == 0 && R[i - k + 21] == 0 && L[i + k] == 0)
		{
			P[k] = i; H[i] = 1; R[i - k + 21] = 1; L[i + k] = 1;
			if (k == n) 
			{
				for (j = 1;j <= n;j++) {
					cout << P[j] << " ";
				}
				cout << "\n";
				d++;

			}
			else queen(k + 1);
			H[i] = 0; R[i - k + 21] = 0; L[i + k] = 0;
		}
}
int main()
{
	int i;
	cin >>n ;
	for (i = 1;i <= n;i++) H[i] = 0;
	for (i = 2;i <= n + n;i++)
	{
		R[i] = 0; L[i] = 0;
	}
	queen(1);
	cout << d;
}