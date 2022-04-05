#include <iostream>
using namespace std;


void
bubbleSort (int arr[], int arrSize)
{
  for (int i = 0; i < arrSize; i++)
    {
      for (int j = 0; j < arrSize; j++)
	{
	  if (arr[j] > arr[j + 1])
	    {
	      int ref = arr[j];
	      arr[j] = arr[j + 1];
	      arr[j + 1] = ref;
	    }
	}
    }
}

int
main ()
{
  int arr[12] = { 12, 11, 1, 34, 89, 23, 78, 19, 3, 4, 2, 7 };

  cout << "Array before Sorting:";
  for (int i = 0; i < 12; i++)
    {
      cout << arr[i] << " ";
    }

  bubbleSort (arr, 12);
  cout << "\n";

  cout << "Array after Sorting:";
  for (int i = 0; i < 12; i++)
    {
      cout << arr[i] << " ";
    }
}
