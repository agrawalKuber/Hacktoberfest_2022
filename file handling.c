//  Writing and Reading files in C
#include<stdio.h>
#include<stdlib.h>
int main(){
       /*reading a file*/
      FILE*fp;
         fp=fopen("file.txt","r"); // open in read mode
            if(fp==NULL){
                 printf("Error in opening the file");
                 exit(1);
       }
      char ch;
       while(ch!=EOF){
              ch=fgetc(fp);
                 printf("%c",ch);
       }
               printf("\n");
         fclose(fp); 

       /*writing a file*/
    
       fp=fopen("file.txt","w"); // open in write mode
           if(fp==NULL){
                 printf("Error in opening the file");
                  exit(1);
       }
       
       printf("Enter the text:");
       /*press Ctrl+z to stop writing characters*/
      while((ch=getchar())!=EOF){
             fputc(ch,fp);
       }
       fclose(fp); 

    return 0;
}
