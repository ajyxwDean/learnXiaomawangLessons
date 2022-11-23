//xiaomawangLesson20221123 homework 18:00:00 ComprehensiveExercise
//<map> bonfireParty
/*
Title Description:
Xiaoming and his friends attended a bonfire party. Everyone danced
 in a circle hand in hand. Most people didn't know each other, so everyone 
only remembered who was on his left and right. Xiao Ming wants to exchange
 positions with his friends, but he can only exchange positions with 
people on his left or right hand each time. He asks how many exchanges
can be completed at least.


Input Format:
An integer n in the first line represents the total number of people
Next, there are n lines. Each line has three strings representing a person's name, 
the name of the person on the left and the name of the 
person on the right.
The last two strings represent the names of Xiao Ming and his friends


Output Format:
An integer represents the answer
Example of input and output


*/
/*

GitHub OpenSource:
https://github.com/ajyxwDean/learnXiaomawangLessons
GNU General Public License v3.0 : https://github.com/ajyxwDean/learnXiaomawangLessons/blob/main/LICENSE

*/
#include<bits/stdc++.h>
using namespace std;
map<string,string>m; //everypeople
int n,ans; //num, answer
int main(){
  string left,right,name;//xiaoming's left, xiaoming's right, xiaoming's name
  scanf("%d",&n);
  for(int i=0;i<n;i++){
     cin>>name>>left>>right;
    m[name]=left;
  }
  cin>>left>>right;
  while(left!=right){
    ans++;
    left=m[left];
  }
  printf("%d",min(ans,n-ans));
  return 0;
}
