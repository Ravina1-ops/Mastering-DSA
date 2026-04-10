#include <iostream>
using namespace std;
int main()
{
    int i = 57;
    int *ptr = &i;
    int **ptr2 = &ptr;
    cout << "1. value---> " << i << endl;
    cout << "2. Address of i box---> " << &i << endl;
    cout << "3. ptr ke ander kya stor hai---> " << ptr << endl;
    cout << "4. ptr ka address---> " << ptr2 << endl;
    cout << "5. i ki value---> " << *ptr << endl;
    cout << "6. ptr box me jo value hai matlab i value ka address---> " << *ptr2 << endl;
    cout << "7. ptr jisko point kar rha hai matlab i ki value---> " << **ptr2 << endl;
    cout << "8. ptr ka khud ka address---> " << &ptr << endl;
    cout << "9. ptr2  ka khud ka address---> " << &ptr2 << endl;

    return 0;
}