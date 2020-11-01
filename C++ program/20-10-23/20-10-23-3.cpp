    #include <iostream>

    using namespace std;

    int main()
    {
        char c1, c2;
        cout << "Please input two characters: " << endl;
        cin >> c1 >> c2;
        c1 = c1 - ' ';
        c2 = c2 - ' ';
        cout << c1 << ' ' << c2 << endl;
        system("pause");
        return 0;                                                                   
    }