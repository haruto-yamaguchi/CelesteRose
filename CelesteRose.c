#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void hp(int a,int b){
    if(a >= 1000){
        printf("       \x1b[36mHP %d\x1b[37m    |",a);
    }
    else if(a >= 100){
        printf("       \x1b[36mHP %d\x1b[37m     |",a);
    }
    else if(a >= 10){
        printf("        \x1b[36mHP %d\x1b[37m     |",a);
    }
    else if(a >= 0){
        printf("        \x1b[36mHP %d\x1b[37m      |",a);
    }
    if(b >= 1000){
        printf("     \x1b[36mHP %d\x1b[37m     \n",b);
    }
    else if(b >= 100){
        printf("     \x1b[36mHP %d\x1b[37m      \n",b);
    }
    else if(b >= 10){
        printf("      \x1b[36mHP %d\x1b[37m      \n",b);
    }
    else if(b >= 0){
        printf("      \x1b[36mHP %d\x1b[37m       \n",b);
    }
}

void score(int a,int b,char apl[],char bpl[]){
    if(a > b){
        printf("\n  \x1b[37m%s      \x1b[32m•\x1b[37m  %d  -  %d  \x1b[31m•\x1b[37m      %s",apl,a,b,bpl);
        }
          if(b > a){
              printf("\n  \x1b[37m%s      \x1b[31m•\x1b[37m  %d  -  %d  \x1b[32m•\x1b[37m      %s",apl,a,b,bpl);
              }
          if(a == b){
              printf("\n  \x1b[37m%s      •  %d  -  %d  •      %s",apl,a,b,bpl);
              }
}

void name(char anam[],char bnam[]){
    printf("  \e[2m%s   VS   %s\e[0m\n",anam,bnam);
}

