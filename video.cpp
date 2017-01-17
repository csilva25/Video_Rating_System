#include "video.h"
#include <string>
#include <iostream>
using namespace std;

    Video::Video (string title, string link, string comment, double length, int rating){
        title_ = title;
        link_ = link;
        comment_ = comment;
        length_ = length;
        rating_ = rating;
    }


Video::~Video(){
    
    
}


bool Video::longer(Video *other){
    
            return length_ > other-> length_;
      }


bool Video::titles(Video *other){
    
    return title_ < other->title_;
}

bool Video::better_rating(Video *other){
    
    return rating_ > other->rating_;
}

void Video::print()
{
    cout << title_ << ", " << link_ << ", " << comment_ << ", " << length_ << ", ";
    
    for (int i=0 ; i < rating_; i++)
    {
        cout <<"*";
        
    }
    cout<<endl;
}

