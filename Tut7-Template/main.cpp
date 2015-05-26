#include <iostream>
#include <string>
#include <cmath>

using namespace std;

template <typename ADD>
void sort(ADD arrAny [], int Num)
{
	ADD Temp;
	for (int i = 0; i < Num; ++i)
	{
		for (int j = i + 1; j < Num; ++j)
		{
			if (arrAny[i]<arrAny[j])
			{
				Temp = arrAny[i];
				arrAny[i] = arrAny[j];
				arrAny[j] = Temp;
			}
		}
	}

	for (int i = 0; i < Num; ++i)
	{
		cout << arrAny[i] << endl;
	}

	cout << endl << endl;
}

int main()
{
	int arrNum[5] = { 2, 7, 1, 9, 0 };
	float arrFloat[5] = { 3.5, 4.6, 1.3, 10.4, 13.5 };
	string arrName[5] = { "Matsobane", "Thulani", "Tracy", "Mlu", "Lungelo" };

	sort(arrNum, 5);
	sort(arrFloat, 5);
	sort(arrName, 5);

	system("pause");
	return 0;
	


}
