#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main(void){
    char pass[N];
    int i, j, n, m, o;
    printf("文字数を入力してください:");
    scanf("%d", &n);
    printf("文字の種類を入力してください\n半角のみ:1, 全角も含める:2, 数字も含める:3, 記号も含める:4\n");
    printf("文字の種類:");
    scanf("%d", &m);
    printf("何個のパスワードを生成しますか？:");
    scanf("%d", &o);
    if(n<1 || n>N || m<1 || m>4 || o<1 || o>N){
        printf("エラー 有効な値を入力してください\n");
        return 0;
    } else {
        srand((unsigned)time(NULL));
        for(i=0; i<o; i++){
            for(int j=0; j<n; j++){
                switch(m){
                    case 1:
                        pass[j] = rand()%94+33;
                        break;
                    case 2:
                        pass[j] = rand()%94+33;
                        if(pass[j]>126){
                            pass[j] = rand()%94+33;
                        }
                        break;
                    case 3:
                        pass[j] = rand()%94+33;
                        if(pass[j]>126 || pass[j]<48){
                            pass[j] = rand()%94+33;
                        }
                        break;
                    case 4:
                        pass[j] = rand()%94+33;
                        if(pass[j]>126 || pass[j]<33){
                            pass[j] = rand()%94+33;
                        }
                        break;
                }
            }
            printf("%s\n", pass);
        }
    }

}