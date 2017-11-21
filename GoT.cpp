#include <iostream>
using namespace std;

string question1="Is your character a woman?";
string question2="Is she a Stark?";
string question3="Is she No One?";
string question4="Does she have red hair?";
string question5="Is she a Tully?";
string question6="Is she married to a Stark?";
string question7="Does she live in the Eyrie?";
string question8="Is she a Lannister?";
string question9="Is she the Queen of the Seven Kingdoms?";
string question10="Is she a Targaryen?";
string question11="Is she the First of Her Name, the Unburnt, Queen of the Andals and the First Men, Khaleesi of the Great Grass Sea, Breaker of Chains, and Mother of Dragons?";
string question12="Is he a Stark?";
string question13="Is he dead by the end of the seventh season?";
string question14="Was he King of the North?";
string question15="Was he the Hand of King Robert Baratheon?";
string question16="Does he have visions?";
string question17="Is he the true son of Raeghar Targaryen?";
string question18="Is he a Lannister?";
string question19="Is he missing one hand?";
string question20="Is he the Hand of Daenerys Targaryen?";
string question21="Is he a Clegane?";
string question22="Did he kill Oberyn Martell?";
string question23="Was his face burnt by his brother when he was young?";
string question24="Is he a Martell?";
string question25="Is he father of the Sand Snakes?";
string question26="Is he a Baratheon?";
string question27="Did he participate in Robert's Rebellion?";
string question28="Was he Cersei Lannister's husband?";
string question29="Was he killed by Brianne of Tarth?";
string question30="Was he a son of Cersei Lannister?";
string question31="Did he gave the order to kill Eddard Stark?";
string question32="Did he killed himself by jumping off a window?";

