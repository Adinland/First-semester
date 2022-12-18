#include <stdio.h>

int main()
{
    long long int log, pswd;
    printf("Enter your login, then password\nlogin <- ");
    scanf_s("%lli", &log);
    printf("password <- ");
    scanf_s("%lli", &pswd);
    if ((log == 951 && pswd == 753) || (log == 456 && pswd == 654))
        printf("Permission successfully, welcome _username_");
    else
        printf("Permisiion denied, please try again");
    return 0;
}
