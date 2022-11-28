int main()
{
    printf("请输入一行字符：");
    char s[10000];
    gets(s);
    int num,l;
    char *p;
    num=1;l=0;
    for (p = s; p < s + 1000; p++)
    {
        if (*p == '\n' || *p == '\0')
            break;
        else if (*p != ' ')
            l++;
        else
            num++;
    }
    l = l / num;
    printf("总共有%d个单词，平均长度为%d\n", num, l);
}