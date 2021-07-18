#include "codeblock.h"

int find (vector <int> arr)
{
    int incl,excl,temp;
    incl = arr[0];
    excl = 0;

    for(int i =1; i < arr.size(); i++){
        temp = max(excl,incl);
        // cout << excl << " ";
        incl = excl + arr[i];
        excl = temp;
        // cout << incl << " ";
    }
    return max(excl , incl);
}
int main ()
{
    vector <int> arr = input();
    cout << "Maximum sum of two non adjacents elements : " << find(arr);
    return 0;
}