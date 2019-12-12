#include <bits/stdc++.h>

using namespace std;

int main()
{
   	int sets;
   	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	cin >> sets;
	cin.ignore(); //ignores until space
    // or can use, cin.get(); //consumes the \n


	for(int i=0; i<sets; i++){
        string phrase;
        int len;
        bool f_missing = false;

		getline(cin,phrase);
		transform(phrase.begin(), phrase.end(), phrase.begin(), ::tolower); //all to lowercase
		len = phrase.length(); //count length of string
		//len1 = alpha.length();
		//or use this
		// phrase.size();

        int sum = 0;

		for(int k=0; k<26; k++){ //alpha

            int found = 0;
            int chart;
            chart = alpha[k] - 48;

            for(int j=0; j<len; j++){  //phrase
                int value;
                value = phrase[j] - 48;

                if (chart == value){

                    found = 1;
                    sum++;
                    break;
                }
            } //end of 3rd for loop

            if (found == 0){ //if found remains 0 after checking
                if(f_missing == false){

                    cout << "missing " << alpha[k];
                    f_missing = true;
                }
                else{
                    cout << alpha[k];
                }
            }
		} //end of for 2nd loop

		if (sum == 26){

            cout << "pangram" <<endl;

		}
		else //for those without pangram, their sum will != 26. and then endl
            cout <<endl;
	} //end of 1st for loop

    return 0;
}
