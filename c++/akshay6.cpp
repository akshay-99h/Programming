// Program-6 Akshay
#include"iostream.h"

class train
{
    unsigned int train_no;
    unsigned int seats_f;
    unsigned int seats_s;
    unsigned int seats_t;

public:
    void accept();
    void show();
    int update(char,unsigned int);
};



void train::accept()
{
    cout << " Enter the train number : ";
    cin >> train_no;
    cout << " Enter the number of seats in first class : ";
    cin >> seats_f;
    cout << " Enter the number of seats in second class  : ";
    cin >> seats_s;
    cout << " Enter the number of seats in third class  : ";
    cin >> seats_t;
}

void train::show()
{
    cout << " The train number : " << train_no ;
    cout << " The number of seats in first class : " << seats_f;
    cout << " The number of seats in second class  : " << seats_s;
    cout << " The number of seats in third class  : " << seats_t;
}

int train::update(char book, unsigned int seat)
{
    if(book=='f') seats_f=
}

class reservation:protected train
{
        unsigned int book_f, book_s, book_t;
    public:
        reservation()
        {
            book_f=0;
            book_s=0;
            book_t=0;
        }
        void booking();
        void cancel();
        void display();
};

void reservation::booking()
{
    char x='\0'; int y=0;
    cout << " Select the class you want to book for (f/s/t) : " ;
    cin >> x;
    cout << "\n Enter the number of seats you are booking : " ;
    cin >> y;
    switch(x)
    {
        case 'f': 
            book_f += y; 
            break;
        case 's':
            book_s += y;
            break;
        case 't':
            book_t += y;
            break;
    }
}

void reservation::cancel()
{
    char x = '\0';
    unsigned int y = 0;
    cout << " Select the class you want to cancel tickets for (f/s/t) : ";
    cin >> x;
    cout << "\n Enter the number of seats you are cancelling : ";
    cin >> y;
    switch (x)
    {
    case 'f':
        book_f -= y;
        break;
    case 's':
        book_s -= y;
        break;
    case 't':
        book_t -= y;
        break;
    }
}

void reservation::display()
{

}