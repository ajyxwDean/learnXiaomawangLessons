//xiaomawang Lesson 2022/11/23 20:00:00 Breath First Search
/*

#include <bits/stdc++.h>

using namespace std;

struct node{
	int x;
	int y;
};

queue <node> que;
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int n,m;
char mp[25][25];
bool vis[25][25];
int cnt=1;
int xxx,yyy;

void bfs(int a,int b){// search start at (a,b)
    node root;
    root.x=a;
    root.y=b;
    que.push(root);
    while(!que.empty()){  // if queue not NULL
        node fn = que.front();
        
        //find node if it can go
        for(int i = 0 ; i <= 3 ; i++){
            int nx=fn.x+dx[i];
            int ny=fn.y+dy[i];
            if(nx<=m-1&&nx>=0&&ny<=n-1&&ny>=0&&mp[nx][ny]!='#'&&vis[nx][ny] == false){
				cnt++;
				vis[nx][ny] = true;
				node n1;//go in the queue
				n1.x=nx;
				n1.y=ny;
				que.push(n1);
            }
        }
        que.pop();
    }
}

//Breadth First Search

int main(){
    cin>>n>>m;
    for(int i = 0 ; i < m ; i++){
    	for(int j = 0 ; j < n ; j++){
    		cin >> mp[i][j];
    		if(mp[i][j] == '@'){
    			xxx=i;
    			yyy=j;
			}
		}
	}
	bfs(xxx,yyy);
	printf("%d",cnt-1);
	return 0;
}


*/
/*
#include <bits/stdc++.h>

using namespace std;

char mp[25][25];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
int nx,ny;
int n,m;//n行m列 
bool vis[25][25];
int cnt=0;
int x,y;//找到x,y所在的位置

void dfs(int x,int y){
	vis[x][y] = true;
	if(x==n-1&&y==m-1) {
		cnt++; 
		return;
	}
	for(int i = 0 ; i <= 3 ; i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(mp[nx][ny] != '#'&& nx >= 0 && ny >= 0 && nx < n && ny < m && vis[nx][ny] == false){
			vis[nx][ny] = true;
			dfs(nx,ny);
			vis[nx][ny] = false;
		}
	}
}

int main(){
	//input
	cin >>n>>m;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cin >> mp[i][j];
		}
	}
	dfs(0,0);
	printf("%d",cnt);
	return 0;
}


#include <bits/stdc++.h>
using namespace std;
char mp[1005][1005];
int bfs[1005][1005];
bool visit[1005][1005];
int dx[4][2]={0,-1,0,1,-1,0,1,0};
int n,m;
void bfs(){
	
}*/

/*
#include <bits/stdc++.h>

using namespace std;

struct node{
	int x;
	int y;
};

queue <node> que;
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int n,m;
char mp[25][25];
bool vis[25][25];
int cnt=1;
int xxx,yyy;

void bfs(int a,int b){// search start at (a,b)
    node root;
    root.x=a;
    root.y=b;
    que.push(root);
    while(!que.empty()){  // if queue not NULL
        node fn = que.front();
        
        //find node if it can go
        for(int i = 0 ; i <= 3 ; i++){
            int nx=fn.x+dx[i];
            int ny=fn.y+dy[i];
            if(nx<=m-1&&nx>=0&&ny<=n-1&&ny>=0&&mp[nx][ny]!='#'&&vis[nx][ny] == false){
				cnt++;
				vis[nx][ny] = true;
				node n1;//go in the queue
				n1.x=nx;
				n1.y=ny;
				que.push(n1);
            }
        }
        que.pop();
    }
}

//Breadth First Search

int main(){
    cin>>n>>m;
    for(int i = 0 ; i < m ; i++){
    	for(int j = 0 ; j < n ; j++){
    		cin >> mp[i][j];
    		if(mp[i][j] == '@'){
    			xxx=i;
    			yyy=j;
			}
		}
	}
	bfs(xxx,yyy);
	printf("%d",cnt-1);
	return 0;
}*/


#include <bits/stdc++.h>
using namespace std;
int vis[1005][1005];
int dx[]
int main(){
	return 0;
}
