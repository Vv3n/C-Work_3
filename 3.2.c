#include <stdio.h>

struct Student {
    char name[50];
    int studentId;
    float score;
};

int main(){
    int N, i;

    printf("Enter Number of Student: ");

    if(scanf("%d", &N) != 1){
        return 1;
    }


    struct Student student[N];


    for(i = 0; i < N; i++){

        if(scanf("%d %f %s", &student[i].studentId, &student[i].score, student[i].name) != 3){
            return 1;
        }
    }

    for(i = 0; i < N; i++){
        printf("ID:%d, Name:%s, Score:%.2f\n",student[i].studentId,student[i].name,student[i].score);
    }

    return 0;
}
