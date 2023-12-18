#include<stdio.h>
#include<string.h>
struct book{
    /* 图书信息只需要包含包括：序号、书名、作者、状态。 */
    long id;
    char name[100];
    char author[100];
    int state; // 1，可借阅 0，不可借阅
};

// 主页面
void showMenu();
// 添加图书
int addBook(struct book library[], int total);
// 显示所有图书信息
void showBooks(struct book library[], int total);
// 按id查询图书
int findBookByID(struct book library[], int total, long searchID);
// 删除图书
int deleteBook(struct book library[], int total);
// 按书名查询图书
int findBookByName(struct book library[], int total, char searchName[]);
// 按作者查询图书
int findBookByAuthor(struct book library[], int total, char searchAuthor[]);
// 按书名查询图书
void searchBooksByName(struct book library[], int total);
// 按作者查询图书
void searchBooksByAuthor(struct book library[], int total);
// 借书(按序号借阅)
void borrowBook(struct book library[], int total);
// 还书(按序号归还)
void returnBook(struct book library[], int total);

int main(){

    struct book library[100];
    
    int select;
    // 图书馆中图书数量
    int total = 0;
    do{
        showMenu();
        scanf("%d", &select);
        switch (select){
		    case 1:
			    total = addBook(library, total);
                showBooks(library, total);
			    break;
		    case 2:
			    total = deleteBook(library, total);
                showBooks(library, total);
			    break;
		    case 3:
			    searchBooksByName(library, total);
			    break;
		    case 4:
			    searchBooksByAuthor(library, total);
			    break;
		    case 5:
			    borrowBook(library, total);
			    break;
            case 6:
			    returnBook(library, total);
			    break;
            case 7:
                showBooks(library, total);
                break;
		    default:
			    printf("退出程序\n");
			    break;
        }
    }while(select > 0 && select < 8);
    
    
    return 0;
}

void showMenu(){
    /*
    1、添加图书（状态为“在馆”，添加后自动打印全部图书）
    2、删除图书（删除后自动打印全部图书）
    3、按书名查询图书（可看到序号、书名、作者、状态）
    4、按作者查询图书（可看到序号、书名、作者、状态）
    5、借书（已借书籍状态改为“借出”）
    6、还书（状态为“在馆”）
    7、查看所有图书信息
    */
    printf("**********欢迎使用图书管理系统***********\n");
    printf("----------------------------------------\n");
	printf("---------------1.添加图书---------------\n");
	printf("---------------2.删除图书---------------\n");
	printf("---------------3.按书名查询图书---------------\n");
	printf("---------------4.按作者查询图书---------------\n");
	printf("---------------5.借书(按序号借阅)---------------\n");
    printf("---------------6.还书(按序号归还)---------------\n");
    printf("---------------7.查看所有图书信息---------------\n");
	printf("---------------0.退出---------------\n");
	printf("输入你的操作：");
}


int addBook(struct book library[], int total){
    if (total < 100) {
        long newID;
        printf("输入图书信息 :\n");
        do {
            printf("序号: ");
            scanf("%ld", &newID);
            if (findBookByID(library, total, newID) != -1) {
                printf("该序号图书已存在，请重新输入。\n");
            }
        } while (findBookByID(library, total, newID) != -1);
        
        library[total].id = newID;
        
        printf("书名: ");
        scanf("%s", library[total].name);
        printf("作者: ");
        scanf("%s", library[total].author);
        library[total].state = 1;
        printf("添加成功\n");
        return total + 1;
    } else {
        printf("图书馆已满，无法添加图书\n");
        return total;
    }
}


void showBooks(struct book library[], int total) {
    printf("现存图书信息:\n");
    printf("%-10s %-20s %-20s %-10s\n", "序号", "书名", "作者", "状态（1,可借；0，不可借）");

    for (int i = 0; i < total; i++) {
        printf("%-10ld %-20s %-20s %-10d\n", library[i].id, library[i].name, library[i].author, library[i].state);
    }
}

int findBookByID(struct book library[], int total, const long searchID) {
    for (int i = 0; i < total; i++) {
        if (library[i].id == searchID) {
            return i;
        }
    }
    return -1;
}

int deleteBook(struct book library[], int total){
    long searchID;
    printf("输入要删除的序号: ");
    scanf("%ld", &searchID);
    int index = findBookByID(library, total, searchID);
    if (index != -1) {
        if (library[index].state == 0) {
            printf("图书已被借阅，无法删除信息。\n");
        } else {
            printf("删除的图书信息:\n");
            printf("%-8s %-20s %-20s %-10s\n", "序号", "书名", "作者", "状态（1,可借；0，不可借）");
            printf("%-8ld %-20s %-20s %-10d\n", library[index].id, library[index].name, library[index].author, library[index].state);
            // Shift elements to overwrite the deleted book
            for (int i = index; i < total - 1; i++) {
                library[i] = library[i + 1];
            }
        }   
        total--;
        printf("删除成功！\n");
    } else {
        printf("未找到匹配的书籍。\n");
    }
    return total;
}




int findBookByName(struct book library[], int total, char searchName[]) {
    for (int i = 0; i < total; i++) {
        if (strcmp(library[i].name, searchName) == 0) {
            return i;
        }
    }
    return -1; 
}

int findBookByAuthor(struct book library[], int total, char searchAuthor[]) {
    for (int i = 0; i < total; i++) {
        if (strcmp(library[i].author, searchAuthor) == 0) {
            return i;
        }
    }
    return -1; 
}

void searchBooksByName(struct book library[], int total) {
    char searchName[100];
    printf("输入要查询的书名: ");
    scanf("%s", searchName);

    int index = findBookByName(library, total, searchName);
    if (index != -1) {
        printf("找到的图书信息:\n");
        printf("%-8s %-20s %-20s %-10s\n", "序号", "书名", "作者", "状态（1,可借；0，不可借）");
        printf("%-8ld %-20s %-20s %-10d\n", library[index].id, library[index].name, library[index].author, library[index].state);
    } else {
        printf("未找到匹配的书籍。\n");
    }
}

void searchBooksByAuthor(struct book library[], int total) {
    char searchAuthor[100];
    printf("输入要查询的作者: ");
    scanf("%s", searchAuthor);

    int index = findBookByAuthor(library, total, searchAuthor);
    if (index != -1) {
        printf("找到的图书信息:\n");
        printf("%-8s %-20s %-20s %-10s\n", "序号", "书名", "作者", "状态（1,可借；0，不可借）");
        printf("%-8ld %-20s %-20s %-10d\n", library[index].id, library[index].name, library[index].author, library[index].state);
    } else {
        printf("未找到匹配的书籍。\n");
    }
}

void borrowBook(struct book library[], int total) {
    long searchID;
    printf("输入要借阅的图书序号: ");
    scanf("%ld", &searchID);

    int index = findBookByID(library, total, searchID);
    if (index != -1) {
        if (library[index].state == 1) {
            library[index].state = 0; // 将状态改为不可借阅
            printf("借阅成功！\n");
        } else {
            printf("图书不可借阅，已被借出。\n");
        }
    } else {
        printf("未找到匹配的书籍。\n");
    }
}

void returnBook(struct book library[], int total) {
    long searchID;
    printf("输入要归还的图书序号: ");
    scanf("%ld", &searchID);

    int index = findBookByID(library, total, searchID);
    if (index != -1) {
        if (library[index].state == 0) {
            library[index].state = 1; // 将状态改为可借阅
            printf("还书成功！\n");
        } else {
            printf("图书已在馆，无需归还。\n");
        }
    } else {
        printf("未找到匹配的书籍。\n");
    }
}