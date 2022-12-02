int main()
{
    char s[100];
    scanf("%s", s);
    int i = 0;
    int len = strlen(s);
    while (s[i] != '\0')
    {
        if (s[i] == '0' && s[i + 1] != '0' && i < strlen(s) - 1)//以免出现如100：一百零或者1001：一百零零一
            printf("零");
 
        switch (s[i])
        {
        case '1':
            printf("一");
            break;
        case '2':
            printf("二");
            break;
        case '3':
            printf("三");
            break;
        case '4':
            printf("四");
            break;
        case '5':
            printf("五");
            break;
        case '6':
            printf("六");
            break;
        case '7':
            printf("七");
            break;
        case '8':
            printf("八");
            break;
        case '9':
            printf("九");
            break;
        }
        if (s[i] != '0')//以免出现1001：一千百十一
        {
            switch (len)
            {
            case 9:
                printf("亿");
                break;
            case 8:
                printf("千");
                break;
            case 7:
                printf("百");
                break;
            case 6:
                printf("十");
                break;
            case 5:
                printf("万");
                break;
            case 4:
                printf("千");
                break;
            case 3:
                printf("百");
                break;
            case 2:
                printf("十");
                break;
            }
        }
        if (len == 5 && s[i] == '0')//如果到万位且数字为0则需补上一个万字
        {
            printf("万");
        }
        len--;
        i++;
    }
    return 0;
}
