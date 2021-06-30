#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

string predictin_grade_level(float score);


int main(void)
{
 string s,c;
 float count_words=0,count_char=0,count_sentence=0;
 float score;
 s=get_string("enter the paragraph");
 for (int i=0;i<=strlen(s);i++)
  {
   if(isalnum(s[i]))
        {
        count_char=count_char+1;
        }
   else if(s[i]==' ')
      {
      count_words=count_words+1;
      }
   else if (s[i]=='.' || s[i]=='!'  || s[i]=='?')
     {
       count_sentence=count_sentence+1;
     }
  }
    
   score=4.71*(count_char/count_words)+0.5*(count_words/count_sentence)-21.43;
    
    c=predictin_grade_level(score);
    printf("%s",c);
    
}
    string predictin_grade_level(float score)
  {
      string grade_level;
    
      if (score<=1)
          grade_level="Kindergarten";
      else if(score<=2)
           grade_level="First/Second Grade";
      else if(score<=3)
           grade_level="Third Grade";
      else if(score<=4)
           grade_level="Fourth Grade";
      else if(score<=5)
            grade_level="Fifth Grade";
      else if(score<=6)
            grade_level="Sixth Grade";
      else if(score<=7)
            grade_level="Seventh Grade";
      else if(score<=8)
            grade_level="Eighth Grade";
      else if(score<=9)
            grade_level="Ninth Grade";
      else if(score<=10)
            grade_level="Tenth Grade";
    
      else if(score<=11)
            grade_level="Eleventh Grade";
      else if(score<=12)
            grade_level="Twelfth grade";
      else if(score<=13)
            grade_level="College student";
      else if (score <=14)
            grade_level="Professor";
    
         
        return grade_level;
    }
    
     
    
     
