//xiaomawang Lesson's Homework -- CanYouWalkThroughTheMaze?
/*
GitHub OpenSource : https://github.com/ajyxwDean/learnXiaomawangLessons
GNU General Public License v3.0

*/

/*
#include <bits/stdc++.h>
using namespace std;
char mp[1005][1005];
int vis[1005][1005];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
struct node{
	int x,y;
}root,to;
int n,m;
queue<node> q;
void bfs(int a, int b){//start BFS at (a,b)
	root.x=a;
	root.y=b;
	while(q.size()){
		if(root.x == n && root.y == m){
			printf("YES\n");
			return ;
		}
		q.push(root);
		for(int i = 0 ; i < 4; i++){
			to.x=root.x+dx[i];
			to.y=root.y+dy[i];
			if(to.x >= 1 && to.x <= n && to.y >= 1 && to.y <= m && vis[to.x][to.y] != 1 && mp[to.x][to.y] == '#'){//从1开始存
				vis[to.x][to.y] = 1;
				node n1;
				n1.x=to.x;
				n1.y=to.y;
				q.push(n1);
			}
		}
		q.pop();
	}
	if(q.size() == 0)
		printf("NO\n");return ;
}
int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> mp[i][j];
			if(mp[i][j] == '#'){
				vis[i][j] = 1;
			}
		}
	}
	bfs(1,1);
	return 0;
}
*/


//#define DEBUG
#include <bits/stdc++.h>
using namespace std;
char mp[1005][1005];
int vis[1005][1005];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
struct node{
	int x,y;
}to;
int n,m;
queue<node> q;
int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> mp[i][j];
			if(mp[i][j] == '#'){
				vis[i][j] = 1;
			}
		}
	}
	#ifdef DEBUG
	printf("\n\n\n");
		for(int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= m ; j++){
				printf("%c", mp[i][j]);
			}
			printf("\n");
		}
		for(int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= m ; j++){
				printf("%d", vis[i][j]);
			}
			printf("\n");
		}
		cout << n << " " << m;
		system("pause");
		printf("\n\n\n");
	#endif
	node root;
	root.x=0;
	root.y=0;
	q.push(root);
	#ifdef DEBUG
		printf("%d",q.size());
	#endif
	while(q.size()){
		node fn=q.front();
		#ifdef DEBUG
		system("pause");
		#endif
		if(fn.x == n-1 && fn.y == m-1){
			printf("YES\n");
			return 0;
		}
		for(int i = 0 ; i < 4; i++){
			to.x=fn.x+dx[i];
			to.y=fn.y+dy[i];
			#ifdef DEBUG
				system("echo debug_2");
				system("pause");
				printf("\n");
				printf("%d %d\n %d %d\n", to.x, to.y, fn.x, fn.y);
			#endif
			if(to.x >= 0 && to.x < n && to.y >= 0 && to.y < m && vis[to.x][to.y] != 1 && mp[to.x][to.y] != '#'){//从1开始存
				//system("pause");
				vis[to.x][to.y] = 1;
				node n1;
				n1.x=to.x;
				n1.y=to.y;
				q.push(n1);
			}
		}
		q.pop();
	}
	if(q.size() == 0)
		printf("NO\n");return 0;
}



/*
*
* Record: Debug the program by myself for the first time until Accepted!
* 2022/11/23 23:30:00 Wednesday
*/

