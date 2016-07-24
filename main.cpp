//Basic Bubble Sort
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int nums[7] = {5, 7, 3, 6, 9, 1, 4};
    int size = 7;

    int temp = 0;

    for (int pass=0;pass<size-1;pass++)
    {
        for (int i=0;i<size-1;i++)
        {
            if (nums[i] > nums[i+1])
            {
                temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
            }
        }
    }

    for (int i=0;i<7;i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}
