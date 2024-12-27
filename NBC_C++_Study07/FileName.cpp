#include<iostream>
using namespace std;

int sum(int a, int b, int c, int d, int e) {
	return a + b + c + d + e;
}
double Avg(int a, int b, int c, int d, int e) {
	return (a + b + c + d + e) / 5;
}

void bubbleSort(int A[], int num) {
	for (int len = num - 1;len > 0;len--) {
		for (int i = 0;i < len;i++) {
			if (A[i] > A[i + 1]) {
				swap(A[i], A[i + 1]);
			}
		}
	}
}
void RebubbleSort(int A[], int num) {
	for (int len = num - 1;len > 0;len--) {
		for (int i = 0;i < len;i++) {
			if (A[i] < A[i + 1]) {
				swap(A[i], A[i + 1]);
			}
		}
	}
}



int main() {
	int trigger = 0;
	int score[5];
	int size = sizeof(score) / sizeof(0);
	cout << "1��° �л��� ������ �Է��ϼ��� : " << endl;
	cin >> score[0];
	cout << "2��° �л��� ������ �Է��ϼ��� : " << endl;
	cin >> score[1];
	cout << "3��° �л��� ������ �Է��ϼ��� : " << endl;
	cin >> score[2];
	cout << "4��° �л��� ������ �Է��ϼ��� : " << endl;
	cin >> score[3];
	cout << "5��° �л��� ������ �Է��ϼ��� : " << endl;
	cin >> score[4];

	int tot = sum(score[0], score[1], score[2], score[3], score[4]);
	double avgscore = Avg(score[0], score[1], score[2], score[3], score[4]);

	cout << "�л����� ���� �� �� => 1 �Է�\n�л����� ��� ���� => 2 �Է�\n������������ ���� => 3 �Է�\n������������ ���� => 4 �Է�" << endl;

	cin >> trigger;

	if (trigger == 1) {
		cout << "�л����� ���� �� �� : " << tot << endl;
	}
	else if (trigger == 2) {
		cout << "�л����� ��� ���� : " << avgscore << endl;
	}
	else if (trigger == 3) {
		bubbleSort(score, size);

		cout << "������������ ���� ��� : ";
		for (int i = 0;i < size;i++) {
			cout << score[i] << " ";
		}
		cout << endl;
	}
	else if (trigger == 4) {
		RebubbleSort(score, size);

		cout << "������������ ���� ��� : ";
		for (int i = 0;i < size;i++) {
			cout << score[i] << " ";
		}
		cout << endl;
	}


	return 0;
}