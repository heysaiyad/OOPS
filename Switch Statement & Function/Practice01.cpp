#include<iostream>
using namespace std;

int main()
{
	int a[9] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
	int amount, i, temp;
	
	cout << "\nPlease Enter the Amount of Cash =  ";
	cin >> amount;
	
	temp = amount;
	
	for(i = 0; i < 9; i++)
  	{
		cout << a[i] <<" Notes is = " << temp / a[i] << endl;
		temp = temp % a[i];
  	}
		
 	return 0;
}