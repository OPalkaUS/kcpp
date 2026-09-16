#include <iostream>

using namespace std;


void Funkcja1() {
    int tab[] = {10, 20, 30, 40, 50}; //Testowa tablica
    int *p;

    // Po kazdym pokazaniu dzialania, p na nowo wskazuje na tab
    //p++
    p = tab;
    cout << "== p++ ==" << endl;
    cout << "p++: p wskazuje na " << *p << endl;
    p++;
    cout << "po p++: " << *p << endl;

    cout << "=== ++p ===" << endl;
    p = tab;
    cout << "++p: przed = " << *p << endl;
    ++p;
    cout << "po = " << *p << endl;

    cout << "=== ++*p ===" << endl;
    p = tab;
    cout << "++*p: przed = " << *p << endl;
    ++*p;
    cout << "po = " << *p << endl;

    cout << "=== ++(*p) ===" << endl;
    p = tab;
    cout << "++(*p): przed = " << *p << endl;
    ++(*p);
    cout << "po = " << *p << endl;

    cout << "=== ++*(p) ===" << endl;
    p = tab;
    cout << "++*(p): przed = " << *p << endl;
    ++*(p);
    cout << "po = " << *p << endl;

    cout << "=== *p++ ===" << endl;
    p = tab;
    cout << "*p++: przed = " << *p << endl;
    *p++;
    cout << "po: p wskazuje na " << *p << endl;

    cout << "=== (*p)++ == " << endl;
    p = tab;
    cout << "(*p)++: przed = " << *p << endl;
    (*p)++;
    cout << "po = " << *p << endl;

    cout << "=== *(p)++ ===" << endl;
    p = tab;
    cout << "*(p)++: przed = " << *p << endl;
    *(p)++;
    cout << "po: p wskazuje na " << *p << endl;

    cout << "=== *++p === " << endl;
    p = tab;
    cout << "*++p: przed = " << *p << endl;
    *++p;
    cout << "po: p wskazuje na " << *p << endl;

    cout << "=== *(++p) === "<<endl;
    p = tab;
    cout << "*(++p): przed = " << *p << endl;
    *(++p);
    cout << "po: p wskazuje na " << *p << endl;
}

void Funkcja2() {
    int ABC[3] = {0, 0, 0};

    int *a = &ABC[0];
    int *b = &ABC[1];
    int *c = &ABC[2];

    cout << "1.  A, B, C: " << *a << "\t" << *b << "\t" << *c << endl;

    *b = 10;
    cout << "2.  A, B, C: "<< *a << "\t" << *b << "\t" << *c << endl;

    *(*(&a) + 2) = 20;
    cout << "3.  A, B, C: "<< *a << "\t" << *b << "\t" << *c << endl;

    *(ABC + 1) = 30;
    cout << "4.  A, B, C: "<< *a << "\t" << *b << "\t" << *c << endl;

    *ABC = 40;
    cout << "5.  A, B, C: "<< *a << "\t" << *b << "\t" << *c << endl;

    *(c - 1) = 50;
    cout << "6.  A, B, C: "<< *a << "\t" << *b << "\t" << *c << endl;

    *(a + 2) = 60;
    cout << "7.  A, B, C: "<< *a << "\t" << *b << "\t" << *c << endl;

    *(c - 1) = 70;
    cout << "8.  A, B, C: "<< *a << "\t" << *b << "\t" << *c << endl;

    *(b - 1) = 80;
    cout << "9.  A, B, C: "<< *a << "\t" << *b << "\t" << *c << endl;


    *(a + 1) = 90;
    cout << "10. A, B, C: "<< *a << "\t" << *b << "\t" << *c << endl;
}

int main() {

	Funkcja1();
	Funkcja2();
	return 0;
}
