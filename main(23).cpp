#include <iostream>

using namespace std;

int linearSearch(int a[], int len, int key);

int main() 
{
	int d[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
	
	cout << "the position of 90 is: " << linearSearch(d, 10, 90) << endl;
	cout << "the position of -5 is: " << linearSearch(d, 10, -5) << endl;
	
  return 0;
}

int linearSearch(int a[], int len, int key)
{
	//key = 90 position?
	for (int i = 0; i < len; i++)
	{
		if (a[i] == key)
		{
			return i;
		}
	}
	return -1;
}