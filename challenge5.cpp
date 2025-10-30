#include <iostream>
using namespace std;

int main()
{
    int count = 0; 

    char array[] = "eagerer"; 

    for (int i = 0; i < 8; i++) 
    {
        if (array[i] == 'a' || array[i] == 'e' || array[i] == 'i' ||
            array[i] == 'o' || array[i] == 'u')
            count = count + 1; 
    }

    cout << "There are " << count << " vowels in string: " << array;

    return 0;
}