#ifndef MOVIES_H
#define MOVIES_H
#include "Movie.h"
#include <vector>
#include <string>


class Movies
{
private:
    std::string collection_name;
    std::vector<Movie> vec;
    
public:
    void add_movie(std::string movie_name, std::string _rating, int watched_count);
    void display_movies();
    void inc_watch_count(std::string movie_name);
    Movies(std::string collection_name = "Default name");
    ~Movies();
};

#endif // MOVIES_H
