#include <iostream>
#include <array>

using namespace std;

int main() {
	string word; //�Է¹��� �ܾ�
	int array[27] = { 0 };

	cin >> word;

	//���ĺ� ��� Ƚ�� ���
	for (int i = 0; i < word.length(); i++) {
		int ch = toupper(word[i]) - 'A';
		array[ch]++;
	}

	int max = -1; //�ִ� ��� Ƚ��
	char max_ch = '?'; //�ִ� ���� ����
	//���� ���� ���� ���� ã��
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