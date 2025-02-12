#include <iostream>
using namespace std;
int main()
{
    int a [5] = {10, 47, 84, 64,20};
    int ele, flag = 0;
    cout << "Enter the element to be searched :";
    cin >> ele;
    for(int i = 0; i < 5; i++)
    {
        if(a[i] == ele)
        {
            flag = 1;
            break;
        }
    }
    
    return 0;
}