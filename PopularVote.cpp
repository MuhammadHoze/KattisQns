#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int cases;
    int i,j;

    cin >> cases;

    for (i=0; i<cases; i++){
        int candidates,sum = 0, maximum = 0;
        int index,same = 0;

        cin >> candidates;

        for(j=0; j<candidates; j++){
            int votes;

            cin >> votes;

            if (votes > maximum){

                maximum = votes;
                index = j + 1;
                same = 0;
            }
            else if (votes == maximum){

                same = 1;
            }
            sum += votes;
        }

        if (maximum > floor(sum/2)){

            cout << "majority winner " << index << endl  ;
        }
        else if (maximum <= floor(sum/2)){

            if(same == 1){

                cout << "no winner" << endl;
            }
            else
                cout << "minority winner " << index << endl;
        }
    }
    return 0;
}

