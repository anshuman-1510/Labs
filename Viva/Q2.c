#include <stdio.h> 
int main() {
    char word[20];
    int z = 0, o = 0;

    printf("Enter the word: ");
    scanf("%s", word);

   
    for (int i = 0; word[i] != '\0'; i++)
     {
        if (word[i] == 'z' || word[i] == 'Z' ) 
        {
            z++;
        } 
        else if (word[i]== 'o' || word[i]=='O') 
        {
            o++;
        } 
    }

    if (2 * z == o) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
