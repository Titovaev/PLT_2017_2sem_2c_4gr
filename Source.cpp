#include <iostream>
#include <ctime>
#include <cmath>
#include <algorithm>

using namespace std;

const int MAXN = 100;

int MS[MAXN][MAXN], Mdist[MAXN][MAXN];

int main()
{
	int n;
	cin >> n; 

	for (int i = 0; i < n; i++)  //матрица смежности
	{
		for (int j = 0; j < n; j++)
		{
			int x;
			cin >> x;
			MS[i][j] = Mdist[i][j] = x;

		}
	}

	cout << endl;

	for (int k = 0; k < n; k++) // алгоритм флойда
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				Mdist[i][j] = min(Mdist[i][j], Mdist[i][k] + Mdist[k][j]);

	for (int i = 0; i < n; i++) // вывод ответа
	{
		for (int j = 0; j < n; j++)
		{
			cout << Mdist[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return (0);
}