#include "iostream.h"

int main(int argc, char *argv[])
{
    int input[10] = {12,14,52,23,98,41,14,22,35,78};
    int key;
    cout << "Welcome to The Insertion Sort Algoritm!\r\n\nbefore sort ";
    for(int i = 0;i<(sizeof(input)/4);i++) { //� int 4 �����, sizeof ������ ������ � ������,
                                             //������� ����� ������ �� 4 � ������� ���������� ��������� � �������
        cout << input[i] << ' ';
    }

    for(int j = 1,i;j<(sizeof(input)/4);j++) {
       key = input[j]; //��������� ��������� �������
       i = j-1; //����� ������ �����������
       while(i>0 && input[i]>key){ //���������� ��� �������� ����� �� ���������� ��������, �� ��� ��� ���� �� ��������� ������� ��� ������
           input[i+1]=input[i]; // �������� ������� �������� ����������� ����� ������ �� ����� ����������
           i--;
       }
       input[i+1]=key; //��������� ������� � ����� ������� ������������ � ���������� ������ ��������� ������.
    }
    //����� ������� ������� ��� �� ������������ ����� �� ��� ��� ���� �� ��������� �������� ������ ��� �� ���.

    cout <<"\r\nafter sort  ";
    for(int i = 0;i<(sizeof(input)/4);i++) { //� int 4 �����, sizeof ������ ������ � ������,
                                             //������� ����� ������ �� 4 � ������� ���������� ��������� � �������
        cout << input[i] << ' ';
    }
    return 0;
}
