#include "Movie.h"


std::string Movie::get_name() { return name; }
std::string Movie::get_rating() { return rating; }
int Movie::get_watched() { return watched; }
void Movie::inc_watched() { watched++; };

Movie::Movie(std::string name_val, std::string rating_val, int watched_val) : name{name_val}, rating{rating_val}, watched{watched_val}{
}

Movie::Movie(Movie &&source) : name{source.name}, rating{source.rating}, watched{source.watched} {
}

Movie::Movie(Movie &source) : name{source.name}, rating{source.rating}, watched{source.watched} {
}