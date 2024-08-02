#include <bits/stdc++.h>
using namespace std;

int l,c;
char alpha[20];
bool vowel[20];
bool mask[20];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> l >> c;
    for (int i = 0; i < c; i++) {
        cin >> alpha[i];
    }
    sort(alpha,alpha+c);
    for (int i = 0; i < c; i++) {
        if(alpha[i] == 'a' || alpha[i] == 'e' || alpha[i] == 'i' || alpha[i] == 'o' || alpha[i] == 'u'){
            vowel[i] = true;
        }
    }
    for (int i = l; i < c; i++) {
        mask[i] = true; // 뽑히지 말아야할 녀석들
    }
    
    do{
        string ans;
        int cnt1 = 0; // 모음의 수
        for(int i = 0; i < c; i++){
            if(!mask[i]){
                ans += alpha[i];
                if(vowel[i]) cnt1++;
            }      
        }
        if(cnt1 < 1 || l - cnt1 < 2) continue;
        cout << ans << '\n';
  }while(next_permutation(mask, mask + c));
}