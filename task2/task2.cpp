#include <iostream>
#include <chrono>
#include <vector>

using namespace std;

int main()
{
	vector<int> myArr;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int temp[31];
	int cipher = 0;
	int min = 0, max = 0;
	long long sum = 0;
	srand(time(NULL));
	for (int j = 0; j < 100; j++)
	{
		for (int i = 0; i < 31; i++)
		{
			c = rand() % 2;
			if (c == 1)
			{
				temp[i] = 1 << i;
			}
			else if (c == 0)
			{
				temp[i] = 0;
			}
			cipher = cipher + temp[i];
			if (i == 30)
			{
				d = rand() % 2;
				if (d == 0)
				{
					cipher *= -1;
				}
			}
		}
		myArr.push_back(cipher);
	}
	for (int i = 0; i < size(myArr); i++)
	{
		cout << "MyCipher: " << myArr[i] << endl;
		if (min > myArr[i])
		{
			min = myArr[i];
		}
		if (max < myArr[i])
		{
			max = myArr[i];
		}
		sum = sum + myArr[i];
	}
	cout << "Sum:" << sum / 100 << endl;
	cout << "Min:" << min << " " << "Max:" << max << endl;
	system("pause");
	return 0;
}