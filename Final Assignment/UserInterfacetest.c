    #include <stdio.h>
    #include <stdlib.h>
    #include <curses.h>
    #include <string.h>
    main()
    {
    int i,counter=0,flag=0;
    char uid[25],pwd[8],s_uid[][25]={"11user1","12user2","13user3"};
    char s_pwd[][25]={"Pwd1","Pwd2","Pwd3"},ch='a';
     clrscr();
    printf("\n Enter the user id : ");
    scanf("%s",uid);
    printf("\n Enter the password : ");
    i=0;
    while(1)
    {
    	ch=getch();
    	if(ch==13)
    	break;
    	else if(ch==8)
    	{       if(i!=0) 
    		{
    			printf("\b"); 
    			printf("%c",32);
    			printf("\b"); 
    			i--;
    			pwd[i]='\0';
    		}
    		else
    		continue;
    	}
    	else
    	{
    	putchar('*');
    	pwd[i]=ch;
    	i++;
    	}
    }
    pwd[i]='\0';
    for(i=0;i<=2;i++)
    {
    	if((stricmp(uid,s_uid[i]))==0 && (strcmp(pwd,s_pwd[i]))==0)
    	{
    		flag=1;
    		break;
    	}
    }
    if(flag) printf(" \n \n \t \t USER GRANTED ");
    else printf("\n \n \n\t ACCESS DENIYED");
    getch();
    }
