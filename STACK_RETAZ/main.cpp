#include <iostream>
#include "stack.h"
int main() {
    using namespace std;
    stack*s;

    s = s_init();

    cout << s_isEmpty(s) << endl;

    s_put(s,5);
    s_put(s,10);
    s_put(s,15);

    cout << s_isEmpty(s) << endl;

    cout << "5:" << s_exists(s,5) << endl;
    cout << "10:" <<s_exists(s,10) << endl;
    cout << "15:" <<s_exists(s,15) << endl;

    cout << "pocet prvkov v zasobniku je: " << s->count << endl;

    while(!s_isEmpty(s))
    {
        cout << s_get(s) << endl;
    }

    cout << s_isEmpty(s) << endl;
    cout << "pocet prvkov v zasobniku je: " << s->count << endl;

    s_destroy(s);

    return 0;
}
