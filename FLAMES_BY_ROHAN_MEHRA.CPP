#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

  class flames
    {
      char nm1[25], nm2[25], str[25], flm[7];

      public:
	flames()
	 {
	   strcpy(flm,"FLAMES");
	 }

	void getnames();
	char calcflames();
	void showflames(char rslt);
    };


  void flames :: getnames()
    {
      clrscr();

      cout<<"\n\n\n__________________________ \3 ";
      for(int i=0; flm[i] != '\0'; i++)
      cout<<flm[i]<<".";
      cout<<" \3 __________________________\n"<<endl;


      cout<<"\nENTER NAME OF 1ST PERSON  :  ";
      gets(nm1);

      cout<<"\nENTER NAME OF 2ND PERSON  :  ";
      gets(nm2);

    }

  char flames :: calcflames()
    {
      int i, j, flag=0, k=0;
      char tmp1[25], tmp2[25], tflm[7], ch;

      strcpy(tmp1, nm1);
      strcpy(tmp2, nm2);

      if( strcmp( tmp1, tmp2 ) != 0)
       {
	 for(i=0; tmp1[i] != '\0'; i++)
	   {
	     for(j=0; tmp2[j] != '\0'; j++)
	       {
		 if((tmp1[i] == tmp2[j]  || (tmp1[i]-32)==tmp2[j]  ||  (tmp1[i]+32)==tmp2[j]) && (tmp1[i] != ' ') )
		   {
		     tmp2[j]='0';
		     flag=1;
		     break;
		   }
		}

	     if(flag==0 && tmp1[i] != ' ')
	       str[k++]=tmp1[i];

	     flag=0;
	   }

	 for(j=0; tmp2[j] != '\0'; j++)
	   if(tmp2[j] != '0' && tmp2[j] != ' ')
	     str[k++] = tmp2[j];
	 str[k]='\0';

	 int count = 6;
	 j=0;
	 i=-1;
	 strcpy(tflm, flm);

	 while(count != 1)
	  {
	     while(j<k)
	       {
		i++;
		 if(tflm[i] != '\0')
		  {
		    if(tflm[i] != '0')
		     j++;
		   }

		 else
		  {
		   i=-1;
		     while(tflm[i+1] == '0')
		      i++;
		  }
	       }

	      tflm[i]='0';
	      count--;

	   j=0;

	 }

	 for(i=0; tflm[i] == '0'; i++);

	 ch=tflm[i];

	 return ch;
       }

     else
       {
	i = random(7);
	ch = flm[i];
	str[0] = '\0';
	return ch;
       }

    }

  void flames :: showflames(char rslt)
    {
      clrscr();
      int i;

      cout<<"\n\n_________________________ \3 COUPLE'S NAMES \3 _________________________";
      cout<<"\n\nNAME OF FIRST PERSON     :    "<<nm1<<endl;
      cout<<"\nNAME OF SECOND PERSON    :    "<<nm2<<endl;
      cout<<"\n\nRESULTANT STRING         :    "<<str<<endl;
      cout<<"\nRESULTANT STRING LENGTH  :    "<<strlen(str)<<endl;

      if(str[0] == '\0')
	{
	  cout<<"\n\nNo Resultant String, and Resultant String Length is '0'...."<<endl;
	  cout<<"\nNow, Your fate will decide your Relationship Status!!!";
	}

      cout<<"\n\n__________________________ \3 ";
      for(i=0; flm[i] != '\0'; i++)
      cout<<flm[i]<<".";
      cout<<" \3 __________________________\n"<<endl;

      switch(rslt)
       {
	 case 'F' :
		cout<<"\n"<<rslt<<"  :  FRIENDS"<<endl;
		break;

	 case 'L' :
		cout<<"\n"<<rslt<<"  :  LOVERES"<<endl;
		break;

	 case 'A' :
		cout<<"\n"<<rslt<<"  :  AFFECTION"<<endl;
		break;

	 case 'M' :
		cout<<"\n"<<rslt<<"  :  MARRIAGE"<<endl;
		break;

	 case 'E' :
		cout<<"\n"<<rslt<<"  :  ENEMY"<<endl;
		break;

	 case 'S' :
		cout<<"\n"<<rslt<<"  :  SOULMATES"<<endl;
		break;

       }

    getch();

  }


  void main()
    {
      flames f1;
      char result;
      char choice = 'y';

      while(choice == 'Y' || choice == 'y')
       {
	 f1.getnames();
	 result = f1.calcflames();
	 f1.showflames(result);

	 cout<<"\nDO YOU WANT TO CHECK FOR ANOTHER COUPLE (Y/N).........?"<<endl;
	 choice=getche();
       }

    }

