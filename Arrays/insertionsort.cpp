#include <iostream>
using namespace std;
int main()
{
	int arr[100] , n, temp, i;
	cout << "ENTER THE NO OF ELEMENTS : ";
	cin >> n;
	cout << "ENTER ALL THE NUMBERS : ";
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n ; i++)
		if (arr[i + 1] < arr[i])
		{
			temp = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = temp;
		}
		else
		{ 
			i+=3;
			temp = arr[i - 1];
			arr[i - 1] = arr[i];
			arr[i] = temp;
		}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0 ;

}