void time_limit(char anam[],char apl[],char bnam[],char bpl[],int asc,int bsc,time_t start_time,time_t end_time,int asct1,int asct2,int asct3,int asct4,int asct5,int asct6,int asct7,int asct8,int asct9,int asct10,int asct11,int asct12,int asct13,int asct14,int asct15,int bsct1,int bsct2,int bsct3,int bsct4,int bsct5,int bsct6,int bsct7,int bsct8,int bsct9,int bsct10,int bsct11,int bsct12,int bsct13,int bsct14,int bsct15,int aatt,int adet,int aavt,int saavt,int acot,int sacot,int aret,int aadt,int saadt,int batt,int bdet,int bavt,int sbavt,int bcot,int sbcot,int bret,int badt,int sbadt,int toaat,int tobat,int toare, int tobre,int oaat,int oaco,int oaad,int obat,int obco,int obad,int aadc,int badc,int asaat,int asbat,int alot,int blot,int adep,int bdep,int aavp,int bavp,int tu){
    end_time = time(NULL);
    int i;
    int asmin[15];
    int assec[15];
    int bsmin[15];
    int bssec[15];
    int aw,bw;
    int asct[] = {asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15};
    int bsct[] = {bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15};
    if(end_time - start_time <= 600){
        time_t minute_taken = (end_time - start_time) / 60;
        time_t second_taken = (end_time - start_time) % 60;
        time_t minute_limit = 9 - minute_taken;
        time_t second_limit = 60 - second_taken;
        if(second_limit == 60){
            minute_limit = minute_limit + 1;
        }
        if(second_limit == 60){
            second_limit = 0;
        }
        if(minute_limit < 0){
            minute_limit = 0;
            second_limit = 0;
        }
        if((int)second_limit > 9){
            printf("\n               %d　:　%d     TURN %d\n",(int)minute_limit,(int)second_limit,tu);
        }
        else{
            printf("\n               %d　:　0%d     TURN %d\n",(int)minute_limit,(int)second_limit,tu);
        }
        if(minute_limit == 0 && second_limit == 0){
            sleep(1);
            if(asc != bsc){
                printf("\n\n\n");
                name(anam,bnam);
                printf("\n\n\n               finish\n\n");
                score(asc,bsc,apl,bpl);
                printf("\n\n");
                sleep(5);
                printf("%d\t得点\t%d",asc,bsc);
                printf("\n");
                for(i = 0;i < 15;i++){
                    asmin[i] = asct[i] / 60;
                    assec[i] = asct[i] % 60;
                    if(asmin[i] != 0 || assec[i] != 0){
                        printf("%d:%d ",(int)asmin[i],(int)assec[i]);
                    }
                }
                printf("\t得点時間\t");
                for(i = 0;i < 15;i++){
                    bsmin[i] = bsct[i] / 60;
                    bssec[i] = bsct[i] % 60;
                    if(bsmin[i] != 0 || bssec[i] != 0){
                        printf("%d:%d ",(int)bsmin[i],(int)bssec[i]);
                    }
                }
                if(asc > bsc){
                    aw = 3; bw = 0;
                }
                if(bsc > asc){
                    aw = 0; bw = 3;
                }
                if(asc == bsc){
                    aw = 1; bw = 1;
                }
                printf("\n%d\t勝ち点\t%d",aw,bw);
                printf("\n%d\t攻撃回数\t%d",aatt,batt);
                printf("\n%d\t総攻撃量\t%d",toaat,tobat);
                printf("\n%d\tターン平均攻撃量\t%d",toaat / tu,tobat / tu);
                printf("\n%d\t攻撃による攻撃量\t%d",oaat,obat);
                printf("\n%d\t期待された攻撃量\t%d",asaat,asbat);
                printf("\n%d\t防いだ攻撃量\t%d",asbat - obat,asaat - oaat);
                printf("\n%d\t防御により防いだ攻撃量\t%d",adep,bdep);
                printf("\n%d\t回避により防いだ攻撃量\t%d",aavp,bavp);
                printf("\n%d\t反撃による攻撃量\t%d",oaco,obco);
                printf("\n%d\t追加による攻撃量\t%d",oaad,obad);
                printf("\n%d\t防御回数\t%d",adet,bdet);
                printf("\n%d\t回避回数\t%d",aavt,bavt);
                printf("\n%d(%d%%)\t回避成功回数\t%d(%d%%)",saavt,(saavt * 100) / aavt,sbavt,(sbavt * 100) / bavt);
                printf("\n%d\t反撃回数\t%d",acot,bcot);
                printf("\n%d(%d%%)\t反撃成功回数\t%d(%d%%)",sacot,(sacot * 100) / acot,sbcot,(sbcot * 100) / bcot);
                printf("\n%d\t回復回数\t%d",aret,bret);
                printf("\n%d\t総回復量\t%d",toare,tobre);
                printf("\n%d\tターン平均回復量\t%d",toare / tu,tobre / tu);
                printf("\n%d\t追加回数\t%d",aadt,badt);
                printf("\n%d(%d%%)\t追加成功回数\t%d(%d%%)",saadt,(saadt * 100) / aadt,sbadt,(sbadt * 100) / badt);
                printf("\n%d\t最高連続追加成功回数\t%d",aadc,badc);
                printf("\n%d\t失われた体力\t%d\n",alot,blot);
                exit(0);
            }
        }
    }
    else{
        time_t minute_taken = (end_time - start_time) / 60 - 10;
        time_t second_taken = (end_time - start_time) % 60;
        if((int)second_taken > 9){
            printf("\n  sudden death %d  :  %d     TURN %d\n",(int)minute_taken,(int)second_taken,tu);
        }
        else{
            printf("\n  sudden death %d　:　0%d     TURN %d\n",(int)minute_taken,(int)second_taken,tu);
        }
        if(asc != bsc){
            sleep(1);
            printf("\n\n\n");
            name(anam,bnam);
            printf("\n\n\n               finish\n\n");
            score(asc,bsc,apl,bpl);
            printf("\n\n");
            sleep(5);
            printf("%d\t得点\t%d",asc,bsc);
            printf("\n");
            for(i = 0;i < 15;i++){
                asmin[i] = asct[i] / 60;
                assec[i] = asct[i] % 60;
                if(asmin[i] != 0 || assec[i] != 0){
                    printf("%d:%d ",(int)asmin[i],(int)assec[i]);
                }
            }
            printf("\t得点時間\t");
            for(i = 0;i < 15;i++){
                bsmin[i] = bsct[i] / 60;
                bssec[i] = bsct[i] % 60;
                if(bsmin[i] != 0 || bssec[i] != 0){
                    printf("%d:%d ",(int)bsmin[i],(int)bssec[i]);
                }
            }
            if(asc > bsc){
                aw = 3; bw = 0;
            }
            if(bsc > asc){
                aw = 0; bw = 3;
            }
            if(asc == bsc){
                aw = 1; bw = 1;
            }
            printf("\n%d\t勝ち点\t%d",aw,bw);
            printf("\n%d\t攻撃回数\t%d",aatt,batt);
            printf("\n%d\t総攻撃量\t%d",toaat,tobat);
            printf("\n%d\tターン平均攻撃量\t%d",toaat / tu,tobat / tu);
            printf("\n%d\t攻撃による攻撃量\t%d",oaat,obat);
            printf("\n%d\t期待された攻撃量\t%d",asaat,asbat);
            printf("\n%d\t防いだ攻撃量\t%d",asbat - obat,asaat - oaat);
            printf("\n%d\t防御により防いだ攻撃量\t%d",adep,bdep);
            printf("\n%d\t回避により防いだ攻撃量\t%d",aavp,bavp);
            printf("\n%d\t反撃による攻撃量\t%d",oaco,obco);
            printf("\n%d\t追加による攻撃量\t%d",oaad,obad);
            printf("\n%d\t防御回数\t%d",adet,bdet);
            printf("\n%d\t回避回数\t%d",aavt,bavt);
            printf("\n%d(%d%%)\t回避成功回数\t%d(%d%%)",saavt,(saavt * 100) / aavt,sbavt,(sbavt * 100) / bavt);
            printf("\n%d\t反撃回数\t%d",acot,bcot);
            printf("\n%d(%d%%)\t反撃成功回数\t%d(%d%%)",sacot,(sacot * 100) / acot,sbcot,(sbcot * 100) / bcot);
            printf("\n%d\t回復回数\t%d",aret,bret);
            printf("\n%d\t総回復量\t%d",toare,tobre);
            printf("\n%d\tターン平均回復量\t%d",toare / tu,tobre / tu);
            printf("\n%d\t追加回数\t%d",aadt,badt);
            printf("\n%d(%d%%)\t追加成功回数\t%d(%d%%)",saadt,(saadt * 100) / aadt,sbadt,(sbadt * 100) / badt);
            printf("\n%d\t最高連続追加成功回数\t%d",aadc,badc);
            printf("\n%d\t失われた体力\t%d\n",alot,blot);
            exit(0);
        }
    }
    sleep(1);
}


