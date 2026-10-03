#include <stdio.h>
#include <string.h>
void getData(int nMovies,char title[][70],char director[][70],int releasedyear[],int runtimes[],float costs[],float revenues[])
{
  for(int i=0;i<nMovies;i++)
   {
    printf("Enter details for the movie number %d\n",i+1);
    printf("Title: ");
    scanf("%s",&title[i]);
    printf("Director: ");
    scanf("%s",&director[i]);
    printf("Year Released: ");
    scanf("%d",&releasedyear[i]);
    printf("Running time(in minutes): ");
    scanf("%d",&runtimes[i]);
    printf("Cost of production: ");
    scanf("%f",&costs[i]);
    printf("Revenue(first year): ");
    scanf("%f",&revenues[i]);
   }
}
int printData(int nMovies,char title[][70],char director[][70],int releasedyear[],int runtimes[],float costs[],float revenues[],int sy)
{
  int found=0;
  int i;
  for(i=0;i<nMovies;i++)
  {
   if (releasedyear[i]==sy)
    {
     printf("Details for Movie Released in %d:\n",sy);
     printf("Title: %s\n",title[i]);
     printf("Director: %s\n",director[i]);
     printf("Year Released: %d\n",releasedyear[i]);
     printf("Running time(in minutes): %d\n",runtimes[i]);
     printf("Cost of production: %.2f\n",costs[i]);
     printf("Revenue(first year): %.2f\n",revenues[i]);
     printf("Profit/Loss(first year): %.2f\n",revenues[i]-costs[i]);
     return 1;
    }

  }
    printf("Not available\n");
    return 0;


}

int main()
{
  int nMovies;
  printf("Number of movies: ");
  scanf("%d",&nMovies);
  char title[nMovies][70];
  char director[nMovies][70];
  int releasedyear[nMovies];
  int runtimes[nMovies];
  float costs[nMovies];
  float revenues[nMovies];
  getData(nMovies,title,director,releasedyear,runtimes,costs,revenues);
  int sy;
  printf("Enter the released year of the movie you are looking for : ");
  scanf("%d",&sy);
  int res;
  res=printData(nMovies,title,director,releasedyear,runtimes,costs,revenues,sy);
  if(res==1)
  {
    printf("Movie information is available\n");
  }
  else
  {
    printf("No movie is found for this specific year\n");
  }

 return 0;









}

