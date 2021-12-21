#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    char empname[20];
};

int main()
{

    struct employee A, B, C;

    A.code = 100;
    B.code = 102;
    C.code = 103;

    strcpy(A.empname, "jhon snow");
    strcpy(B.empname, "hello world");
    strcpy(C.empname, "tony stark");

    printf("%s\n", A.empname);
    printf("%s\n", B.empname);
    printf("%s\n", C.empname);

    printf("%d\n", A.code);
    printf("%d\n", B.code);
    printf("%d\n", C.code);

    return 0;
}