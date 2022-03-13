//
//  main.cpp
//  game
//  Created by Eli Dresnin on 7/8/20.
//  Copyright © 2020 Eli Dresnin. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
string story = "once upon a time blah blah charname";
    string username;
cout <<  "name" << endl;
cin >> username;

int index;
index = story.find("charname");
    while (index != -1)
    {
        story.replace(index, 8, username);
        index = story.find("charname");
        
    }
    
    cout << story << endl;
}
