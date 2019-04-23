#include "People.h"
#include <iostream>

using namespace std;

int main(){
    People a("alice",'F',50);
    a.show();
    People b("bob",'m',30);
    b.show();
    People c("carol",'X',13);
    c.show();
    People x;
    x.show();
    return 0;
}
