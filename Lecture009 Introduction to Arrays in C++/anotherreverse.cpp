#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    for (int i = (n-1); i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    /* int start=0;
     int end=n-1;
     while(start<=end)
     {
         swap(arr[start],arr[end]);
         start++;
         end--;
     }*/
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int num[6] = {1, 4, 5, 7, 9, 10};
   // int n = sizeof(num) / sizeof(num[0]);
    reverse(num, 6);
    cout << endl;

    printArray(num, 6);
}
