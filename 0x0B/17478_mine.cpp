#include <bits/stdc++.h>
using namespace std;
int cnt;
void recur(int n, int cnt){
    string indent(cnt * 4, '_');
    if(!cnt) cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
    cout << indent <<  "\"����Լ��� ������?\"\n";
    if(n == 0){
        
        cout << indent << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
        cout << indent << "��� �亯�Ͽ���.\n";
        return;
    }
    cout << indent << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
    cout << indent << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
    cout << indent << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
    recur(n-1,cnt + 1);
    cout << indent << "��� �亯�Ͽ���.\n";
}

int main(){
    int n;
    cin >> n;
    recur(n,0);
}