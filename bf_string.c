#include<stdio.h>

int BForceMatching(char[], int, char[], int);
void main(){
    int size,i, pattern_size;

    printf("Enter the size of a string: ");
    scanf("%d",&size);

    char char_array[size];

    printf("Enter the string: ");
    for(i=0;i<size;i++){
        scanf("%s",&char_array[i]);
    }

    printf("Enter the size of a pattern(string): ");
    scanf("%d",&pattern_size);

    char searching_pattern[pattern_size];
    printf("Enter the searching pattern: ");
    for(i=0;i<pattern_size;i++){
        scanf("%s", &searching_pattern[i]);
    }

    int result = BForceMatching(char_array,size,searching_pattern,pattern_size);
    if(result == 1)
    {
        printf("String matched successfully!!!");
    }
    else{
        printf("String not found!!!");
    }
}

int BForceMatching(char string[], int size,char  pattern[], int pattern_size){
    int i,j;

    for(i=0;i<=size - pattern_size;i++){
        for(j=0;j<pattern_size;j++){
            if(string[i+j] == pattern[j]){
                if (pattern_size -1 == j){
                    return 1;
                }
            }else{
                break;
            }
        }
    }
    return -1;
}