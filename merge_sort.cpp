#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
  int mid = (e - s) / 2 + s;
  int len1 = mid - s + 1;
  int len2 = e - mid;
  // dyanmic memory allocation
  int *first = new int[len1];
  int *second = new int[len2];
  // copy values

  int k = s;
  for (int i = s; i < len1; i++)
  {
    first[i] = arr[k++];
  }
   k = mid + 1;
  for (int i = s; i < len2; i++)
  {
    first[i] = arr[k++];
  }

  // merge 2 sorted array
  int index1 = 0;
  int index2 = 0;
  k = s;
}
void merge_sort(int *arr, int s, int e)
{
  // base case
  if (s > e)
  {
    return;
  }
  int mid = (e - s) / 2 + s;
  // left part sort
  merge_sort(arr, s, mid);

  // roght part sort
  merge_sort(arr, mid + 1, e);

  // merging the array
  merge(arr, s, e);
}
int main()
{
  int arr[5] = {2, 5, 1, 3, 41};
  int n = 5;
  merge_sort(arr, 0, n - 1);

  return 0;
}