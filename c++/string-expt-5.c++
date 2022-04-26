#include <iostream>
#include <cstring>
#include <cctype>

class string
{
    char *str;
    int len;
    public:
        string()
        {
            str = new char[1];
            str[0] = '\0';
        }
        string(const char *s)
        {
            len = strlen(s);
            str = new char[len + 1];
            strcpy(str, s);
        }
        void length()
        {
            std::cout << len << std::endl;
        }
        void input()
        {
            std::cin >> str;
        }
        char * &operator=(const string &s)
        {
            len = strlen(s.str);
            str = new char[len + 1];
            strcpy(str, s.str);
            return *this;
        }
        char * &operator+(const string &s)
        {
            char *temp = new char[len + strlen(s.str) + 1];
            strcpy(temp, str);
            strcat(temp, s.str);
            delete[] str;
            str = temp;
            return *this;
        }
        char * &operator<=(const string &s)
        {
            if (strcmp(str, s.str) == 0)
                return *this;
            else
                return NULL;
        }
        void display()
        {
            std::cout << str << std::endl;
        }
        void upper()
        {
            for (int i = 0; i < len; i++)
            {
                if (islower(str[i]))
                    str[i] = toupper(str[i]);
            }
        }
        void lower()
        {
            for (int i = 0; i < len; i++)
            {
                if (isupper(str[i]))
                    str[i] = tolower(str[i]);
            }
        }
        ~string()
        {
            delete[] str;
        }
};

int	main()
{
    string s1, s2, s3;
    s1.input();
    s2.input();
    s3 = s1 + s2;
    s3.display();
    s3 = s1 <= s2;
    if (s3)
        s3.display();
    else
        std::cout << "Not equal" << std::endl;
    s3.length();
    s3.upper();
    s3.display();
    s3.lower();
    s3.display();
    return 0;
}
