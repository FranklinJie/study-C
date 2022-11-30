 int  DayofYear(int year, int month, int day)
    {
        int a[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            a[1] = 29;
        else
            a[1] = 28;
        int num = 0,i=0;
        for (i = 0; i+1 < month; i++)
            num += a[i];
        return num + day;
    }
    void  MonthDay(int year, int yearDay, int* pMonth, int* pDay)
    {
        int a[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            a[1] = 29;
        else
            a[1] = 28;
        *pDay = yearDay;
        int i;
        for(i=0;1;i++)
        {
            *pDay -=a[i];
            if (*pDay - a[1 + 1] < 0)
                break;
        }
        *pMonth = i + 2;
    }
    int main()
    {
        printf("1. year/month/day -> yearDay\n2. yearDay->year / month / day\n3. Exit\nPlease enter your choice : ");
        int year, month, day, yearDay, pMonth, pDay;
        int a;
        scanf("%d", &a);
        switch (a)
        {
        case 1:
        {
            printf("Please enter year, month, day:");
            scanf("%d,%d,%d", &year, &month, &day);
            printf("yearDay = %d\n", DayofYear(year, month, day));
        }
        break;
        case 2:
        {
            printf("Please enter year, yearDay:");
            scanf("%d,%d", &year, &yearDay);
            MonthDay(year, yearDay, &pMonth, &pDay);
            printf("month = %d, day = %d\n", pMonth, pDay);
        }
        break;

        case 3:break;
        }
        return 0;
    }