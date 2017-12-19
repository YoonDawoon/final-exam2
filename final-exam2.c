#include<stdio.h>
#include<termio.h>
#include<stdlib.h>
#define SIZE 5;

typedef struct Table
{
    int pch,ppo,pom,pbe,pso,ppeo,total,total2,num,so,be;
}table;

typedef struct Date
{
    int day;
}date;

table t[SIZE];
date d[SIZE];

void check(int);
void people(int);
void order(int);
void tanum();
void list(int);
void _list(int);
void pay(int);
void sales(void);
void total(int);
void Memo();

const char chi[10]="Chicken";
const char por[10]="Pork";
const char oml[10]="Omlet";
const char bee[10]="Beer";
const char soj[10]="Soju";
const int price[5]={20000, 13000, 18000, 4000, 3500};

int main(void)
{
    int select ts;
    do
    {
        printf("1. people \n2. order \n3. order list \n4. calculate \n5. day's sales \n6. quit \n\nselect: ");
        scanf("%d", &select);
        check(select);
    }while(select<7||select>0);
}

void check(int _select)
{
    int ts;

    switch (_select)
    {
        do
        {
            case 1:
                tanum();
                printf("Select the table: ");
                scanf("%d", &ts);
                people(ts);
                break;
            case 2:
                printf("select the table: ");
                scanf("%d", &ts);
                order(ts);
                break;
            case 3:
                printf("Select the table: ");
                scanf("%d", &ts);
                list(ts);
                break;
            case 4:
                printf("Select the table: ");
                scanf("%d", &ts);
                pay(ts);
                break;
            case 5:
                sales();
                break;
            default:
                break;
        }while(_select<6||_select>0;
    }
}

void order(int i)
{
   int sel;
    do
    {
        _list(i);
        printf("====order==== \n\n");
        printf("1. %s\n2. %s\n3. %s\n4. %s\n5. %s\n6. Quit", chi,por,oml,bee,soj);
        printf("\nSelect: ");
        scanf("%d", &sel);

        switch(sel)
        {
            case 1:
                t[i].pch++;
                break;
            case -1:
                if(t[i].pch>0)
                {
                    t[i].pch--;
                    break;
                }
			case 2:
                t[i].ppo++;
                break;
            case -2:
                if(t[i].ppo>0)
                {
                    t[i].ppo--;
                    break;
                }
            case 3:
                t[i].pom++;
                break;
            case -3:
                if(t[i].pom>0)
                {
                    t[i].pom--;
                    break;
                }
            case 4:
                t[i].pbe++;
                break;
            case -4:
                if(t[i].pbe>0)
                {
                    t[i].pbe--;
                    break;
                }
			case 5:
				t[i].pso++;
				break;
			case -5:
				if(t[i].pso>0)
				{
					t[i].pso--;
					break;
				}
        }
    }while(sel!=6)
    
    break;
    system("clear");
}

void list(int i)
{
    int qs;
    printf("====order list==== \n");
    _list(i);
    printf("Quit>>0:");
    scanf("%d", &qa);

    if(qs==0)
        break;
}

void _list(int i)
{
    if(p[i].pch!=0)
        printf("chicken: %d(%d) \n", p[i].pch*price[0], p[i].pch);
    if(p[i].ppo!=0)
        printf("chicken: %d(%d) \n", p[i].ppo*price[0], p[i].ppo);
    if(p[i].pom!=0)
        printf("chicken: %d(%d) \n", p[i].pom*price[0], p[i].pom);
    if(p[i].pbe!=0)
        printf("chicken: %d(%d) \n", p[i].pbe*price[0], p[i].pbe);
    if(p[i].pso!=0)
        printf("chicken: %d(%d) \n", p[i].pso*price[0], p[i].pso);
}


    
