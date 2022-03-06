//Program 6 Akshay
#include <c++/4.2.1/backward/iostream.h>
int main() {
    int roll                                                                                                       ;
    float marks , t                                                                                           ;
    cout << '\n' <<'\t'<<"Marks calculator"  << '\n' << '\n'                            ;
    cout << "Enter your roll no. "                                                                  ;
    cin >> roll                                                                                                ;
    cout << '\n' << "Enter your marks out of 75 "                                         ;
    cin >> marks                                                                                            ;
    if (marks < 75) {
        t=(marks/75)*100                                                                               ;
        cout << "The marks for roll no. " <<  roll << " is " << t <<'%'         ;
        cout << '\n' << "Thank you" << '\n'                                                   ;
    }
    else {
        cout << "Error try again..." << '\n'                                                     ;
        cout << " Press any key.... "                                                               ;
     }
    cout << '\n'                                                                                               ;
}
/*   OUTPUT
        Case 1:-
                Marks calculator

            Enter your roll no. 23

            Enter your marks out of 75: 70
            The marks for roll no. 23 is 93.3333%
            Thank you
        Case 2:-
                    Marks calculator

            Enter your roll no. 8849

            Enter your marks out of 75 100
            Error try again...
            Press any key....
*/
