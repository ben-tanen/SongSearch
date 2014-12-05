#include "Song.h"

using namespace std;

Song::Song(string new_artist, string new_title) {
	artist = new_artist;
	title = new_title;
}

void Song::printLyrics() {
	for (vector<string>::iterator i = lyrics.begin();
                           i != lyrics.end();
                           i++)
	{
	    cout << *i << ' ';
	}
	cout << endl;
}

void Song::printSong() {
	cout << "Title: " << title << endl;
	cout << "Artist: " << artist << endl;
	printLyrics();
}

void Song::printContext(string word) {
	for (int i=0; i<lyrics.size(); i++) {
		if (alpha_only(lyrics[i]) == alpha_only(word)) {
			cout << "Title: " << title << endl;
			cout << "Artist: " << artist << "\nContext: " ;
			for (int j=i-5;j<i+6;j++) {
				if (j >= 0 && j < lyrics.size()) {
					cout << lyrics[j] << ' ';
				}
			}
			cout << endl << endl;
		}
	}
	
}