#include<iostream>
using namespace std;
int main()
{
    int r, c, a, b;
    cin >> r >> c >> a >> b;
    //5행을
    for (int i = 0; i < r; i++)
    {
        //2번씩 출력=총 10줄
        for (int j = 0; j < a; j++)
        {
            //1열당 5개의덩어리
            for (int k = 0; k < c; k++)
            {
                //그 5개가 각각 3개의문자이룸
                for (int l = 0; l < b; l++)
                {
                    if ((i + k) % 2 == 0)
                        cout << "X";
                    else cout << ".";
                }
            }
            cout << endl;
        }
    }
}
