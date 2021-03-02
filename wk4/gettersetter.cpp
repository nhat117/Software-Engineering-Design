#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;

class Movie {
		string rating;
	public:
		string title;
		string director;
		//Constructor
		Movie (string iTitle, string iDirector, string iRating) {
			title = iTitle;
			director = iDirector;
			setRating (iRating);
		}

		void setRating (string iRating) {
			if(iRating != "G" || iRating !="PG" ||iRating != "PG-13" ||iRating != "R" ||iRating != "NR") {
				rating = "NR";
			}else {
				rating = iRating;
			} 
		}
		string getRating() {
			return rating;
		}
};

int main() {
		Movie xman("Xman","Tommy", "G");
		cout << xman.getRating();
		return 0;
}