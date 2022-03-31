#include <iostream>  
#include<conio.h>
#include <ctime>
using namespace std;

void binarySearch(int arr[], int num, int tgt)
{
	clock_t time_req;
	// Using pow function
	time_req = clock();
	int low = 0, high = num - 1;

	while (low <= high)
	{

		int mid = (low + high) / 2;
		if (tgt == arr[mid])
		{
			cout << " Element is found at position " << mid + 1;
			time_req = clock() - time_req;
			cout << "Without using pow function, it took " << (float)time_req / CLOCKS_PER_SEC << " seconds" << endl;
			return;
		}
		else if (tgt < arr[mid])
		{
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	cout << " Element is not found in the array";
	time_req = clock() - time_req;
	cout << "Without using pow function, it took " << (float)time_req / CLOCKS_PER_SEC << " seconds" << endl;
}
int main()
{
	

	int arr[] = { 5, 10, 15, 20, 25, 30, 37, 40 };
	int tgt = 25;
	int num = sizeof(arr) / sizeof(arr[0]);

	binarySearch(arr, num, tgt);

	_getch();
	return 0;
}