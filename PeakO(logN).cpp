#include <iostream>
using namespace std;

int Peak(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;

    //  if the array has only one element
    if (s == e)
    {
        return arr[s];
    }

    //  if mid is a peak element
    if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == e || arr[mid] >= arr[mid + 1]))
    {
        return arr[mid];
    }

    // If the peak is in the left half
    if (mid > 0 && arr[mid] < arr[mid - 1])
    {
        return Peak(arr, s, mid - 1);
    }

    // if  the peak is in the right half
    return Peak(arr, mid + 1, e);
}

int main()
{
    int arr[] = {2, 3, 4, 55, 6, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Peak element is: " << Peak(arr, 0, n - 1) << endl;
    return 0;
}
