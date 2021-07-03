#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
#include<MMSystem.h>
void open_sector(char question[20],char answer[20]);
void questions();
void answer_match();
void add_record();
void show_record();
int rand_num,wrong,amount;
char x,y,name[20];
/*fpq=file pointer question
 fpa=file pointer answer
 fpr=file pointer record*/
FILE *fpq,*fpa,*fpr;
long lower,upper,answer_point;
main()
{
    char a;
    printf("---------------------------------------------------------------------------------------\n");
    printf("                           WHO WILL BE THE MILLIONAIRE!!!!!!                        \n");
    printf("---------------------------------------------------------------------------------------\n");
    main_menu:
    printf("\n\n\nMENU:");
    printf("\n=>Press S for start the game\n");
    printf("=>Press I for Introduction\n");
    printf("=>Press R for see the previous records\n");
    //for adding sound settings>compiler>linker setting>the add winmm
    PlaySound(TEXT("commerical.wav"),NULL,SND_SYNC);
    a=toupper(getch());
    if(a=='S'){
    system("cls");//used for clear the screen
    printf("Enter Your Name-");
    gets(name);//user name
    char q1[20]="question1.txt";
    char a1[20]="answer1.txt";
    //for printing the question & matching the answer
    open_sector(q1,a1);
    if(wrong!=0){
        printf("\n\nPress B for back to main menu\n");
        a=toupper(getch());
        amount=000;
        add_record();
        system("cls");
        if(a=='B')
            goto main_menu;
    }
    else{
        printf("\nYou Have Got 500 TAKA!!!\nNext question is-\n\n");

    }
    char q2[20]="question2.txt";
    char a2[20]="answer2.txt";
    open_sector(q2,a2);
     if(wrong!=0){
        printf("\n\nPress B for back to main menu\n");
        a=toupper(getch());
        amount=500;
        add_record();
        system("cls");
        if(a=='B')
            goto main_menu;
    }
    else{
        printf("\nYou Have Got 1000 TAKA!!!\nNext question is-\n\n");
    }
     char q3[20]="question3.txt";
    char a3[20]="answer3.txt";
    open_sector(q3,a3);
     if(wrong!=0){
        printf("\n\nPress B for back to main menu\n");
        a=toupper(getch());
        amount=1000;
        add_record();
        system("cls");
        if(a=='B')
            goto main_menu;
    }
    else{
        printf("\nYou Have Got 2000 TAKA!!!\nNext question is-\n\n");
    }
     char q4[20]="question4.txt";
    char a4[20]="answer4.txt";
    open_sector(q4,a4);
     if(wrong!=0){
        printf("\n\nPress B for back to main menu\n");
        a=toupper(getch());
        amount=2000;
        add_record();
        system("cls");
        if(a=='B')
            goto main_menu;
    }
    else{
        printf("\nYou Have Got 3000 TAKA!!!\nNext question is-\n\n");
    }
     char q5[20]="question5.txt";
    char a5[20]="answer5.txt";
    open_sector(q5,a5);
     if(wrong!=0){
        printf("\n\nPress B for back to main menu\n");
        a=toupper(getch());
        amount=3000;
        add_record();
        system("cls");
        if(a=='B')
            goto main_menu;
    }
    else{
        printf("\nYou Have Got 5000 TAKA!!!\nNext question is-\n\n");
    }
     char q6[20]="question6.txt";
    char a6[20]="answer6.txt";
    open_sector(q6,a6);
     if(wrong!=0){
        printf("\n\nPress B for back to main menu\n");
        a=toupper(getch());
        amount=5000;
        add_record();
        system("cls");
        if(a=='B')
            goto main_menu;
    }
    else{
        printf("\nYou Have Got 7500 TAKA!!!\nNext question is-\n\n");
    }
      char q7[20]="question7.txt";
    char a7[20]="answer7.txt";
    open_sector(q7,a7);
     if(wrong!=0){
        printf("\n\nPress B for back to main menu\n");
        a=toupper(getch());
        amount=7500;
        add_record();
        system("cls");
        if(a=='B')
            goto main_menu;
    }
    else{
        printf("\nYou Have Got 10000 TAKA!!!\nNext question is-\n\n");
    }
     char q8[20]="question8.txt";
    char a8[20]="answer8.txt";
    open_sector(q8,a8);
     if(wrong!=0){
        printf("\n\nPress B for back to main menu\n");
        a=toupper(getch());
        amount=10000;
        add_record();
        system("cls");
        if(a=='B')
            goto main_menu;
    }
    else{
        printf("\nYou Have Got 15000 TAKA!!!\nNext question is-\n\n");
    }
     char q9[20]="question9.txt";
    char a9[20]="answer9.txt";
    open_sector(q9,a9);
     if(wrong!=0){
        printf("\n\nPress B for back to main menu\n");
        a=toupper(getch());
        amount=15000;
        add_record();
        system("cls");
        if(a=='B')
            goto main_menu;
    }
    else{
        printf("\nYou Have Got 25000 TAKA!!!\nNext question is-\n\n");
    }
     char q10[20]="question10.txt";
    char a10[20]="answer10.txt";
    open_sector(q10,a10);
     if(wrong!=0){
        printf("\n\nPress B for back to main menu\n");
        a=toupper(getch());
        amount=25000;
        add_record();
        system("cls");
        if(a=='B')
            goto main_menu;
    }
    else{
        printf("\nYou Have Got 50000 TAKA!!!\nNext question is-\n\n");
    }
     char q11[20]="question11.txt";
    char a11[20]="answer11.txt";
    open_sector(q11,a11);
     if(wrong!=0){
        printf("\n\nPress B for back to main menu\n");
        a=toupper(getch());
        amount=50000;
        add_record();
        system("cls");
        if(a=='B')
            goto main_menu;
    }
    else{
        printf("\nYou Have Got 75000 TAKA!!!\nNext question is-\n\n");
    }
     char q12[20]="question12.txt";
    char a12[20]="answer12.txt";
    open_sector(q12,a12);
     if(wrong!=0){
        printf("\n\nPress B for back to main menu\n");
        a=toupper(getch());
        amount=75000;
        add_record();
        system("cls");
        if(a=='B')
            goto main_menu;
    }
    else{
        printf("\nYou Have Got 150000 TAKA!!!\nNext question is-\n\n");
    }
     char q13[20]="question13.txt";
    char a13[20]="answer13.txt";
    open_sector(q13,a13);
     if(wrong!=0){
        printf("\n\nPress B for back to main menu\n");
        a=toupper(getch());
        amount=150000;
        add_record();
        system("cls");
        if(a=='B')
            goto main_menu;
    }
    else{
        printf("\nYou Have Got 250000 TAKA!!!\nNext question is-\n\n");
    }
     char q14[20]="question14.txt";
    char a14[20]="answer14.txt";
    open_sector(q14,a14);
     if(wrong!=0){
        printf("\n\nPress B for back to main menu\n");
        a=toupper(getch());
        amount=250000;
        add_record();
        system("cls");
        if(a=='B')
            goto main_menu;
    }
    else{
        printf("\nYou Have Got 500000 TAKA!!!\nNext question is-\n\n");
    }
     char q15[20]="question15.txt";
    char a15[20]="answer15.txt";
    open_sector(q15,a15);
     if(wrong!=0){
        printf("\n\nPress B for back to main menu\n");
        a=toupper(getch());
        amount=500000;
        add_record();
        system("cls");
        if(a=='B')
            goto main_menu;
    }
    else{
       printf("\nYou Have Got 100000 TAKA!!!\nCongrtas You are the millionaire-\n\n");
       printf("The is END...Press B for back to main menu\n");
               a=toupper(getch());
               amount=1000000;
        add_record();
        system("cls");
        if(a=='B')
            goto main_menu;
    }
    }
    else if(a=='I'){
        system("cls");
        printf("Here is the amount distribution per question\n\n");
        printf("15  $10,00,000\n14  $5,00,000\n13  $2,50,000\n12  $1,50,000\n11  $75,000\n10  $50,000\n");
        printf("9   &25,000\n8   $15,000\n7   $10,000\n6   $7,500\n5   $5,000\n");
        printf("4   $3,000\n3   $2,000\n2   $1,000\n1   $500\n");
        printf("\n\n\nPress B for back to main menu\n");
        a=toupper(getch());
        system("cls");
        if(a=='B')
        goto main_menu;
    }
    else if(a=='R'){
            system("cls");
        show_record();
        printf("\n\n\nPress B for back to main menu\n");
        a=toupper(getch());
        system("cls");
        if(a=='B')
        goto main_menu;
    }
}
void open_sector(char question[20],char answer[20])
{
    //open question & answer file in raeding mode
    fpq=fopen(question,"r");
    fpa=fopen(answer,"r");
    questions();
    answer_match();
    //points the file pointer to the beginning of the file
     rewind(fpq);
    rewind(fpa);
    //close both files
    fclose(fpq);
    fclose(fpa);
}
void questions()
{
   //for generate the random number
   srand(time(0));
    rand_num=rand()%9;
   //converting int into char
    x=rand_num+'0';
    y=(rand_num+1)+'0';
    //get the starting position of the question
    while(1)
    {
        if(getc(fpq)==x)
            break;
        lower=ftell(fpq);
    }
    //points the file pointer at the 1st letter of the question
    lower=lower+2;
    //get the ending position of the question
    while(1)
    {
        if(getc(fpq)==y)
            break;
        upper=ftell(fpq);
    }
   //write the question(with option) in the screen
    while(1)
    {
        fseek(fpq,lower,0);
        if(lower==upper)
            break;
        printf("%c",getc(fpq));
        lower++;
    }
}
void answer_match()
{
    rewind(fpa);
    wrong=0;
    char a,correct_ans,b;
    //find the desire question
    while(1)
    {
        if(getc(fpa)==x)
            break;
        answer_point=ftell(fpa);
    }
    //points to the answer
    answer_point++;
    fseek(fpa,answer_point,0);
    printf("\nType the answer\n");
    correct_ans=getc(fpa);
    a=getch();
    //checking answer is correct or not
    if(a==correct_ans){
        system("cls");
       printf("\nCONGRATS!!!The answer is CORRECT!!\n");
        PlaySound(TEXT("correct answer.wav"),NULL,SND_SYNC);
    }
       else{

            wrong++;
        printf("\nSORRY...WRONG Answer\nCorrect Answer is %c\n",correct_ans);
         PlaySound(TEXT("wrong answer.wav"),NULL,SND_SYNC);
        //point the file poinetr at the beginning
       rewind(fpq);
       rewind(fpa);
       }

}
void add_record()
{
    //open a file in append mode
    fpr=fopen("record.txt","a");
    //print the desire values into file
    fprintf(fpr,"%s %s %d %s\n",name,"  ",amount," TAKA");
    fclose(fpr);
}
void show_record()
{
    char content;
    //open the record file in raeding mode
    fpr=fopen("record.txt","r");
    printf("***PREVIOUS RECORDS***\n");
  while(1)
  {
     content=getc(fpr);
     //print the content of the file in the screen
      printf("%c",content);
      if(content==EOF)
        break;
  }
  fclose(fpr);
}
