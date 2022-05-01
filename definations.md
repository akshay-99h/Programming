# Definations

## Jagged Array

* Jagged Array is an array that contains an array as an element.
* Jagged Array is a multidimensional array.
* Jagged Array is a variable-length array.
* It is used to store data in a table, list, matrix, grid, tree, graph, or network format.

```c

// C program to show the
// implementation of Jagged Arrays
  
#include <stdio.h>
#include <stdlib.h>
  
int main()
{
  
    int row0[4] = { 1, 2, 3, 4 };
    int row1[2] = { 5, 6 };
  
    int* jagged[2] = { row0, row1 };
  
    // Array to hold the size of each row
    int Size[2] = { 4, 2 }, k = 0;
  
    // To display elements of Jagged array
    for (int i = 0; i < 2; i++) {
  
        // pointer to hold the address of the row
        int* ptr = jagged[i];
  
        for (int j = 0; j < Size[k]; j++) {
            printf("%d ", *ptr);
  
            // move the pointer to the
            // next element in the row
            ptr++;
        }
  
        printf("\n");
        k++;
  
        // move the pointer to the next row
        jagged[i]++;
    }
  
    return 0;
}
```
---

## r-value reference

* r-value reference is a reference to a temporary object.
* r-value reference is a reference to an object that is not a variable.

```c++
#include <iostream>

class Fraction
{
private:
 int m_numerator;
 int m_denominator;

public:
 Fraction(int numerator = 0, int denominator = 1) :
  m_numerator{ numerator }, m_denominator{ denominator }
 {
 }

 friend std::ostream& operator<<(std::ostream& out, const Fraction &f1)
 {
  out << f1.m_numerator << '/' << f1.m_denominator;
  return out;
 }
};

int main()
{
 auto &&rref{ Fraction{ 3, 5 } }; // r-value reference to temporary Fraction

    // f1 of operator<< binds to the temporary, no copies are created.
    std::cout << rref << '\n';

 return 0;
} // rref (and the temporary Fraction) goes out of scope here
```
---

## l-value reference

* l-value reference is a reference to a variable.

---

## const reference

* const reference is a reference to a temporary object.

```c++
int a;

void DoWork(const int &n)
{
    a = n * 2;  // If n was a reference to a, n will have been doubled 

    f();  // Might change the value of whatever n refers to 
}

int main()
{
    DoWork(a);
}
```

---

## const pointer
