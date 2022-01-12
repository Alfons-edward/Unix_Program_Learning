#include <iostream>
#include <array>
using namespace std;
int
main(int argc, char *argv[]){
    // int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int *e = &a[10];
    // cout << "tail = "<< e << endl
    //             << "front= " << a <<endl;
    char str[] = "hello world";
    for (char  *pbegin  = begin(str); pbegin != end(str); pbegin++){
        cout << pbegin << endl;
    }
    return 0;
}