int rand_num(int num[],int a[],int b[]){
    int temp,i,j,ran[6];
    for(i = 0;i < 7;i++){
        for(j = i + 1;j < 7;j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    do{
        for(i = 0;i < 3;i++){
            ran[i] = rand() % 100 + 1;
            if(0 <= ran[i] && ran[i] < a[0]){
                num[i] = 1;
            }
            for(j = 1;j < 7;j++){
                if(a[j - 1] <= ran[i] && ran[i] < a[j]){
                    num[i] = j + 1;
                }
            }
            if(a[6] <= ran[i]){
                num[i] = 8;
            }
        }
    }while((num[0] == num[1]) || (num[1] == num[2]) || (num[2] == num[0]));
    for(i = 0;i < 7;i++){
        for(j = i + 1;j < 7;j++){
            if(b[i] > b[j]){
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    do{
        for(i = 3;i < 6;i++){
            ran[i] = rand() % 100 + 1;
            if(0 <= ran[i] && ran[i] < b[0]){
                num[i] = 1;
            }
            for(j = 1;j < 7;j++){
                if(b[j - 1] <= ran[i] && ran[i] < b[j]){
                    num[i] = j + 1;
                }
            }
            if(b[6] <= ran[i]){
                num[i] = 8;
            }
        }
    }while((num[3] == num[4]) || (num[4] == num[5]) || (num[5] == num[3]));
    for(i = 6;i < 12;i++){
        num[i] = rand() % 100 + 1;
    }
    
    return num[12];
}

int a_attack(int num[]){
    int n = 0,i,j;
    for(i = 0;i < 3;i++){
        for(j = 0;j < 3;j++){
            if(num[i] == j + 1){
                n++;
            }
        }
    }
    return n;
}

void a_attackp(int aatn){
    if(aatn == 3){
        printf("    TRIPLEATTACK  |");
    }
    else if(aatn == 2){
        printf("    DOUBLEATTACK  |");
    }
    else if(aatn == 1){
        printf("       ATTACK     |");
    }
}

int a_defence(int num[]){
    int n = 0,i;
    for(i = 0;i < 3;i++){
        if(num[i] == 4){
            n++;
        }
    }
    return n;
}

void a_defencep(int n){
    if(n == 1){
        printf("      DEFENCE     |");
    }
    else{
        printf("\n");
    }
}

int a_avoid(int num[]){
    int n = 0,i;
    for(i = 0;i < 3;i++){
        if(num[i] == 5){
            n++;
        }
    }
    return n;
}

void a_avoidp(int n){
    if(n == 1){
        printf("  AVOID  ");
    }
}

void a_avoidc(int n,int p,int r){
    if(n == 1){
        if(r <= p){
            printf("\x1b[33mSUCCEED\x1b[37m  |");
        }
        else{
            printf("  \x1b[35mFAIL\x1b[37m   |");
        }
    }
}

int a_counter(int num[]){
    int n = 0,i;
    for(i = 0;i < 3;i++){
        if(num[i] == 6){
            n++;
        }
    }
    return n;
}

void a_counterp(int n){
    if(n == 1){
        printf("  COUNTER  ");
    }
}

void a_counterc(int n,int p,int r){
    if(n == 1){
        if(r <= p){
            printf("\x1b[33mSUCCEED\x1b[37m|");
        }
        else{
            printf("  \x1b[35mFAIL\x1b[37m |");
        }
    }
}

int a_recover(int num[]){
    int n = 0,i;
    for(i = 0;i < 3;i++){
        if(num[i] == 7){
            n++;
        }
    }
    return n;
}

void a_recoverp(int n){
    if(n == 1){
        printf("      RECOVER     |");
    }
    else{
        printf("                  |");
    }
}

int a_addition(int num[]){
    int n = 0,i;
    for(i = 0;i < 3;i++){
        if(num[i] == 8){
            n++;
        }
    }
    return n;
}

void a_additionp(int n){
    if(n == 1){
        printf("  ADDITION ");
    }
}

void a_additionc(int n,int p,int r){
    if(n == 1){
        if(r <= p){
            printf("\x1b[33mSUCCEED\x1b[37m|");
        }
        else{
            printf("  \x1b[35mFAIL\x1b[37m |");
        }
    }
}

int b_attack(int num[]){
    int n = 0,i,j;
    for(i = 0;i < 3;i++){
        for(j = 0;j < 3;j++){
            if(num[i] == j + 1){
                n++;
            }
        }
    }
    return n;
}

void b_attackp(int batn){
    if(batn == 3){
        printf("  TRIPPLEATTACK");
    }
    else if(batn == 2){
        printf("  DOUBLEATTACK  ");
    }
    else if(batn == 1){
        printf("     ATTACK     ");
    }
}

int b_defence(int num[]){
    int n = 0,i;
    for(i = 0;i < 3;i++){
        if(num[i] == 4){
            n++;
        }
    }
    return n;
}

void b_defencep(int n){
    if(n == 1){
        printf("    DEFENCE");
    }
}

int b_avoid(int num[]){
    int n = 0,i;
    for(i = 0;i < 3;i++){
        if(num[i] == 5){
            n++;
        }
    }
    return n;
}

void b_avoidp(int n){
    if(n == 1){
        printf("AVOID  ");
    }
}

void b_avoidc(int n,int p,int r){
    if(n == 1){
        if(r <= p){
            printf("\x1b[33mSUCCEED\x1b[37m");
        }
        else{
            printf("  \x1b[35mFAIL\x1b[37m");
        }
    }
}

int b_counter(int num[]){
    int n = 0,i;
    for(i = 0;i < 3;i++){
        if(num[i] == 6){
            n++;
        }
    }
    return n;
}

void b_counterp(int n){
    if(n == 1){
        printf("COUNTER  ");
    }
}

void b_counterc(int n,int p,int r){
    if(n == 1){
        if(r <= p){
            printf("\x1b[33mSUCCEED\x1b[37m");
        }
        else{
            printf("  \x1b[35mFAIL\x1b[37m");
        }
    }
}

int b_recover(int num[]){
    int n = 0,i;
    for(i = 0;i < 3;i++){
        if(num[i] == 7){
            n++;
        }
    }
    return n;
}

void b_recoverp(int n){
    if(n == 1){
        printf("    RECOVER     \n                  |");
    }
}

int b_addition(int num[]){
    int n = 0,i;
    for(i = 0;i < 3;i++){
        if(num[i] == 8){
            n++;
        }
    }
    return n;
}

void b_additionp(int n){
    if(n == 1){
        printf("ADDITION ");
    }
}

void b_additionc(int n,int p,int r){
    if(n == 1){
        if(r <= p){
            printf("\x1b[33mSUCCEED\x1b[37m");
        }
        else{
            printf("  \x1b[35mFAIL\x1b[37m ");
        }
    }
    printf("\n                  |");
}

int main(void){
    srand((unsigned)time(NULL));
    int ahp,aat,ade,aav,aco,are,aad,acop,ahpf,aadf,asa,ast,bhp,bat,bde,bav,bco,bre,bad,bcop,bhpf,badf,bsa,bst,num[12],anum[3],bnum[3],aavr,bavr,acor,bcor,aadr,badr,i,asc = 0,bsc = 0,aatn,acon,aavn,aden,aren,aadn,batn,bcon,bavn,bden,bren,badn,aatm,batm,aty[7],bty[7],ascn = 0,bscn = 0,aatt = 0,adet = 0,aavt = 0,saavt = 0,acot = 0,sacot = 0,aret = 0,aadt = 0,saadt = 0,batt = 0,bdet = 0,bavt = 0,sbavt = 0,bcot = 0,sbcot = 0,bret = 0,badt = 0,sbadt = 0,toaat = 0,tobat = 0,toare = 0,tobre = 0,oaat = 0,oaco = 0,oaad = 0,obat = 0,obco = 0,obad = 0,aadc = 0,taadc = 0,badc = 0,tbadc = 0,asaat = 0,asbat = 0,ran,alo,blo,alot = 0,blot = 0,adep = 0,bdep = 0,aavp = 0,bavp = 0,tu = 0;
    char anam[32],bnam[32],apl[16],bpl[16],c;
    time_t st,ed = 0,asct[15],bsct[15];
    printf("  \x1b[37msetup: ");
    scanf("%s %s %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",anam,apl,&ahp,&aat,&ade,&aav,&aco,&acop,&are,&aad,&asa,&ast,&aty[0],&aty[1],&aty[2],&aty[3],&aty[4],&aty[5],&aty[6]);
    scanf("%s %s %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d  %d",bnam,bpl,&bhp,&bat,&bde,&bav,&bco,&bcop,&bre,&bad,&bsa,&bst,&bty[0],&bty[1],&bty[2],&bty[3],&bty[4],&bty[5],&bty[6]);
    ahpf = ahp; aadf = aad;
    bhpf = bhp; badf = bad;
    ade = 100 - ade; bde = 100 - bde;
    asa = 90 - asa + 50; bsa = 90 - bsa + 50;
    if(ade > 100)
        ade = 100;
    if(ade < 0)
        ade = 0;
    if(bde > 100)
        bde = 100;
    if(bde < 0)
        bde = 0;
    printf("\n\n\n\n\n\n\n\n\n\n            starting soon\n\n\n\n\n");
    sleep(5);
        st = time(NULL);
        while(1){
            int asct1 = (int)asct[0]; int asct2 = (int)asct[1]; int asct3 = (int)asct[2]; int asct4 = (int)asct[3]; int asct5 = (int)asct[4]; int asct6 = (int)asct[5]; int asct7 = (int)asct[6]; int asct8 = (int)asct[7]; int asct9 = (int)asct[8]; int asct10 = (int)asct[9]; int asct11 = (int)asct[10]; int asct12 = (int)asct[11]; int asct13 = (int)asct[12]; int asct14 = (int)asct[13]; int asct15 = (int)asct[14];
            int bsct1 = (int)bsct[0]; int bsct2 = (int)bsct[1]; int bsct3 = (int)bsct[2]; int bsct4 = (int)bsct[3]; int bsct5 = (int)bsct[4]; int bsct6 = (int)bsct[5]; int bsct7 = (int)bsct[6]; int bsct8 = (int)bsct[7]; int bsct9 = (int)bsct[8]; int bsct10 = (int)bsct[9]; int bsct11 = (int)bsct[10]; int bsct12 = (int)bsct[11]; int bsct13 = (int)bsct[12]; int bsct14 = (int)bsct[13]; int bsct15 = (int)bsct[14];
            
            ahp = ahpf; bhp = bhpf;
            while(ahp > 0 && bhp > 0){
                tu++;
                aad = aadf; bad = badf;
                rand_num(num,aty,bty);
                for(i = 0;i < 3;i++){
                    anum[i] = num[i];
                }
                for(i = 0;i < 3;i++){
                    bnum[i] = num[i + 3];
                }
                aavr = num[6]; acor = num[7]; aadr = num[8]; bavr = num[9]; bcor = num[10]; badr = num[11];
                
                aatn = a_attack(anum);
                if(aatn > 0){
                    aatt += aatn;
                    asaat += aat * aatn;
                    
                    bcon = b_counter(bnum);
                    bavn = b_avoid(bnum);
                    bden = b_defence(bnum);
                    
                    printf("\n\n\n");
                    name(anam,bnam); printf("\n"); hp(ahp,bhp);
                    a_attackp(aatn);
                    printf("\n                  |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                    score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                    
                    if(bcon == 1){
                        bcot += 1;
                        
                        printf("\n\n\n");
                        name(anam,bnam); printf("\n"); hp(ahp,bhp);
                        a_attackp(aatn);
                        b_counterp(bcon);
                        printf("\n                  |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                        score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                        
                        if(bcor <= bco){
                            sbcot += 1;
                            printf("\n\n\n");
                            name(anam,bnam);
                            batm = (aat * aatn * bcop) / 100;
                            if(ahp - batm < 0){
                                tobat += ahp;
                                obco += ahp;
                                
                                printf("         \x1b[36m-%d\x1b[37m\n",ahp);
                                ahp = 0;
                            }
                            else{
                                tobat += batm;
                                obco += batm;
                                
                                printf("         \x1b[36m-%d\x1b[37m\n",batm);
                                ahp = ahp - batm;
                            }
                        }
                        else{
                            printf("\n\n\n");
                            name(anam,bnam); printf("\n");
                        }
                        
                        hp(ahp,bhp);
                        a_attackp(aatn);
                        b_counterp(bcon);
                        b_counterc(bcon,bco,bcor);
                        printf("\n                  |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                        score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                    }
                    
                    if(bcon == 0 || bcor > bco){
                        if(bavn == 1){
                            bavt += 1;
                            
                            printf("\n\n\n");
                            name(anam,bnam); printf("\n"); hp(ahp,bhp);
                            a_attackp(aatn);
                            b_counterp(bcon);
                            b_counterc(bcon,bco,bcor);
                            if(bcon == 1){
                                printf("\n                  |");
                            }
                            b_avoidp(bavn);
                            if(bcon == 0){
                                printf("\n                  |");
                            }
                            printf("\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                            score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                            
                            printf("\n\n\n");
                            name(anam,bnam); printf("\n"); hp(ahp,bhp);
                            a_attackp(aatn);
                            b_counterp(bcon);
                            b_counterc(bcon,bco,bcor);
                            if(bcon == 1){
                                printf("\n                  |");
                            }
                            b_avoidp(bavn);
                            b_avoidc(bavn,bav,bavr);
                            if(bcon == 0){
                                printf("\n                  |");
                            }
                            printf("\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                            score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                            
                            if(bavr < bav){
                                sbavt += 1;
                                bavp += aat * aatn;
                            }
                        }
                        
                        if(bavn == 0 || bavr > bav){
                            if(bden == 1){
                                bdet += 1;
                                printf("\n\n\n");
                                name(anam,bnam);
                                aatm = (aat * aatn * bde) / 100;
                                if(bhp - aatm < 0){
                                    toaat += bhp;
                                    oaat += bhp;
                                    
                                    printf("                          \x1b[36m-%d\x1b[37m\n",bhp);
                                    bhp = 0;
                                }
                                else{
                                    toaat += aatm;
                                    oaat += aatm;
                                    bdep += (aat * aatn) - aatm;
                                    
                                    printf("                          \x1b[36m-%d\x1b[37m\n",aatm);
                                    bhp = bhp - aatm;
                                }
                                
                                hp(ahp,bhp);
                                a_attackp(aatn);
                                b_counterp(bcon);
                                b_counterc(bcon,bco,bcor);
                                if(bcon == 1){
                                    printf("\n                  |");
                                }
                                b_avoidp(bavn);
                                b_avoidc(bavn,bav,bavr);
                                if(bavn == 1){
                                    printf("\n                  |");
                                }
                                b_defencep(bden);
                                if(bcon == 0){
                                    printf("\n                  |");
                                }
                                if(bavn == 0){
                                    printf("\n                  |");
                                }
                                printf("\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                            }
                            
                            else{
                                printf("\n\n\n");
                                name(anam,bnam);
                                aatm = aat * aatn;
                                if(bhp - aatm < 0){
                                    toaat += bhp;
                                    oaat += bhp;
                                    
                                    printf("                          \x1b[36m-%d\x1b[37m\n",bhp);
                                    bhp = 0;
                                }
                                else{
                                    toaat += aatm;
                                    oaat += aatm;
                                    
                                    printf("                          \x1b[36m-%d\x1b[37m\n",aatm);
                                    bhp = bhp - aatm;
                                }
                                hp(ahp,bhp);
                                a_attackp(aatn);
                                b_counterp(bcon);
                                b_counterc(bcon,bco,bcor);
                                if(bcon == 1){
                                    printf("\n                  |");
                                }
                                b_avoidp(bavn);
                                b_avoidc(bavn,bav,bavr);
                                if(bavn == 1){
                                    printf("\n                  |");
                                    if(bden == 1){
                                        printf("                  |");
                                    }
                                }
                                b_defencep(bden);
                                if(bcon == 0){
                                    printf("\n                  |");
                                }
                                if(bavn == 0){
                                    printf("\n                  |");
                                }
                                printf("\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                            }
                        }
                    }
                }
                
                batn = b_attack(bnum);
                if(batn > 0){
                    batt += batn;
                    asbat += bat * batn;
                    
                    acon = a_counter(anum);
                    aavn = a_avoid(anum);
                    aden = a_defence(anum);
                    
                    printf("\n\n\n");
                    name(anam,bnam); printf("\n"); hp(ahp,bhp);
                    printf("                  |");
                    b_attackp(batn);
                    printf("\n                  |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                    score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                    
                    if(acon == 1){
                        acot += 1;
                        
                        printf("\n\n\n");
                        name(anam,bnam); printf("\n"); hp(ahp,bhp);
                        a_counterp(acon);
                        printf("       |");
                        b_attackp(batn);
                        printf("\n                  |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                        score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                        
                        if(acor <= aco){
                            sacot += 1;
                            
                            printf("\n\n\n");
                            name(anam,bnam);
                            aatm = (bat * batn * acop) / 100;
                            if(bhp - aatm < 0){
                                toaat += bhp;
                                oaco += bhp;
                                
                                printf("                          \x1b[36m-%d\x1b[37m\n",bhp);
                                bhp = 0;
                            }
                            else{
                                toaat += aatm;
                                oaco += aat;
                                
                                printf("                          \x1b[36m-%d\x1b[37m\n",aatm);
                                bhp = bhp - aatm;
                            }
                        }
                        else{
                            printf("\n\n\n");
                            name(anam,bnam); printf("\n");
                        }
                        hp(ahp,bhp);
                        a_counterp(acon);
                        a_counterc(acon,aco,acor);
                        b_attackp(batn);
                        printf("\n                  |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                        score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                    }
                    
                    if(acon == 0 || acor > aco){
                        if(acon == 0){
                            if(aavn == 1){
                                aavt += 1;
                                
                                printf("\n\n\n");
                                name(anam,bnam); printf("\n"); hp(ahp,bhp);
                                a_avoidp(aavn);
                                printf("         |");
                                b_attackp(batn);
                                printf("\n                  |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                                
                                printf("\n\n\n");
                                name(anam,bnam); printf("\n"); hp(ahp,bhp);
                                a_avoidp(aavn);
                                a_avoidc(aavn,aav,aavr);
                                b_attackp(batn);
                                printf("\n                  |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                                
                                if(aavr < aav){
                                    saavt += 1;
                                    aavp += bat * batn;
                                }
                            }
                            
                            if(aavn == 0 || aavr > aav){
                                if(aavn == 0){
                                    if(aden == 1){
                                        adet += 1;
                                        
                                        printf("\n\n\n");
                                        name(anam,bnam);
                                        batm = (bat * batn * ade) / 100;
                                        if(ahp - batm < 0){
                                            tobat += ahp;
                                            obat += ahp;
                                            
                                            printf("         \x1b[36m-%d\x1b[37m\n",ahp);
                                            ahp = 0;
                                        }
                                        else{
                                            tobat += batm;
                                            obat += batm;
                                            
                                            printf("         \x1b[36m-%d\x1b[37m\n",batm);
                                            ahp = ahp - batm;
                                        }
                                        
                                        hp(ahp,bhp);
                                        a_defencep(aden);
                                        b_attackp(batn);
                                        printf("\n                  |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                        score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                                    }
                                    
                                    else{
                                        printf("\n\n\n");
                                        batm = bat * batn;
                                        name(anam,bnam);
                                        if(ahp - batm < 0){
                                            tobat += ahp;
                                            obat += ahp;
                                            
                                            printf("         \x1b[36m-%d\x1b[37m\n",ahp);
                                            ahp = 0;
                                        }
                                        else{
                                            tobat += batm;
                                            obat += batm;
                                            
                                            printf("         \x1b[36m-%d\x1b[37m\n",batm);
                                            ahp = ahp - batm;
                                        }
                                        hp(ahp,bhp);
                                        printf("                  |");
                                        b_attackp(batn);
                                        printf("\n                  |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                        score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                                    }
                                }
                                else{
                                    if(aden == 1){
                                        printf("\n\n\n");
                                        name(anam,bnam);
                                        batm = (bat * batn * ade) / 100;
                                        if(ahp - batm < 0){
                                            tobat += ahp;
                                            obat += ahp;
                                            
                                            printf("         \x1b[36m-%d\x1b[37m\n",ahp);
                                            ahp = 0;
                                        }
                                        else{
                                            tobat += batm;
                                            obat += batm;
                                            adep += (bat * batn) - batm;
                                            
                                            printf("         \x1b[36m-%d\x1b[37m\n",batm);
                                            ahp = ahp - batm;
                                        }
                                        
                                        hp(ahp,bhp);
                                        a_avoidp(aavn);
                                        a_avoidc(aavn,aav,aavr);
                                        b_attackp(batn);
                                        printf("\n");
                                        a_defencep(aden);
                                        printf("\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                        score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                                    }
                                    
                                    else{
                                        printf("\n\n\n");
                                        name(anam,bnam);
                                        batm = bat * batn;
                                        if(ahp - batm < 0){
                                            tobat += ahp;
                                            obat += ahp;
                                            
                                            printf("         \x1b[36m-%d\x1b[37m\n",ahp);
                                            ahp = 0;
                                        }
                                        else{
                                            tobat += batm;
                                            obat += batm;
                                            
                                            printf("         \x1b[36m-%d\x1b[37m\n",batm);
                                            ahp = ahp - batm;
                                        }
                                        hp(ahp,bhp);
                                        a_avoidp(aavn);
                                        a_avoidc(aavn,aav,aavr);
                                        b_attackp(batn);
                                        printf("\n                  |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                        score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                                    }
                                }
                            }
                        }
                        else{
                            if(aavn == 1){
                                aavt += 1;
                                
                                printf("\n\n\n");
                                name(anam,bnam); printf("\n"); hp(ahp,bhp);
                                a_counterp(acon);
                                a_counterc(acon,aco,acor);
                                b_attackp(batn);
                                printf("\n");
                                a_avoidp(aavn);
                                printf("         |");
                                printf("\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                                
                                printf("\n\n\n");
                                name(anam,bnam); printf("\n"); hp(ahp,bhp);
                                a_counterp(acon);
                                a_counterc(acon,aco,acor);
                                b_attackp(batn);
                                printf("\n");
                                a_avoidp(aavn);
                                a_avoidc(aavn,aav,aavr);
                                printf("\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                                if(aavr < aav){
                                    saavt += 1;
                                    aavp += bat * batn;
                                }
                            }
                            
                            if(aavn == 0 || aavr > aav){
                                if(aavn == 0){
                                    if(aden == 1){
                                        adet += 1;
                                        
                                        printf("\n\n\n");
                                        name(anam,bnam);
                                        batm = (bat * batn * ade) / 100;
                                        if(ahp - batm < 0){
                                            tobat += ahp;
                                            obat += ahp;
                                            printf("         \x1b[36m-%d\x1b[37m\n",ahp);
                                            ahp = 0;
                                        }
                                        else{
                                            tobat += batm;
                                            obat += batm;
                                            adep += (bat * batn) - batm;
                                            
                                            printf("         \x1b[36m-%d\x1b[37m\n",batm);
                                            ahp = ahp - batm;
                                        }
                                        
                                        hp(ahp,bhp);
                                        a_counterp(acon);
                                        a_counterc(acon,aco,acor);
                                        b_attackp(batn);
                                        printf("\n");
                                        a_defencep(aden);
                                        printf("\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                        score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                                    }
                                    
                                    if(aden == 0){
                                        printf("\n\n\n");
                                        batm = bat * batn;
                                        name(anam,bnam);
                                        if(ahp - batm < 0){
                                            tobat += ahp;
                                            obat += ahp;
                                            
                                            printf("         \x1b[36m-%d\x1b[37m\n",ahp);
                                            ahp = 0;
                                        }
                                        else{
                                            tobat += batm;
                                            obat += batm;
                                            
                                            printf("         \x1b[36m-%d\x1b[37m\n",batm);
                                            ahp = ahp - batm;
                                        }
                                        hp(ahp,bhp);
                                        a_counterp(acon);
                                        a_counterc(acon,aco,acor);
                                        b_attackp(batn);
                                        printf("\n                  |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                        score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                                    }
                                }
                                else{
                                    if(aden == 1){
                                        adet += 1;
                                        
                                        printf("\n\n\n");
                                        name(anam,bnam);
                                        batm = (bat * batn * ade) / 100;
                                        if(ahp - batm < 0){
                                            tobat += ahp;
                                            obat += ahp;
                                            
                                            printf("         \x1b[36m-%d\x1b[37m\n",ahp);
                                            ahp = 0;
                                        }
                                        else{
                                            tobat += batm;
                                            obat += batm;
                                            adep += (bat * batn) - batm;
                                            
                                            printf("         \x1b[36m-%d\x1b[37m\n",batm);
                                            ahp = ahp - batm;
                                        }
                                        
                                        hp(ahp,bhp);
                                        a_counterp(acon);
                                        a_counterc(acon,aco,acor);
                                        b_attackp(batn);
                                        printf("\n");
                                        a_avoidp(aavn);
                                        a_avoidc(aavn,aav,aavr);
                                        printf("\n");
                                        a_defencep(aden);
                                        printf("\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                        score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                                    }
                                    
                                    if(aden == 0){
                                        printf("\n\n\n");
                                        name(anam,bnam);
                                        batm = bat * batn;
                                        if(ahp - batm < 0){
                                            tobat += ahp;
                                            obat += ahp;
                                            
                                            printf("         \x1b[36m-%d\x1b[37m\n",ahp);
                                            ahp = 0;
                                        }
                                        else{
                                            tobat += batm;
                                            obat += batm;
                                            
                                            printf("         \x1b[36m-%d\x1b[37m\n",batm);
                                            ahp = ahp - batm;
                                        }
                                        hp(ahp,bhp);
                                        a_counterp(acon);
                                        a_counterc(acon,aco,acor);
                                        b_attackp(batn);
                                        printf("\n");
                                        a_avoidp(aavn);
                                        a_avoidc(aavn,aav,aavr);
                                        printf("\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                        score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                                    }
                                }
                            }
                        }
                    }
                }
                
                aren = a_recover(anum);
                if(aren == 1){
                    aret += 1;
                    
                    printf("\n\n\n");
                    name(anam,bnam);
                    if(ahp + are <= ahpf){
                        toare += are;
                        
                        printf("         \x1b[36m+%d\x1b[37m\n",are);
                        ahp = ahp + are;
                    }
                    else{
                        toare += ahpf - ahp;
                        
                        printf("         \x1b[36m+%d\x1b[37m\n",ahpf - ahp);
                        ahp = ahpf;
                    }
                    hp(ahp,bhp);
                    a_recoverp(aren);
                    printf("\n                  |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                    score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                }
                
                bren = b_recover(bnum);
                if(bren == 1){
                    bret += 1;
                    
                    printf("\n\n\n");
                    name(anam,bnam);
                    if(bhp + bre <= bhpf){
                        tobre += bre;
                        
                        printf("                          \x1b[36m+%d\x1b[37m\n",bre);
                        bhp = bhp + bre;
                    }
                    else{
                        tobre += bhpf - bhp;
                        
                        printf("                          \x1b[36m+%d\x1b[37m\n",bhpf - bhp);
                        bhp = bhpf;
                    }
                    hp(ahp,bhp);
                    a_recoverp(aren);
                    b_recoverp(bren);
                    printf("\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                    score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                }
                
                aadn = a_addition(anum);
                badn = b_addition(bnum);
                while(aadn == 1 || badn == 1){
                    if(aadn == 1){
                        aadt += 1;
                        
                        printf("\n\n\n");
                        name(anam,bnam); printf("\n"); hp(ahp,bhp);
                        a_additionp(aadn);
                        printf("       |\n                  |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                        score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                        
                        printf("\n\n\n");
                        name(anam,bnam); printf("\n"); hp(ahp,bhp);
                        a_additionp(aadn);
                        a_additionc(aadn,aad,aadr);
                        printf("\n                  |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                        score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                        
                        if(aadr <= aad){
                            saadt += 1;
                            taadc += 1;
                            
                            rand_num(num,aty,bty);
                            anum[0] = num[0]; anum[1] = num[1]; anum[2] = 0;
                            bnum[0] = 0; bnum[1] = 0; bnum[2] = 0;
                            
                            aatn = a_attack(anum);
                            if(aatn > 0){
                                aatt += 1;
                                
                                printf("\n\n\n");
                                name(anam,bnam);
                                aatm = aat * aatn * bsa / 100;
                                if(bhp - aatm < 0){
                                    toaat += bhp;
                                    oaad += bhp;
                                    
                                    printf("                          \x1b[36m-%d\x1b[37m\n",bhp);
                                    bhp = 0;
                                }
                                else{
                                    toaat += aatm;
                                    oaad += aatm;
                                    
                                    printf("                          \x1b[36m-%d\x1b[37m\n",aatm);
                                    bhp = bhp - aatm;
                                }
                                hp(ahp,bhp);
                                a_additionp(aadn);
                                a_additionc(aadn,aad,aadr);
                                printf("\n");
                                a_attackp(aatn);
                                printf("\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                            }
                            
                            aren = a_recover(anum);
                            if(aren == 1){
                                aret += 1;
                                
                                printf("\n\n\n");
                                name(anam,bnam);
                                if(ahp + are <= ahpf){
                                    toare += are;
                                    
                                    printf("         \x1b[36m+%d\x1b[37m\n",are);
                                    ahp = ahp + are;
                                }
                                else{
                                    toare += ahpf - ahp;
                                    
                                    printf("         \x1b[36m+%d\x1b[37m\n",ahpf - ahp);
                                    ahp = ahpf;
                                }
                                hp(ahp,bhp);
                                a_additionp(aadn);
                                a_additionc(aadn,aad,aadr);
                                printf("\n");
                                a_attackp(aatn);
                                if(aatn > 0){
                                    printf("\n");
                                }
                                a_recoverp(aren);
                                if(aatn == 0){
                                    printf("\n                  |");
                                }
                                printf("\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                            }
                            if(aatn == 0 && aren == 0){
                                printf("\n\n\n");
                                name(anam,bnam); printf("\n"); hp(ahp,bhp);
                                a_additionp(aadn);
                                a_additionc(aadn,aad,aadr);
                                printf("\n       NONE       |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                            }
                            aadn = a_addition(anum);
                            aad = aad / 2;
                        }
                        else{
                            aadn = 0;
                        }
                    }
                    else{
                        aadn = 0;
                    }
                    
                    if(badn == 1){
                        badt += 1;
                        
                        printf("\n\n\n");
                        name(anam,bnam); printf("\n"); hp(ahp,bhp);
                        printf("                  |");
                        b_additionp(badn);
                        printf("\n                  |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                        score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                        
                        printf("\n\n\n");
                        name(anam,bnam); printf("\n"); hp(ahp,bhp);
                        printf("                  |");
                        b_additionp(badn);
                        b_additionc(badn,bad,badr);
                        printf("\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                        score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                        
                        if(badr <= bad){
                            sbadt += 1;
                            tbadc += 1;
                            
                            rand_num(num,aty,bty);
                            anum[0] = 0; anum[1] = 0; anum[2] = 0;
                            bnum[0] = num[3]; bnum[1] = num[4]; bnum[2] = 0;
                            
                            batn = b_attack(bnum);
                            if(batn > 0){
                                batt += 1;
                                
                                printf("\n\n\n");
                                name(anam,bnam);
                                batm = bat * batn * asa / 100;
                                if(ahp - batm < 0){
                                    tobat += ahp;
                                    obad += ahp;
                                    
                                    printf("         \x1b[36m-%d\x1b[37m\n",ahp);
                                    ahp = 0;
                                }
                                else{
                                    tobat += batm;
                                    obad += batm;
                                    
                                    printf("         \x1b[36m-%d\x1b[37m\n",batm);
                                    ahp = ahp - batm;
                                }
                                hp(ahp,bhp);
                                printf("                  |");
                                b_additionp(badn);
                                b_additionc(badn,bad,badr);
                                b_attackp(batn);
                                printf("\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                            }
                            
                            bren = b_recover(bnum);
                            if(bren == 1){
                                bret += 1;
                                
                                printf("\n\n\n");
                                name(anam,bnam);
                                if(bhp + bre <= bhpf){
                                    tobre += bre;
                                    
                                    printf("                          \x1b[36m+%d\x1b[37m\n",bre);
                                    bhp = bhp + bre;
                                }
                                else{
                                    tobre += bhpf - bhp;
                                    printf("                          \x1b[36m+%d\x1b[37m\n",bhpf - bhp);
                                    bhp = bhpf;
                                }
                                hp(ahp,bhp);
                                printf("                  |");
                                b_additionp(badn);
                                b_additionc(badn,bad,badr);
                                b_attackp(batn);
                                if(batn > 0){
                                    printf("\n");
                                    printf("                  |");
                                }
                                printf("    RECOVER     ");
                                if(batn > 0){
                                    printf("\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                }
                                if(batn == 0){
                                    printf("\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                }
                                score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                            }
                            if(batn == 0 && bren == 0){
                                printf("\n\n\n");
                                name(anam,bnam); printf("\n"); hp(ahp,bhp);
                                printf("                  |ADDITION \x1b[33mSUCCEED\x1b[37m");
                                printf("\n                  |     NONE\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                                score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
                            }
                            badn = b_addition(bnum);
                            bad = bad / 2;
                        }
                        else{
                            badn = 0;
                        }
                    }
                    else{
                        badn = 0;
                    }
                }
                if(aadc < taadc){
                    aadc = taadc;
                }
                if(badc < tbadc){
                    badc = tbadc;
                }
                taadc = 0; tbadc = 0;
                
                printf("\n\n\n");
                name(anam,bnam);
                ran = rand() % 500 + 1;
                alo = ran - ast;
                if(ahp - alo < 0){
                    alo = ahp;
                    alot += alo;
                }
                if(alo > 0){
                    if(alo < 10){
                        printf("         \x1b[36m-%d\x1b[37m               ",alo);
                    }
                    if(10 < alo && alo < 100){
                        printf("         \x1b[36m-%d\x1b[37m              ",alo);
                    }
                    if(100 < alo && alo < 1000){
                        printf("         \x1b[36m-%d\x1b[37m             ",alo);
                    }
                    ahp = ahp - alo;
                    alot += alo;
                }
                if(alo <= 0){
                    printf("                          ");
                }
                ran = rand() % 500 + 1;
                blo = ran - bst;
                if(bhp - blo < 0){
                    blo = bhp;
                    blot += blo;
                }
                if(blo > 0){
                    printf("\x1b[36m-%d\x1b[37m\n",blo);
                    bhp = bhp - blo;
                    blot += blo;
                }
                else{
                    printf("\n");
                }
                hp(ahp,bhp);
                printf("      TURN END    |   NEXT TURN\n                  |\n                  |\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
            }
            if(bhp == 0 && ahp != 0){
                printf("\n\n\n");
                name(anam,bnam); printf("\n"); hp(ahp,bhp);
                printf("  \x1b[34mSCOREEEEEEEEEEEE\x1b[37m|\n  \x1b[34mEEEEEEEEEEEEEEEE\x1b[37m|\n  \x1b[34mEEEEEEEEEEEEEEED\x1b[37m|\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                asc += 1;
                asct[ascn] = time(NULL);
                asct[ascn] = asct[ascn] - st;
                ascn += 1;
                score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
            }
            if(ahp == 0 && bhp != 0){
                printf("\n\n\n");
                name(anam,bnam); printf("\n"); hp(ahp,bhp);
                printf("                  |\x1b[34mSCOREEEEEEEEEEEE\x1b[37m\n                  |\x1b[34mEEEEEEEEEEEEEEEE\x1b[37m\n                  |\x1b[34mEEEEEEEEEEEEEEED\x1b[37m\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                bsc += 1;
                bsct[bscn] = time(NULL);
                bsct[bscn] = bsct[bscn] - st;
                bscn += 1;
                score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
            }
            if(ahp == 0 && bhp == 0){
                printf("\n\n\n");
                name(anam,bnam); printf("\n"); hp(ahp,bhp);
                printf("  \x1b[34mSCOREEEEEEEEEEEE\x1b[37m|\x1b[34mSCOREEEEEEEEEEEE\n  \x1b[34mEEEEEEEEEEEEEEEE\x1b[37m|\x1b[34mEEEEEEEEEEEEEEEE\n  \x1b[34mEEEEEEEEEEEEEEED\x1b[37m|\x1b[34mEEEEEEEEEEEEEEED\x1b[37m\n ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿");
                asc += 1;
                asct[ascn] = time(NULL);
                asct[ascn] = asct[ascn] - st;
                ascn += 1;
                bsc += 1;
                bsct[bscn] = time(NULL);
                bsct[bscn] = bsct[bscn] - st;
                bscn += 1;
                score(asc,bsc,apl,bpl); time_limit(anam,apl,bnam,bpl,asc,bsc,st,ed,asct1,asct2,asct3,asct4,asct5,asct6,asct7,asct8,asct9,asct10,asct11,asct12,asct13,asct14,asct15,bsct1,bsct2,bsct3,bsct4,bsct5,bsct6,bsct7,bsct8,bsct9,bsct10,bsct11,bsct12,bsct13,bsct14,bsct15,aatt,adet,aavt,saavt,acot,sacot,aret,aadt,saadt,batt,bdet,bavt,sbavt,bcot,sbcot,bret,badt,sbadt,toaat,tobat,toare,tobre,oaat,oaco,oaad,obat,obco,obad,aadc,badc,asaat,asbat,alot,blot,adep,bdep,aavp,bavp,tu);
            }
        }
    return 0;
}
