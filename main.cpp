#include <vector>
#include <string>
#include <iostream>

using namespace std;

void combSort(std::vector<int>& data) // data � �������� �������  (������� �� ������, ����� ����� comb(array) ����� ������ array)
{
    double factor = 1.2473309; // ������ ����������
    int step = data.size() - 1; // ��� ����������

    //��������� �������� �����, ����� step==1 ������������ ������ ������� ���������� ���������
    while (step >= 1)
    {
        for (int i = 0; i + step < data.size(); i++)
        {
            if (data[i] > data[i + step])
            {
                std::swap(data[i], data[i + step]);
            }
        }
        step /= factor;
    }
}

int main()

{
    vector <int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand());
        std::cout << v[i] << " ";
    }

    std::cout << " \n" << endl;

    combSort(v);
    for (int i = 0; i < 10; i++)
    {
        std::cout << v[i] << " ";
    }

}

  