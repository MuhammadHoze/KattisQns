#include <iostream>
#define MAX 10

using namespace std;

int main()
{
    int set;
    int i,j;
    int speed;
    int time;

    cin >> set;

    while(set != -1){
        int sum = 0;
        int previous = 0;

    //input
        for(i=0; i<set; i++){

            cin >> speed >> time ;
            sum+= speed * (time-previous);
            previous = time; //updates the previous


        }

        cout << sum << " miles" << endl;
        cin >> set;

    }

    return 0;
}

