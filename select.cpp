
//1-1 �˰����� 5-1
//��� �����ð� ���� �˰�����
/*
#include<iostream>
#include<ctime>
using namespace std;

void swap(int A[], int a, int b) {
    int tmp = A[a];
    A[a] = A[b];
    A[b] = tmp;
}

int partition(int A[], int p, int r) {
    int x = A[r];
    int i = p - 1;

    for (int j = p; j <= r - 1; j++) {
        if (A[j] < x) {
            i++;
            swap(A, i, j);
        }
    }

    swap(A, i + 1, r);

    return i + 1;
}

int select(int A[], int p, int r, int i) {
    if (p == r) return A[p];//���� �ϳ�

    int q = partition(A, p, r);
    int k = q - p + 1;

    if (i == k) return A[q]; // ���ؿ��� == ã�� ����
    else if (i < k) return select(A, p, q - 1, i); // ���� �׷����� ���� ����
    else return select(A, q + 1, r, i - k); // ������ �׷����� ���� ����
}

int main(void) {
    time_t start, finish;
    double duration;

    start = time(NULL);

    int A[100000];
    srand((unsigned int)time(NULL));

    for (int i = 0; i < 100000; i++) {
        A[i] = rand()%10000;
    }

    for (int k = 1; k < 50001; k++) {
        select(A, 0, 99999,k);
    }

    finish = time(NULL);

    duration = (double)(finish - start);
    cout << duration << "��" << endl;

    return 0;
}
*/







/*
#include <iostream>
#include <ctime>
#include <cstdlib>
#include<random>
using namespace std;

void swap(int A[], int a, int b) {
    int tmp = A[a];
    A[a] = A[b];
    A[b] = tmp;
}

int partition(int A[], int p, int r) {
    int x = A[r];
    int i = p - 1;

    for (int j = p; j <= r - 1; j++) {
        if (A[j] < x) {
            i++;
            swap(A, i, j);
        }
    }

    swap(A, i + 1, r);

    return i + 1;
}

int select(int A[], int p, int r, int i) {
    if (p == r) return A[p]; // ���� �ϳ�

    int q = partition(A, p, r);
    int k = q - p + 1;

    if (i == k) return A[q]; // ���ؿ��� == ã�� ����
    else if (i < k) return select(A, p, q - 1, i); // ���� �׷����� ���� ����
    else return select(A, q + 1, r, i - k); // ������ �׷����� ���� ����
}

int main() {
    int A[100000];
    srand(static_cast<unsigned int>(time(NULL)));

    for (int i = 0; i < 100000; i++) {
        A[i] = rand() % 100000; // 0���� 999999 ������ ������ ������ �迭 �ʱ�ȭ
    }

    time_t start, finish;
    double duration;

    start = time(NULL);

    for (int j = 0; j < 50000; j++) select(A, 0, 99999, j);

    finish = time(NULL);

    duration = difftime(finish, start);

    cout << "1���� " << 50000 << "��° ���� ��: " << endl;
    cout << "�ҿ� �ð�: " << duration << "��" << endl;

    return 0;
}
*/