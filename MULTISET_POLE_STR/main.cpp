#include <iostream>
#include "multi.h"

int main() {
    using namespace std;

    m_init(5);

    cout << m_isEmpty() << endl;

    m_put(4);
    m_put(3);
    m_put(4);
    m_put(5);

    cout << m_isEmpty() << endl;

    cout << m_exists(4) << endl;

    cout << m_count() << endl;
    cout << m_items() << endl;

    m_del(5);
    m_del(4);

    cout << m_get() << endl;
    cout << m_get() << endl;
    cout << m_get() << endl;
    cout << m_get() << endl;

    cout << m_isEmpty() << endl;

    m_destroy();

}