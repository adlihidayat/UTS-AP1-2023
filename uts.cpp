
#include <iostream>

using namespace std;

int main()
{
    int a;
    int temp;

input:
    cout << "masukkan angka positif : ";
    cin >> a;

    if (a < 1)
    {
        cout << "input gagal!" << endl;
        goto input;
    }

    cout << endl;
    for (int i = 1; i < a; i++)
    {
        temp = a - i + 1;
        for (int j = 1; j < temp; j++)
            cout << "*";
        for (int j = 1; j < i; j++)
            cout << " ";
        for (int j = 1; j < i; j++)
            cout << " ";
        for (int j = 1; j < temp; j++)
            cout << "*";
        if (i < a - 1)
            cout << endl;
    }
    for (int i = 1; i < a + 1; i++)
    {
        temp = a - i + 1;
        for (int j = 1; j < i; j++)
            cout << "*";
        // temp2 = a - i + 1;/
        for (int j = 1; j < temp; j++)
            cout << " ";
        for (int j = 1; j < temp; j++)
            cout << " ";
        for (int j = 1; j < i; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}