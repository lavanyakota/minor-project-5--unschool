#include<stdio.h>
#include<string.h>
void add();
void list();
void edit();
void search();
void dele();
struct record
{
    char name[20],address[25],fname[20],mname[20],pno[10],gen[5],email[50],cno[20];
}p[1000];
int count=0;
int main()
{
    int select,c=1;
    printf("\t**********WELCOME TO PHONEBOOK**********\n");
    while(1)
    {
        printf("\t                 MENU                   \n");
        printf("1.Add New       2.List         3.Exit\n");
        printf("4.Modify        5.Search       6.Delete\n");
        scanf("%d",&select);
        while(select!=3)
        {
            if(select==1)
            {
                add();
                break;
            }
            else if(select==2)
            {
                list();
                break;
            }
            else if(select==4)
            {
                edit();
                break;
            }
            else if(select==5)
            {
                search();
                break;
            }
            else if(select==6)
            {
                dele();
                break;
            }
            else
            {
                printf("\nYOU HAVE ENTERED WRONG CHOICE..\n");
                printf("\nCHOOSE AGAIN..\n");
            }
        }
        if(select==3)
        {
            printf("  ");
            break;
        }
    }    
}
add()
{
    printf("Enter name:");
    scanf("%s",&p[count].name);
    printf("Enter the address:");
    scanf("%s",&p[count].address);
    printf("Enter father name:");
    scanf("%s",&p[count].fname);
    printf("Enter mother name:");
    scanf("%s",&p[count].mname);
    printf("Enter phone no.:");
    scanf("%s",&p[count].pno);
    printf("Enter sex:");
    scanf("%s",&p[count].gen);
    printf("Enter e-mail:");
    scanf("%s",&p[count].email);
    printf("Enter citizen no.:");
    scanf("%s",&p[count].cno);
    printf("\nContact Saved...\n");
    count=count+1;
    return;
}
list()
{
    int i;
    printf("\n************************************\n");
    for(i=0;i<count;i++)
    {
        printf("\n%d",i+1);
        printf("\n-----------");
        printf("\nName        :%s",p[i].name);
        printf("\nAddress     :%s",p[i].address);
        printf("\nFather Name :%s",p[i].fname);
        printf("\nMother Name :%s",p[i].mname);
        printf("\nPhone no.   :%s",p[i].pno);
        printf("\nSex         :%s",p[i].gen);
        printf("\nE-mail      :%s",p[i].email);
        printf("\nCitizen no. :%s\n",p[i].cno);
        printf("\n************************************\n");
    }
    return;
}
edit()
{
    char e_name[20];
    int i,n,choice,val;
    printf("\nEnter name of contact which you want to modify:");
    scanf("%s",&e_name);
    printf("Do you want to modify \n 1.whole contact \n 2.only particular detail\n");
    scanf("%d",&n);
    for(i=0;i<count;i++)
    {
        if(strcmp(p[i].name,e_name)==0)
        {
            val=i;
            break;
        }
            
    }
    if(n==1)
    {
        printf("Enter name:");
        scanf("%s",&p[val].name);
        printf("Enter the address:");
        scanf("%s",&p[val].address);
        printf("Enter father name:");
        scanf("%s",&p[val].fname);
        printf("Enter mother name:");
        scanf("%s",&p[val].mname);
        printf("Enter phone no.:");
        scanf("%s",&p[val].pno);
        printf("Enter sex:");
        scanf("%s",&p[val].gen);
        printf("Enter e-mail:");
        scanf("%s",&p[val].email);
        printf("Enter citizen no.:");
        scanf("%s",&p[val].cno);
        printf("Contact Modified...\n");
    }
    else if(n==2)
    {
        printf("What do you want to modify:\n");
        printf("1.name       2.address    3.fathername    4.mothername\n");
        printf("5.phone no.  6.sex        7.email         8.citizen no.\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("Enter name:");
                scanf("%s",&p[val].name);
                printf("Name Modified..");
                break;
            }
            case 2:
            {
                printf("Enter the address:");
                scanf("%s",&p[val].address);
                printf("Address Modified..");
                break;
            }
            case 3:
            {
                printf("Enter father name:");
                scanf("%s",&p[val].fname);
                printf("Father name Modified..");
                break;
            }
            case 4:
            {
                printf("Enter mother name:");
                scanf("%s",&p[val].mname);
                printf("Mother name Modified..");
                break;
            }
            case 5:
            {
                printf("Enter phone no.:");
                scanf("%s",&p[val].pno);
                printf("Phone no. Modified..");
                break;
            }
            case 6:
            {
                printf("Enter sex:");
                scanf("%s",&p[val].gen);
                printf("Modified..");
                break;
            }
            case 7:
            {
                printf("Enter e-mail:");
                scanf("%s",&p[val].email);
                printf("E-mail Modified..");
                break;
            }
            case 8:
            {
                printf("Enter citizen no.:");
                scanf("%s",&p[val].cno);
                printf("Citizen no. Modified..");
                break;
            }
            default:
            {
                printf("\nYOU HAVE ENTERED WRONG CHOICE..\n");
            }
        }
    }
    else
    {
        printf("\nERROR...\n");
    }
    printf("\n\nModified Contact is:\n\n");
    printf("\nName        :%s",p[val].name);
    printf("\nAddress     :%s",p[val].address);
    printf("\nFather Name :%s",p[val].fname);
    printf("\nMother Name :%s",p[val].mname);
    printf("\nPhone no.   :%s",p[val].pno);
    printf("\nSex         :%s",p[val].gen);
    printf("\nE-mail      :%s",p[val].email);
    printf("\nCitizen no. :%s\n",p[val].cno);
    return;
}
search()
{
    char s_name[20];
    int i;
    printf("\nEnter name to be searched:");
    scanf("%s",&s_name);
    for(i=0;i<count;i++)
    {
        if(strcmp(p[i].name,s_name)==0)
        {
            printf("\nName        :%s",p[i].name);
            printf("\nAddress     :%s",p[i].address);
            printf("\nFather Name :%s",p[i].fname);
            printf("\nMother Name :%s",p[i].mname);
            printf("\nPhone no.   :%s",p[i].pno);
            printf("\nSex         :%s",p[i].gen);
            printf("\nE-mail      :%s",p[i].email);
            printf("\nCitizen no. :%s\n",p[i].cno);
            break;
        }
    }
    return;
}
dele()
{
    char d_name[20],option;
    int i,j;
    printf("\nEnter name of the contact to be deleted:");
    scanf("%s",&d_name);
    for(i=0;i<count;i++)
    {
        if(strcmp(p[i].name,d_name)==0)
        {
            printf("\nName        :%s",p[i].name);
            printf("\nAddress     :%s",p[i].address);
            printf("\nFather Name :%s",p[i].fname);
            printf("\nMother Name :%s",p[i].mname);
            printf("\nPhone no.   :%s",p[i].pno);
            printf("\nSex         :%s",p[i].gen);
            printf("\nE-mail      :%s",p[i].email);
            printf("\nCitizen no. :%s\n",p[i].cno);
            printf("\n\nRemove Contact...(y/n):");
            scanf("%s",&option);
            if(option=='y'||option=='Y')
            {
                for(j=i;j<count;j++)
                {
                    strcpy(p[j].name,p[j+1].name);
                    strcpy(p[j].address,p[j+1].address);
                    strcpy(p[j].fname,p[j+1].fname);
                    strcpy(p[j].mname,p[j+1].mname);
                    strcpy(p[j].pno,p[j+1].pno);
                    strcpy(p[j].gen,p[j+1].gen);
                    strcpy(p[j].email,p[j+1].email);
                    strcpy(p[j].cno,p[j+1].cno);
                }
                count--;
                i--;
                printf("\nContact removed...\n");
            }
            else if(option=='n'||option=='N')
            {
                break;
            }
        }
        printf("\n");   
    }
    return;
}