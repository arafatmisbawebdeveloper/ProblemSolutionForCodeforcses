#include <stdio.h>
#include <string.h>
#define MAX_SYMBOLS 200
#define NAME_LEN 50
#define TYPE_LEN 20
#define SCOPE_LEN 20
typedef struct{
    char name[NAME_LEN];
    char type[TYPE_LEN];
    char scope[SCOPE_LEN];
}Symbol;

Symbol table[MAX_SYMBOLS];
int symbolCount=0;
/*Returns indexiffound,otherwise-1
Matchrule:samename+samescope=samesymbol*/
int searchSymbol(const char*name,const char*scope){
    for(int i = 0;i< symbolCount; i++){
        if(strcmp(table[i].name,name)==0 && strcmp(table[i].scope,scope) == 0){
        return i;
    }
}
return-1;
}

void insertSymbol(const char*name,const char*type,const char*scope){
    if( symbolCount>=MAX_SYMBOLS){
    printf("Insert Failed:Symbol table is full!\n");
    return;
}
if(searchSymbol(name,scope)!= -1){
    printf("Insert Failed:%s already exists in scope %s.\n",name,scope);
    return;
}
        strncpy(table[symbolCount].name,name,NAME_LEN-1);
        table [symbolCount].name[NAME_LEN-1] = 0;
        strncpy(table[symbolCount].type,type,TYPE_LEN-1);
        table[symbolCount].type[TYPE_LEN-1] = 0;
        strncpy(table[symbolCount].scope,scope,SCOPE_LEN-1);
        table[symbolCount].scope[SCOPE_LEN-1]=0;
        symbolCount++;
        printf("Insert Success: %s (%s) added in scope%s.\n",name,type,scope);
}

void displaySymbols(){

if(symbolCount==0){
    printf("Symbol table is empty.\n");
    return;
}
    printf("\n=====SYMBOLTABLE(%d symbols)=====\n",symbolCount);

printf("%-5s %-20s %-15s %-15s\n","No.","Name","Type","Scope");
printf("---------------------------\n---------------------------\n")
;
for(int i=0;i<symbolCount;i++){
printf("%-5d %-20s %-15s %-15s\n",i+1,table[i].name,table[i].type,table[i].scope);
}
printf("=====================================\n\n");
}
void searchAndPrint(const char*name,const char*scope){
int idx = searchSymbol(name,scope);

    if(idx==-1){
        printf("Search Failed:%s not found in scope %s.\n",name, scope);
    }
    else{
            printf("Search Success:Found %s |Type:%s |Scope:%s\n",table[idx].name,table[idx].type,table[idx].scope);
    }
}

int main() {
int choice;
char name[NAME_LEN],type[TYPE_LEN],scope[SCOPE_LEN];
while (1){
    printf("\n===SYMBOLTABLEMENU===\n");
    printf("1.InsertSymbol\n");
    printf("2.SearchSymbol\n");
    printf("3.DisplaySymbolTable\n");
    printf("4.Exit\n");
    printf("Enter choice:");

    if(scanf("%d",&choice) != 1){
    printf("Invalid input.Exiting.\n");
    return 0;
}

switch(choice){
case 1:
    printf("Enter name: ");
    scanf("%s",name);
    printf("Enter type:");
    scanf("%s",type);
    printf("Enter scope : ");
    scanf("%s",scope);
    insertSymbol(name,type,scope);
    break;
case 2:
    printf("Enter name to search:");
    scanf("%s",name);
    printf("Enter scope:");
    scanf("%s",scope);
    searchAndPrint(name,scope);
    break;
case 3:
    displaySymbols();
    break;
case 4:
    printf("Exiting program.\n");
return 0;

default:
    printf("Invalid choice. Try again.\n");
}
}
}
