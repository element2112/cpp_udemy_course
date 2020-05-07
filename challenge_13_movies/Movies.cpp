#include "Movies.h"
#include "Movie.h"
#include <iostream>
#include <vector>

void Movies::add_movie(std::string movie_name, std::string _rating, int watched_count)
{
    vec.push_back(Movie{movie_name, _rating, watched_count});
}

void Movies::inc_watch_count(std::string name_val)
{
    for (Movie &v : vec)
    {
        if (v.get_name() == name_val)
        {
            v.inc_watched();
            std::cout << "Incremented watch count for: " << v.get_name() << " - now at " << v.get_watched() << " times." << std::endl;
            return;
        }
    }
    
    std::cout << "Movie not found!" << std::endl;
}

void Movies::display_movies()
{
    std::cout << "Movie list: " << std::endl;
    
    for (auto v : vec)
        std::cout << v.get_name() << " " << v.get_watched() << " times" << std::endl;
}

Movies::Movies(std::string name_val) : collection_name{name_val}{
}

Movies::~Movies()
{
}

