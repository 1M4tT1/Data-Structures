#include <iostream>
#include "front.h"
front*f;

int main() {
    using namespace std;

    f = f_init();

    cout << f_isEmpty(f) << endl;

    f_put(f,5);
    f_put(f,10);
    f_put(f,15);

    cout << f_isEmpty(f) << endl;
    cout << "pocet prvkov vo fronte je: " << f->count << endl;

    cout << f_exists(f,5) << endl;
    cout << f_exists(f,10) << endl;
    cout << f_exists(f,15) << endl;

    while(!f_isEmpty(f))
    {
        cout << f_get(f) << endl;
    }

    f_destroy(f);

    return 0;
}
