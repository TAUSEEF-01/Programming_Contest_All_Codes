#include<stdio.h>
#include<math.h>
#define ll long long
#define inpi(n) scanf("%d", &n)
#define inpl(n) scanf("%lld", &n)
#define inpc(n) scanf("%c", &n)
#define inpd(n) scanf("%lf", &n)


int strlen(char a[])
{
    int ctr=0;
    for(int i=0; ; i++)
    {
        if(a[i]=='\0')
        {
            return ctr;
        }
        ctr++;
    }
}

int min(int a, int b)
{
    if(a<b) return a;
    else return b;
}

void solve()
{
    int n;
    scanf("%d", &n);
    if(n==1)
    {
        char a[10007];

        scanf(" %s", a);
        int sz=strlen(a);
        for(int i=0; i<sz-1; i++)
        {
            for(int j=0; j<sz-i-1; j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        printf("%s\n", a);
        return;
    }


    int ctr[400], occur[n+1][401];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<401; j++)
        {
            occur[i][j]=0;
        }
    }
    for(int j=0; j<400; j++) ctr[j]=0;

    for(int i=0; i<n; i++)
    {
        char a[10007];
        int mark[400];
        for(int j=0; j<400; j++) mark[j]=0;

        scanf(" %s", a);
        for(int j=0; ; j++)
        {
            if(a[j]=='\0') break;
            if(!((a[j]>='a' && a[j]<='z') || (a[j]>='A' && a[j]<='Z'))) continue;
            if(mark[(int)a[j]]==0)
            {
                ctr[(int)a[j]]++;
                mark[(int)a[j]]++;
            }
            occur[i][(int)a[j]]++;
        }
    }

    int flag=0, alph_common[400], l=0;
    for(int i=0; i<400; i++)
    {
        if(ctr[i]==n) 
        {
            alph_common[l++]=i;
            // printf("%c", char(i));
            flag++;
            // break;
        }
    }

    if(flag==0)
    {
        printf("###");
    }
    else
    {
        for(int i=0; i<l; i++)
        {
            int mini=10007;
            for(int j=0; j<n; j++)
            {
                mini=min(occur[j][alph_common[i]], mini);
            }
            for(int j=0; j<mini; j++)
            {
                printf("%c", char(alph_common[i]));
            }
        }
    }
    
    printf("\n");
}


int main()
{

    solve();

    return 0;
}


















// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // Function to find the Aloo String
// char* find_aloo_string(int N, char strings[][101]) {
//     // Initialize an array to count the frequency of each character
//     int char_count[26] = {0};

//     // Count character frequencies
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; strings[i][j] != '\0'; j++) {
//             char_count[strings[i][j] - 'a']++;
//         }
//     }

//     // Initialize the result string
//     char result[101];
//     int result_index = 0;

//     // Iterate through the characters in alphabetical order
//     for (int i = 0; i < 26; i++) {
//         if (char_count[i] >= N) {
//             // If the character appears in all input strings, add it to the result N times
//             for (int j = 0; j < N; j++) {
//                 result[result_index++] = 'a' + i;
//             }
//         }
//     }

//     result[result_index] = '\0';

//     // If there are common characters
//     if (result_index > 0) {
//         char* aloo_string = (char*)malloc(result_index + 1);
//         strcpy(aloo_string, result);
//         return aloo_string;
//     } else {
//         // Return "###" as a dynamically allocated string
//         char* no_common = (char*)malloc(4);
//         strcpy(no_common, "###");
//         return no_common;
//     }
// }

// int main() {
//     int N;
//     scanf("%d", &N);

//     char strings[N][101];

//     for (int i = 0; i < N; i++) {
//         scanf("%s", strings[i]);
//     }

//     // Find the Aloo String
//     char* aloo_string = find_aloo_string(N, strings);
//     printf("%s\n", aloo_string);

//     // Don't forget to free the dynamically allocated memory
//     free(aloo_string);

//     return 0;
// }





























    // int ctr[400];
    // for(int j=0; j<400; j++) ctr[j]=0;

    // for(int i=0; i<n; i++)
    // {
    //     char a[10007];
    //     int mark[400];
    //     for(int j=0; j<400; j++) mark[j]=0;

    //     scanf(" %s", a);
    //     for(int j=0; ; j++)
    //     {
    //         if(a[j]=='\0') break;
    //         if(mark[(int)a[j]]==0)
    //         {
    //             ctr[(int)a[j]]++;
    //             mark[(int)a[j]]++;
    //         }
    //     }
    // }

    // int flag=0;
    // for(int i=0; i<400; i++)
    // {
    //     if(ctr[i]==n) 
    //     {
    //         printf("%c", char(i));
    //         flag++;
    //     }
    // }

    // if(flag==0)
    // {
    //     printf("###");
    // }
    
    // printf("\n");