string str1 = " ";
string answer1;string answer2;string answer3;string answer4;string answer5;string answer6;string answer7;string answer8;
string answer9;string answer10;string answer11;string answer12;string answer13;string answer14;string answer15;string answer16;
string answer17;string answer18;string answer19;string answer20;string answer21;string answer22;string answer23;string answer24;
string answer25;string answer26;string answer27;string answer28;string answer29;string answer30;string answer31;string answer32;
int main()
{
cout << "Welcome to Game of Thrones Guess Who?" << endl;
cout << "Think of a character and answer the questions. " << endl;
cout << "Directions: " << endl;
cout << "Enter Y or N to answer yes or no (in caps) " << endl;
cout << "The only characters you can choose from are: " << endl;
cout << "Arya, Sansa, Robb, Bran and Ned Stark" << endl;
cout << "Catelyn and Lysa Tully; Cersei, Tyrion, and Jamie Lannister" << endl;
cout << "Daenerys Targaryen and Jon Snow (of house Stark), the Mountain and the Hound" << endl;
cout << "Oberyn Martell; Robert, Stannis, Joffrey and Tommen Baratheon" << endl;
cout << "First question: " << endl;

cout << question1 << endl; //Is your character a woman?";
cin >> answer1;

if (answer1 == "Y"){
	cout << question2 << endl; // Is she a Stark?
	cin >> answer2;
	if (answer2== "Y") {
		cout<< question3<< endl; //Is she No One?
		cin >> answer3;
		if (answer3== "Y") {
			cout <<"Your character is Arya Stark" <<endl;
		}
		if (answer3=="N"){
			cout <<question4<<endl;//Does she have red hair?
			cin >>answer4;
			if (answer4== "Y"){
				cout<< "Your character is Sansa Stark"<<endl;
			}
			if (answer4 == "N"){
				cout<<"I'm sorry I don't know what character you are talking about"<<endl;
			}
		}
	}
	if (answer2=="N"){
		cout << question5 <<endl; //Is she a Tully?
		cin >>answer5;
		if (answer5== "Y"){
			cout<<question6<<endl; //Is she married to a Stark?
			cin >>answer6;
			if (answer6== "Y"){
				cout <<"Your character is Catelyn Tully"<<endl;
			}
			if (answer6== "N"){
				cout << question7 <<endl; //Does she live in the Eyrie
				cin>>answer7;
				if (answer7== "Y"){
					cout<<"Your character is Lysa Arryn"<<endl;
				}
				if (answer7 == "N"){
					cout<<"I'm sorry I don't know what character you are talking about"<<endl;
				}
			}
		}
		if (answer5== "N"){
			cout <<question8<<endl; //Is she a Lannister?
			cin >>answer8;
			if (answer8=="Y"){
				cout <<question9<<endl;//Is she the Queen of the Seven Kingdoms?
				cin>>answer9;
				if (answer9=="Y"){
					cout<<"Your character is Cersei Lannister"<<endl;
				}
				if (answer9 =="N"){
					cout<<"I'm sorry I don't know what character you are talking about"<<endl;
				}
			}
			if (answer8=="N"){
				cout<<question10<<endl;//Is she a Targaryen?
				cin>>answer10;
				if (answer10=="Y"){
					cout <<question11<<endl;//Is she the First of Her Name, the Unburnt, Queen of the Andals and the First Men, Khaleesi of the Great Grass Sea, Breaker of Chains, and Mother of Dragons?
					cin>>answer11;
					if (answer11=="Y"){
						cout<<"Your character is Daenerys Targaryen"<<endl;
					}
					if (answer11 == "N"){
						cout<<"I'm sorry I don't know what character you are talking about"<<endl;
					}
				}
				if (answer10 =="N"){
					cout<<"I'm sorry I don't know what character you are talking about"<<endl;
				}
			}
		}
	}
}
if (answer1=="N"){
	cout <<"Then I guess your character is a man"<<endl;
	cout<<question12<<endl; //Is he a Stark?
	cin>>answer12;
	if (answer12=="Y"){
		cout<<question13<<endl;//Is he dead by the end of the seventh season?
		cin>>answer13;
		if (answer13=="Y"){
			cout<<question14<<endl;//Was he King of the North?
			cin>>answer14;
			if (answer14=="Y"){
				cout<<"Your character is Robb Stark"<<endl;
			}
			if (answer14=="N"){
				cout<<question15<<endl;//Was he the Hand of King Robert Baratheon?
				cin>>answer15;
				if (answer15=="Y"){
					cout<<"Your character is Ned Stark"<<endl;
				}
				if (answer15=="N"){
					cout<<"I'm sorry I don't know what character you are talking about"<<endl;
				}
			}
		}
		if (answer13=="N"){
			cout<<question16<<endl;//Does he have visions?
			cin>>answer16;
			if (answer16=="Y"){
				cout<<"Your character is Bran Stark"<<endl;
			}
			if (answer16=="N"){
				cout<<question17<<endl;//Is he the true son of Raeghar Targaryen?
				cin>>answer17;
				if (answer17=="Y"){
					cout<<"Your character is Jon Snow"<<endl;
				}
				if (answer17=="N"){
					cout<<"I'm sorry I don't know what character you are talking about"<<endl;
				}
			}
		}
	}
	if (answer12=="N"){
		cout<<question18<<endl;//Is he a Lannister?
		cin>>answer18;
		if (answer18=="Y"){
			cout<<question19<<endl; //Is he missing one hand?
			cin>>answer19;
			if (answer19=="Y"){
				cout<<"Your character is Jamie Lannister"<<endl;
			}
			if (answer19=="N"){
				cout<<question20<<endl;//Is he the Hand of Daenerys Targaryen?
				cin>>answer20;
				if (answer20=="Y"){
					cout<<"Your character is Tyrion Lannister"<<endl;
				}
				if (answer20=="N"){
					cout<<"I'm sorry I don't know what character you are talking about"<<endl;
				}
			}
		}
		if (answer18=="N"){
			cout<<question21<<endl; //Is he a Clegane?
			cin>>answer21;
			if (answer21=="Y"){
				cout<<question22<<endl; //Did he kill Oberyn Martell?
				cin>>answer22;
				if (answer22=="Y"){
					cout<<"Your character is Sir Gregor Clegane, aka The Mountain"<<endl;
				}
				if (answer22=="N"){
					cout<<question23<<endl;//Was his face burnt by his brother when he was young?
					cin>>answer23;
					if (answer23=="Y"){
						cout<<"Your character is Sandor Clegane, aka The Hound"<<endl;
					}
					if (answer23=="N"){
						cout<<"I'm sorry I don't know what character you are talking about"<<endl;
					}
				}
			}
			if (answer21=="N"){
				cout<<question24<<endl; //Is he a Martell?
				cin>>answer24;
				if (answer24=="Y"){
					cout<<question25<<endl; //Is he father of the Sand Snakes?
					cin>>answer25;
					if (answer25=="Y"){
						cout <<"Your character is Oberyn Martell"<<endl;
					}
					if (answer25=="N"){
						cout<<"I'm sorry I don't know what character you are talking about"<<endl;
					}
				}
				if (answer24=="N"){
					cout <<question26<<endl; //Is he a Baratheon?
					cin>>answer26;
					if (answer26=="Y"){
						cout<<question27<<endl; //Did he participate in Robert's Rebellion?
						cin>>answer27;
						if (answer27=="Y"){
							cout<<question28<<endl; //Was he Cersei Lannister's husband?";
							cin>>answer28;
							if (answer28=="Y"){
								cout <<"Your character is Robert Baratheon"<<endl;
							}
							if (answer28=="N"){
								cout<<question29<<endl; //Was he killed by Brianne of Tarth?
								cin>>answer29;
								if (answer29=="Y"){
									cout<<"Your character is Stannis Baratheon"<<endl;
								}
								if (answer29=="N"){
									cout<<"I'm sorry I don't know what character you are talking about"<<endl;
								}
							}
						}
						if (answer27=="N"){
							cout<<question30<<endl; //Was he a son of Cersei Lannister?
							cin>>answer30;
							if (answer30=="Y"){
								cout <<question31<<endl; //Did he gave the order to kill Eddard Stark?
								cin>>answer31;
								if (answer31=="Y"){
									cout <<"Your character is Joffrey Baratheon"<<endl;
								}
								if (answer31=="N"){
									cout <<question32<<endl;//Did he killed himself by jumping off a window?
									cin>>answer32;
									if (answer32=="Y"){
										cout<<"Your character is Tommen Baratheon"<<endl;
									}
									if (answer32=="N"){
										cout <<"I'm sorry I don't know what character you are talking about"<<endl;
								}
							}
							if (answer30=="N"){
								cout <<"I'm sorry I don't know what character you are talking about"<<endl;
								}
							}
						}
					}
					if (answer26=="N"){
						cout<<"Even though my Little Birds are everywhere they didn't whisper to me about that character. I have no further questions."<<endl;
					}
				}
			}
		}
	}
}
return 0;
}
