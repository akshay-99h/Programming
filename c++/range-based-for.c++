#include "bits/stdc++.h"

int	main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::string str="Hello";
    auto str2=str; //auto is used to declare a variable of type string
    std::cout<<str2;
    for (auto &i : arr)
    // i iterates through the array and creates reference to each element

    {
        i *= 2;
        std::cout << i << " "; // prints 2 4 6 8 10 12 14 16 18 20
    }
    std::cout << arr[0] << std::endl; // prints 2
    return 0;
}
