/*
#include <iostream>
using namespace std;

int main()
{
    int n=0, m=0,k=0;
    cout<<"Enter number of rows: ";
    cin>>m;
    (m%2==0)?n=m/2:n=(m/2)+1;

    for(int i=1, k=0; i<=n; i++)
    {
        for(int j=1; j<=(n-i); j++)
        {
            cout << " ";
        }
        while (k!= (2*i)-1)
        {
            cout<<"*"<<" ";
            k++;
        }
        cout<<endl;
        k=0;
    }
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for(k=0; k<= (2 * (n-i)); k++)
        {
            cout << "*"<<" ";
        }
        cout << endl;
        k = 0;
    }

    return 0;
}


int main()
{
    int rown=0, k=0;
    cout << "Enter the number of rows: ";
    cin  >> rown;
    
    for (int i = 1; i <= 3; i++)
    {
        for (int j=1; j<=rown;j++)
        {
            k=(((i + j) % 4 == 0) || ((i == 2) && (j % 4 == 0)));
            if (k) cout << "*";
            else cout<<" ";
        }
        cout << endl;
    }
}

//How to use the internet if it's down?
//How to code if it's down?
//How to git when the net is down?
//Hello World! 
*/

//#include <ctype.h>
#include <iostream>
//#include <math.h>

using namespace std;
/*
bool isPrime(float);
void fibonacci(float);
float factorial(float);         //also find C(n,r) , P(n,r) and Pascal triangle
bool isEven(float);           //also use isalpha()
float max(float, float, float);
float min(float, float, float);
void swap(float &, float &);

int main()
{
    float num1=0, num2=0, num3=0, counter=1, n=0, r=0;
    char ch; int choice=0;
    do
    {
        cout << "\n\n";

        for(int i=0; i!=30; i++)
            cout << '*';
    
        cout << "\n\t\t Menu\n\n";

        for (int i = 0; i != 30; i++)
            cout << '*';

        cout << "\n\n1. Give two numbers and print all the prime numbers between them.\n";
        cout << "2. Give a number and form a fibonacci series.\n";
        cout << "3. Find the factorial of a given number.\n";
        cout << "4. Check if a number is odd or even.\n";
        cout << "5. Find the maximum of three numbers.\n";
        cout << "6. Find the minimum of three numbers.\n";
        cout << "7. Swap two numbers.\n";
        cout << "8. Find C(n,r) and P(n,r) for a given value of 'n' and 'r'\n";
        cout << "9. Write the Pascal's triangle upto a given number of rows\n";
        cout << "10. Check if the given character is an alphabet\n";
        cout << "11. Restart.\n";
        cout << "12. Exit.\n\n";
        cout << " Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << " Enter two numbers: ";         //prime numbers b/w two num
                cin >> num1 >> num2;
                for(int i=num1 ; i <= num2 ; i++)
                {
                    if(isPrime(i)){
                        cout<<i;
                    }
                }
                break;

            case 2:
                cout << " Enter the number upto which you want to write the fibonacci series: "; //fibonacci
                cin >> num1;
                fibonacci(num1);
                break;

            case 3:
                cout << " Enter the number: ";          //factorial
                cin >> num1;
                num2=factorial(num1);
                cout << " The factorial is: " << num2;
                break;

            case 4:
                cout << " Enter the number: ";          //odd or even
                cin >> num1;
                (isEven(num1))? cout<< "\n The given number is even\n" : cout << "\n The given number is odd\n";
                break;

            case 5:
                cout << " Enter the three numbers: ";   //max of three
                cin >> num1 >> num2 >> num3;
                counter=max(num1, num2, num3);
                cout << " The maximun number is: " << counter;
                counter = 1;
                break;
            
            case 6:
                cout << " Enter the three numbers: ";       //min of three
                cin >> num1 >> num2 >> num3;
                counter = min(num1, num2, num3);
                cout << " The minimun number is: " << counter;
                counter = 1;
                break;

            case 7:
                cout << " Enter the two numbers: ";
                cin >> num1 >> num2;
                swap(num1, num2);
                cout << " The numbers after swapping: " << num1 << num2;
                break;

            case 8:
                cout << " Enter the value of 'n': ";        // Permutaion and Combination related
                cin >> n;
                cout << "\n Enter the value of 'r': ";
                cin >> r;
                num1 = factorial(n) / (factorial(r) * factorial(n - r));
                num2 = factorial(n) / factorial(r);
                cout << " C ( n , r ) = " << num1;
                cout << endl;
                cout << " P ( n , r ) = " << num2;
                break;
            
            case 9:
                cout << " Enter the value of 'n': ";        // Pascal's triangle
                cin >> n;
                for (int i=0 ; i<=n ; i++)
                {
                    for (int j=0; j<=i ; j++)
                    {
                        num1 = factorial(i) / (factorial(j) * factorial(i - j));
                        cout << num1 << " ";
                    }
                    cout << '\n';
                }
                break;
            
            case 10:
                cout << " Enter your character: ";  //isAlpha
                cin >> ch;
                (isalpha(ch)) ? cout << "The given is an alphabet." : cout << " The given is NOT an alphabet.";
                break;

            case 11:
                continue;
                break;
            
            case 12:
                counter=0;
                break;
            
            default:
                cout << "\n Please enter a valid choice!\n\n Press any key to continue.";
                cin.get(ch);
                continue;
        }
    }while(counter);

    cout << " Thanks for using this program.\n";
    cin.get(ch);

    return 0;
}

bool isPrime(float num)
{
    for (int i=0; i<=sqrt(num); i++)
    {
        if ((int)num % i == 0) return false;
    }
    return true;
}

void fibonacci(float num)
{
    int num1=0;
    int num2=1;
    int nextnum=0;
    cout << " The fibonacci series is as follows...\n";
    for (int i=0; i <= num; i++)
    {
        cout << num1 << endl;
        nextnum = num1 + num2;
        num1 = num2;
        num2 = nextnum;
    }
    return;
}

float factorial(float num)
{
    for(int i=1; i<=num; i++)
    num*=i;
    return num;
}

bool isEven(float num)
{
    if((int)num%2==0) return true;
    else return false;
}

float max(float a, float b, float c)
{
    if(a>b)
    {
        if (a>c) return a;
        else return c;
    }

    else
    {
        if (b>c) return b;
        else return c;
    }
    
}

float min(float a, float b, float c)
{
    if (a < b)
    {
        if (a < c)
            return a;
        else
            return c;
    }

    else
    {
        if (b < c)
            return b;
        else
            return c;
    }
}

void swap(float &a, float &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    return;
}
*/

// BUBBLE SORT
int main()
{
    int count;
    cout << " Enter the number of elements you want to put in the array. ";
    cin >> count;
    long int arr[count]; 
    cout << "\n\n\n Enter your array \n\n\n\n";
    for (int i=0; i!=count; i++)
        cin >> arr[i];
    cout << "\n\n\n The array in sorted order. \n\n\n\n";
    for (int i=0; i!=count-1; i++)
    {
        for (int j=i+1; j<=count; j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i]=arr[i]+arr[j]; 
                arr[j]=arr[i]-arr[j]; 
                arr[i]=arr[i]-arr[j]; 
            }
            else if (arr[i] == arr[j])
            {
                i++;
                arr[(i)] = arr[(i)] + arr[j];
                arr[j] = arr[(i)] - arr[j];
                arr[(i)] = arr[(i)] - arr[j];
                i--;
            }
        }
    }
    for (int i = 0; i != count; i++)
        cout << arr[i]<<" ";
    cout << endl;
    return 0;
}