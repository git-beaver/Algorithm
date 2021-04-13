#include <iostream>
#include <array>

using namespace std;

int main() {
	string word; //입력받은 단어
	int array[27] = { 0 };

	cin >> word;

	//알파벳 사용 횟수 기록
	for (int i = 0; i < word.length(); i++) {
		int ch = toupper(word[i]) - 'A';
		array[ch]++;
	}

	int max = -1; //최대 사용 횟수
	char max_ch = '?'; //최대 사용된 문자
	//가장 많이 사용된 문자 찾기
	for (int i = 0; i < 27; i++) {
		if (array[i] > max) {
			max = array[i];
			max_ch = 'A' + i;
		}
		else if (array[i] == max) {
			max_ch = '?';
		}
	}

	cout << max_ch << endl;

	return 0;
}