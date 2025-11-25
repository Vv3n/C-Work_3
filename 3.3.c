#include <stdio.h>

struct Student{
    int studentId;
    float score;
    char name[50];
};

int main(){

    int N,i;
    float AvgScore = 0.00;

    if(scanf("%d", &N) != 1){
        return 1;
    }

    struct Student students[N];

    for(i = 0; i < N; i++){
        if(scanf("%d %f %s", &students[i].studentId, &students[i].score, students[i].name) != 3){
            return 1;
        }

        AvgScore += students[i].score;
    }

    AvgScore /= N;
    printf("Average Score: %.2f",AvgScore);

    return 0;
}