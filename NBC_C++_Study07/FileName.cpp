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
	cout << "1번째 학생의 점수를 입력하세요 : " << endl;
	cin >> score[0];
	cout << "2번째 학생의 점수를 입력하세요 : " << endl;
	cin >> score[1];
	cout << "3번째 학생의 점수를 입력하세요 : " << endl;
	cin >> score[2];
	cout << "4번째 학생의 점수를 입력하세요 : " << endl;
	cin >> score[3];
	cout << "5번째 학생의 점수를 입력하세요 : " << endl;
	cin >> score[4];

	int tot = sum(score[0], score[1], score[2], score[3], score[4]);
	double avgscore = Avg(score[0], score[1], score[2], score[3], score[4]);

	cout << "학생들의 점수 총 합 => 1 입력\n학생들의 평균 점수 => 2 입력\n오름차순으로 정렬 => 3 입력\n내림차순으로 정렬 => 4 입력" << endl;

	cin >> trigger;

	if (trigger == 1) {
		cout << "학생들의 점수 총 합 : " << tot << endl;
	}
	else if (trigger == 2) {
		cout << "학생들의 평균 점수 : " << avgscore << endl;
	}
	else if (trigger == 3) {
		bubbleSort(score, size);

		cout << "오름차순으로 정렬 결과 : ";
		for (int i = 0;i < size;i++) {
			cout << score[i] << " ";
		}
		cout << endl;
	}
	else if (trigger == 4) {
		RebubbleSort(score, size);

		cout << "내림차순으로 정렬 결과 : ";
		for (int i = 0;i < size;i++) {
			cout << score[i] << " ";
		}
		cout << endl;
	}


	return 0;
}