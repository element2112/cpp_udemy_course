#include <iostream>
#include <string>
#include <vector>
#include "Movies.h"

int main()
{
    Movies my_movies;
    
    my_movies.display_movies();
    
    my_movies.add_movie("Big", "PG-13", 2);
    my_movies.add_movie("Star Wars", "PG", 5);
    my_movies.add_movie("Cinderella", "PG", 7);
    
    my_movies.display_movies();
    
    my_movies.inc_watch_count("Big");
    my_movies.inc_watch_count("Big");
    my_movies.inc_watch_count("Big");
    
    my_movies.inc_watch_count("Star Wars");
    my_movies.inc_watch_count("Star Wars");
    my_movies.inc_watch_count("Wall-e");
    
    my_movies.inc_watch_count("Cinderella");
    my_movies.inc_watch_count("Cinderella");
    my_movies.inc_watch_count("Cinderella");
    
    my_movies.display_movies();
    
    return 0;
}