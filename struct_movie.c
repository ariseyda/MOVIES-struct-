#include<stdio.h>

//Write a program that asks user to enter information about a movie. 
//That information consists of movie’s title,language, director, year,cast and rating. 
//The program should print the information about any movie that is recorded and it should consist a function can change movie’s rating. 
//Cast property has 3 names in itself. Use nested structures. 

float change(){
	float i;
	printf("Enter imdb of movie:");
	scanf("%f",&i);
	return i;
}
struct Cast{
	
	char name1[25];
	char name2[25];
	char name3[25];
	
};
struct Movie{
	
	char title[25];
	char language[25];
	char director[30];
	int year;
	float imdb;
	
	struct Cast cast;
	
};
int main(){
	
	struct Movie movie;
	printf("Enter title of movie:");
	scanf("%s",&movie.title);
	printf("Enter language of movie:");
	scanf("%s",&movie.language);
	printf("Enter director of movie:");
	scanf("%s",&movie.director);
	printf("Enter year of movie:");
	scanf("%d",&movie.year);
	
	printf("Enter cast of movie:\n");
	scanf("%s",&movie.cast.name1);
	scanf("%s",&movie.cast.name2);
	scanf("%s",&movie.cast.name3);
	
    float r_imdb=change();
	printf("\nMOVIE:\nTittle:%s\nLanguage:%s\nDirector:%s\nYear:%d\n",movie.title,movie.language,movie.director,movie.year);
	printf("IMDB:%.1f\n",r_imdb);
	printf("CAST:\nCast 1:%s\nCast 2:%s\nCast 3:%s\n",movie.cast.name1,movie.cast.name2,movie.cast.name3);
	
    
	
	return 0;
}
 
