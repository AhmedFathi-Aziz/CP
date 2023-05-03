#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int index(char character, string sentence) {
	int in = 0;
	int len = sentence.length();
	for (int i = 0; i < len; i++) {
		if (character == sentence[i])
			in = i;
	}
	return in;
}

int main()
{
	string mole = "qwertyuiopasdfghjkl;zxcvbnm,./";

	char direction;
	cin >> direction;

	string message;
	cin >> message;
	int len = message.length();

	if (direction == 'R')
	{
		for (int i = 0; i < len; i++)
		{
			int in = index(message[i], mole);
			cout << mole[in - 1];
		}
	}
    else {
        for (int i = 0; i < len; i++)
        {
            int in = index(message[i], mole);
            cout << mole[in + 1];
        }
    }

}
