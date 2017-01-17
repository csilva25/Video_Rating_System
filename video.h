#ifndef VIDEO_H
#define VIDEO_H

#include <string>
using namespace std;

class Video
{
public:
    Video(string title, string link, string comment, double length, int rating);
    ~Video();
    void print();
    string description;
    string title;
    int count;
    bool longer(Video *other);
    bool titles(Video *other);
    bool better_rating(Video *other);
private:
    
    string title_;
    string link_;
    string comment_;
    int rating_;
    double length_;
  
  
    
};

#endif


