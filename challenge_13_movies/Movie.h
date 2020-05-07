#ifndef MOVIE_H
#define MOVIE_H
#include <string>

class Movie
{
private:
    std::string name;
    std::string rating;
    int watched;
//    friend class Movies;
public:
    std::string get_name();
    std::string get_rating();
    int get_watched();
    void inc_watched();
    // constructor
    Movie(std::string name = "None", std::string rating = "None", int watched = 0);
    
    // move constructor (there are no pointers so might not need this?)
    Movie(Movie &&source);
    
    // copy constructor
    Movie(Movie &source);

};



#endif // MOVIE_H
