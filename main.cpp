#include "video.h"
#include <iostream>
using namespace std;
int main(){
    string title;
    string link;
    string comment;
    float length = 0.0;
    int rating = 0;
    
    string sort_method;
   
    int num_videos = 0;  // the number of videos that is read in
    Video *videos[100];

   
      // don't forget to read the sort
    while(  getline(cin,sort_method))
    {
    if (sort_method == "title" or sort_method =="length" or sort_method =="rating") {
        
    while (getline(cin, title))
    {
        
        getline (cin , link);
        
        getline (cin, comment);
        
        cin >> length;
      
        cin >> rating;
        cin.ignore();
        
        videos[num_videos] = new Video (title, link, comment, length, rating);
        
        if (num_videos > 99) {
            cerr << "Too many videos, giving up." << endl;
            return 1;
    
        }
        
        num_videos++;
    }
                     
        }
        
        else {
            cerr << sort_method << " is not a legal sorting method, giving up."<<endl;
              return 1;
            break;
        }
        
      
        
    
    
  //--------------------------------------------------------------------------------------------
  
    if (sort_method == "length")
    {
        for (int last = num_videos -1; last > 0; last--)
            for (int cur = 0; cur < last; cur++)
                if (videos[cur]->longer(videos[cur+1]))
                    swap(videos[cur], videos[cur+1]);
        
            for (int i = 0; i < num_videos; i++)
                videos[i]->print();
                
            }
    
    
    else if (sort_method =="rating")
    {
        for (int last = num_videos -1; last > 0; last--)
            for (int cur = 0; cur < last; cur++)
                if (videos[cur]->better_rating(videos[cur+1]))  // <-- here I am calling the new Video function "better_rating" instead of longer
                    swap(videos[cur], videos[cur+1]);
        
                for (int i = 0; i < num_videos; i++)
                    videos[i]->print();
                    
                
      
    }
    
    else if (sort_method =="title")
    {
        for (int last = num_videos -1; last > 0; last--)
            for (int cur = 0; cur < last; cur++)
                if (videos[cur]->titles(videos[cur+1]))
                    swap(videos[cur], videos[cur+1]);
                for (int i = 0; i < num_videos; i++)
                    videos[i]->print();
                    
    }
  
    
    
    
   
    
    
    }
}





