//xiaomawang lesson 2022/11/23 17:00:00 ComprehensiveExercise
// review STL class : vector map list queue stack set


//BossNiu'sCow.cpp T1
#include <bits/stdc++.h>
using namespace std;
int BossNiusCow(){
	vector<int> milk;
	int n;
	cin >> n;
	int a;
	for(int i = 0 ;i < n ; i++){
		cin >> a;
		milk.push_back(a);
	}
	sort(milk.begin(),milk.end());
	cout << milk[n / 2];
	
	return 0;
}

//TaoTaoPlaysBowling.cpp 1s 100MB T2
void TaoTaoPlaysBowling(){
	int n;
	int bowlingBall[100005];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> bowlingBall[i];
	}
	int m;
	int a;
	for(int i = 0 ; i < m; i++){
		cin >> a;
		for(int j = 0; j < n; j++){
			if(bowlingBall[j] == a) cout << j; break;
			break;
		}
		cout << 0;
	}
	return ;
}

//void TaoTaoPlaysBowling()Ð´·¨2
void TaoTaoPlaysBowling_Copy(){
	map<int, int> a;
	int n,q,x;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> x;
		a[x] = i;
	}
	cin >> q;
	for(int i = 0; i < q; i++){
		int m;
		cin >> m;
		cout << a[m] << endl;
	}
	return ;
} 


int JealousBoss(){
	int n,m;
	int a[100010],b;
	set<int>s;
    scanf("%d%d" ,&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=m;i++){
    	cin >> b;
		s.insert(b);
    }
    for(int i=1;i<=n;i++){
    	if(s.find(a[i])) cout << a[i];
	}   
    return 0;
}

//Debug fuction main()
int main(){
	
	return 0;
}











































































