#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;

struct student{
    char id[15];    //考虑一下为什么不能用int
    int score;
    int location_number;
    int rank;
    int rank2;
}stu[100];

bool cmp(student a,student b){
    if(a.score!=b.score){
        return a.score>b.score;
    }
    else{
        return strcmp(a.id,b.id)<0; //这个是字符数组
    }
}

int main(){
    int n,k,num=0;
    scanf("%d",n);
    for(int i=1;i<=n;i++){
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            scanf("%s %d",stu[num].id,stu[num].score);
            stu[num].location_number=i;
            num++;
        }
        sort(stu+num-k,stu+num,cmp);
        stu[num-k].rank=1;
        for(int j=num-k+1;j<num;j++){
            if(stu[j].score==stu[j-1].score){
                stu[j].rank=stu[j-1].rank;
            }
            else{
                stu[j].rank=j+1;
            }
        }
    }
    sort(stu,stu+num,cmp);
    stu[0].rank2=1;
    for(int i=1;i<num;i++){
        if(stu[i].score==stu[i-1].score){
            stu[i].rank2=stu[i-1].rank2;
        }
        else{
            stu[i].rank2=i+1;
        }
    }
    for(int i=0;i<num;i++){
        printf("%s %d %d %d\n",stu[i].id,stu[i].rank,stu[i].location_number,stu[i].rank2);
    }
} 

//不用rank2的做法,写在005.cpp