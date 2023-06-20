#include<stdio.h>
#include<string.h>
int main(){
    char names[10][50];
    int counta =0;
    int countb =0;
	int i;
    printf("Enter 10 names:\n");
    for (i=0; i<10; i++){
        printf("Name %d:",i+1);
		fgets(names[i], sizeof(names[i]), stdin);
	}
    
    for (i=0; i<10; i++){
        if(names[i][0] =='a' || names[i][0] =='A'){
            counta++;
        }
        if(names[i][0] =='b' || names[i][0] =='B'){
        	countb++;
		}
    }
    printf("Number of names starting with 'a': %d\n", counta);
    printf("Number of names starting with 'b': %d\n", countb);
    return 0;
}
