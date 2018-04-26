#include <iostream>
#define  size  7
using namespace std;
int arr[7] = {9,2,3,-9,100,344,-1};
void insertion_sort_add(int * a)
{
  int key;
  int j ;
  for (int i = 1; i < size; i++)
  {
	key = a[i];
	j = i - 1;
	while ( j >= 0 && a[j] > key)
	{
	  a[j+1] = a[j];
	  j--;
	}
	a[j+1] = key;
  }
}

void insertion_sort_dec(int * a)
{
  int key;
  int j;
  for (int i = 1; i < size; i++)
  {
	key = a[i];
	j = i - 1;
	while ( j >= 0 && a[j] < key)
	{
	  a[j+1] = a[j];
	  j--;
	}
	a[j+1] = key;
  }
}
int main(int argc, char *argv[])
{
  for ( int i = 0; i < size; i++)
	cout << arr[i] << "  ";
  cout << endl;
  insertion_sort_dec(arr);
  for ( int i = 0; i < size; i++)
	cout << arr[i] << "  ";
  cout << endl;
  cout << "done!" << endl;
  return 0;
}
