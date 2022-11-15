#include <iostream>
using namespace std;
int main()
{
	int cnt,n,**array;
	double sredn;
	cout << "vvedite razmer massiva" << endl;
	cin >> n;
	sredn = 0.0;
	cnt = 0;
	//cozdanie massiva
	array = new int* [n];
	//cozdanie 2 izmereniya
	for (int i = 0; i < n; i++)
	{
		array[i] = new int[n];
	}
	//zapolnenie massiva +vivod
	cout << "sgeneririvanniy massiv :" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			array[i][j] = rand() % 10;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "nad verhney diagonalu" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (array[i][j] % 2 == 0)
			{
				cout << "*" <<" ";
				continue;
			}
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j <n; j++)
		{
			if (array[i][j] % 2 != 0)
			{
				sredn += array[i][j];
				cnt++;
			}
		}
	}
	cout << "crednee "<<sredn / cnt;
	return 0;
}