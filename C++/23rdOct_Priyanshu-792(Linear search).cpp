#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // Declare variables
    int i, num, index;
    int n;

    // Input the size of the array
    cout << "Enter size of the array: ";
    cin >> n;

    // Declare an array of size 'n'
    int arr[n];

    // Input 'n' numbers into the array
    cout << "Enter " << n << " numbers: ";
    for (i = 0; i < 10; i++) // This loop has a fixed limit of 10 iterations, which should be 'n'
        cin >> arr[i];

    // Input a number to search
    cout << "\nEnter a Number to Search: ";
    cin >> num;

    // Search for the input number in the array
    for (i = 0; i < 10; i++) // Same issue as above, should be 'i < n'
    {
        if (arr[i] == num)
        {
            index = i;
            break; // Exit the loop if the number is found
        }
    }

    // Display the index where the number was found
    cout << "\nFound at Index No." << index << endl;

    return 0;
}
