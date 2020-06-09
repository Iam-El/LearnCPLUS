//
//  main.cpp
//  classes
//
//  Created by Elsy Fernandes on 6/9/20.
//  Copyright © 2020 Iam_El. All rights reserved.
//
// classes

// if you want to develop a game and yo need two players to it .you cannot simply create a player variabes code is is going to be messy
// instead you can create a class

#include <iostream>
// instead a class called player

class Player{
public:  //you can access these anywhere outside the class
    int x,y;
    int speed;
    
    void movePlayer(){
        x=x+speed;
        y=y+speed;
    
    }
    
    void printPosition(){
        std::cout<<x<<' '<<y <<'\n';
    }
    
    
    // These are getters and setters in order to make the sensitive data hidden from the user . you can make variabes private and gertter and setters public - we will see this in later chapter
    int getX(){
        return x;
    }
    
    void setX(int value){
        x=value;
    }
    
    int getY(){
        return y;
    }
    
    void setY(int value){
        y=value;
    }
    
    
    
}; // need semicolon

// now what if we want to move the player. which changes x and y
void Move(Player& player,int xa, int ya)
{
    player.x=player.x+1;
    player.y=player.y+1;
}
// this is one way to move the player x and y cordinates but we can make better than this.
// classes can contains methods . so its possible to write the methods within the classes.




int main() {
    
    Player player; // created a new instance
    player.x=5;// error because player cannot access te private members. by deafault members of class becomes private. if you do not define the members of class to be public everything remains to be private.
    player.y=10;
    player.speed=15;
    std::cout<<"Without encapsulation "<<player.y<<' '<<player.x<<'\n'; // this is direct access not taking care of encapsulation
//    Move(player,1,2); // this is one way do this
    player.movePlayer(); // accesssing the player methods
    player.printPosition();
    
    // now using getters and setters
    std:: cout<<player.getX();
    
    
    
    
    
    
    
    return 0;
}
