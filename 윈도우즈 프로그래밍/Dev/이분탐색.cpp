#include <iostream>//C++�� �����ϱ� ���� ��� ���� ����
using namespace std;//std::�� ���ξ �����Ѵ�.


class Base3 {
   int low = 0;
   int mid;
    int count = 0;
   int key;
    int arr[5] = { 1,2,3,4,5 };
   int top = 4;
public:
   void BASE3(int a) { key = a; }//p�� ���� a�� ������Ʈ���ش�.
   void Baseprint() {//Base Ŭ������ �ִ� Base_print() �Լ��� ��Ÿ����.
      for (int i = 0; i < 5; i++)
      {
         mid = (low + top) / 2;//�߾Ӱ�
         if (arr[mid] == key)//key���� mid ���̶� ������ mid ��ȯ
         {
            count++;
            cout << "�� Ƚ���� " << count << "�� �񱳸� �߽��ϴ�."<<endl;
            cout << arr[mid]<<"���� ã�ҽ��ϴ�." << endl;
            break;
         }
         else if (arr[mid] > key)//key ���� mid ������ ������ (������ �������� ���)
         {
            top = mid;
            count++;
            cout << "�� Ƚ���� " << count << "�� �񱳸� �߽��ϴ�."<<endl;
            cout << "���� ���� ���� �����ϴ�." << arr[mid] << " �� " << key << "�� ���� �ʽ��ϴ�."<<endl;
         }
         else if (arr[mid] < key)//key ���� mid�� ������ Ŭ�� (������ �������� ���)
         {
            low = mid;
            count++;
            cout << "�� Ƚ���� " << count << "�� �񱳸� �߽��ϴ�."<<endl;
            cout << "���� ���� ���� �����ϴ�." << arr[mid] << "��" << key << "�� ���� �ʽ��ϴ�." << endl;
         }
      }
   }
};

class Sun : public Base3
{
   int m;
public:
   Sun(int a) { m = a; }
   void Sun_print()
   {
      cout << "ã����..." << endl;
   }
};
int main()
{
   int a;
   cout << "1971049 ������ - �̺�Ž��" << endl;
   cout << "ã�� ���� ���ڸ� �Է��ϼ��� : ";
   cin >> a;
   Sun Pa(a);
   Pa.Sun_print();
   Pa.BASE3(a);
   Pa.Baseprint();

   return 0;
}
