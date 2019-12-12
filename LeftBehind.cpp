#include <iostream>

using namespace std;

int main()
{
    int sweet,sour;

    cin >> sweet >> sour;

    while(sweet !=0 || sour != 0){

        if (sweet + sour == 13){

            cout << "Never speak again." << endl;
        }

        else if (sweet > sour){

            cout << "To the convention." <<endl;

        }
        else if (sweet < sour){

            cout << "Left beehind." << endl;

        }
        else{

            cout << "Undecided." << endl;
        }

        cin >> sweet >> sour;
    }

    return 0;
}

